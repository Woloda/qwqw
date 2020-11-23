#include <iostream>
#include <Windows.h>
#include <iomanip>

void matriz_create(int** matriz, const int line, const int column);
void matriz_print(int** matriz, const int line, const int column);
bool sumetria(int** matriz, const int line, const int column);

int main(void)
{
	srand((unsigned)time(NULL));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	using std::cout;
	using std::endl;
	using std::cin;

	int line;
	int column;

	cout << "Задайте розмір матриці: " << endl;
	cout << endl;
	cout << "Кількість рядків: ";
	cin >> line;
	cout << endl;
	cout << "Кількість стовпців: ";
	cin >> column;
	cout << endl;

	int** matriz = new int* [line];
	for (int index = 0; index < line; index++)
		matriz[index] = new int[column];

	matriz_create(matriz, line, column);
	cout << "Сформований масив: " << endl;
	matriz_print(matriz, line, column);

	bool l = sumetria(matriz, line, column);
	if (l == true)
		cout << "Матриця симетрична відносно головної діагоналі";
	else
		cout << "Матриця не симетрична відносно головної діагоналі";

	return 0;
}

void matriz_create(int** matriz, const int line, const int column)
{
	using std::cout;
	using std::endl;
	using std::cin;
	for (int index = 0; index < line; index++)
	{
		for (int index_j = 0; index_j < column; index_j++)
		{
			cout << "a[" << index << "][" << index_j << "] = ";
			cin >> matriz[index][index_j];
		}
		cout << endl;
	}
}


void matriz_print(int** matriz, const int line, const int column)
{
	using std::cout;
	using std::endl;
	cout << endl;
	for (int index = 0; index < line; index++)
	{
		for (int index_j = 0; index_j < column; index_j++)
			cout << std::setw(4) << matriz[index][index_j];
		cout << endl;
	}
	cout << endl;
}

bool sumetria(int** matriz, const int line, const int column)
{
	for (int index = 0; index < line; index++)
	{
		for (int index_j = 0; index_j < column; index_j++)
		{
			if ((matriz[index][index_j] == matriz[index_j][index]) && (index == line - 1))
				return true;
			else
				if(matriz[index][index_j] != matriz[index_j][index])
				return false;
		}
	}
}
