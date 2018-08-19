#include <iostream>
#include <SFML/Graphics.hpp>
#include "SFML/Audio.hpp"

#define MAP_SZIE 8              //Количество клеток на одной стороне (Доска 8x8)


using namespace sf;             //Пространства std и sf
using namespace std;


int Map[MAP_SZIE][MAP_SZIE];         //Глобальный Массив Карты (Сделал Глобальным для простоты вызова, так как других файлов нет это не будет плохим тоном)






//-------------------------------Прототипы всех функций

void NullMap();                   //"Обнуляет" - возвращает все шашки на исходную позицию

//-------------------------------


void NullMap()
{
	int i;

	for (i = 0; i < MAP_SZIE; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			Map[0][i] = 1;
		}

		else
		{
			Map[0][i] = 0;
		}
	}

	for (i = 0; i < MAP_SZIE; i++)
	{
		if ((i + 1) % 2 != 0)
		{
			Map[1][i] = 1;
		}

		else
		{
			Map[1][i] = 0;
		}
	}

	for (i = 0; i < MAP_SZIE; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			Map[2][i] = 1;
		}

		else
		{
			Map[2][i] = 0;
		}
	}

	for (int i = 3; i < 5; i++)
	{
		for (int j = 0; j < MAP_SZIE; j++)
		{
			Map[j][i] = 0;
		}
	}


	for (i = 0; i < MAP_SZIE; i++)
	{
		if ((i + 1) % 2 != 0)
		{
			Map[5][i] = 1;
		}

		else
		{
			Map[5][i] = 0;
		}
	}

	for (i = 0; i < MAP_SZIE; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			Map[6][i] = 1;
		}

		else
		{
			Map[6][i] = 0;
		}
	}

	for (i = 0; i < MAP_SZIE; i++)
	{
		if ((i + 1) % 2 != 0)
		{
			Map[7][i] = 1;
		}

		else
		{
			Map[7][i] = 0;
		}
	}


}


int main()
{

	sf::RenderWindow window(sf::VideoMode(500, 500), "Checkers", Style::Default);          //Главное Окно игры


	Vector2i Mouse_cord;    //Переменная для того, чтобы хранить координты мыши   Vector2i хранит в себе x и y
	


	//HWND hConsole = GetConsoleWindow(); //Во имя отладки прятать не надо
	//ShowWindow(hConsole, SW_HIDE); //собственно прячем оконо консоли

	

	NullMap();



	for (int i = 0; i < MAP_SZIE; i++)
	{
		for (int j = 0; j < MAP_SZIE; j++)
		{
			cout << Map[j][i] << " ";
		}

		cout << "\n";
	}

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (event.type == sf::Event::MouseButtonPressed)              //Нажатие левой кнопки мыши
		{

			if (Mouse::isButtonPressed(Mouse::Left))
			{

			}


		}




		window.clear();


		window.display();

	}

	return 0;
}