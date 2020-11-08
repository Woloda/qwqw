#include <iostream>
#include "io.h"
#include <Windows.h>

double vysota();

void obchbslenna(int hmax);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double h;
	h = vysota();

	obchbslenna(h);

	return 0;
}

double vysota()
{
	std::cout << "Введіть висоту вежі з якої буде падати мячик: ";
	double h;
	std::cin >> h;

	return h;
}

void obchbslenna(int hmax)
{
	int t;

	t = 1;
	double hzmina = (myConstants::g * t * t * 1.) / (2);
	std::cout << "Пройшло 0 секунд, висота мячика над землею становить: " << hzmina << std::endl;
	t = 2;
	double hzmina = (myConstants::g * t * t * 1.) / (2);
	std::cout << "Пройшло 0 секунд, висота мячика над землею становить: " << hzmina << std::endl;
	t = 3;
	double hzmina = (myConstants::g * t * t * 1.) / (2);
	std::cout << "Пройшло 0 секунд, висота мячика над землею становить: " << hzmina << std::endl;
	t = 4;
	double hzmina = (myConstants::g * t * t * 1.) / (2);
	std::cout << "Пройшло 0 секунд, висота мячика над землею становить: " << hzmina << std::endl;
	t = 5;
	double hzmina = (myConstants::g * t * t * 1.) / (2);
	std::cout << "Пройшло 0 секунд, висота мячика над землею становить: " << hzmina << std::endl;

}