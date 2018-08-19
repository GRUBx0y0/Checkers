#include <iostream>
#include <SFML/Graphics.hpp>
#include "SFML/Audio.hpp"

#define MAP_SZIE 8              //���������� ������ �� ����� ������� (����� 8x8)


using namespace sf;             //������������ std � sf
using namespace std;


int Map[MAP_SZIE][MAP_SZIE];         //���������� ������ ����� (������ ���������� ��� �������� ������, ��� ��� ������ ������ ��� ��� �� ����� ������ �����)






//-------------------------------��������� ���� �������

void NullMap();                   //"��������" - ���������� ��� ����� �� �������� �������

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

	sf::RenderWindow window(sf::VideoMode(500, 500), "Checkers", Style::Default);          //������� ���� ����


	Vector2i Mouse_cord;    //���������� ��� ����, ����� ������� ��������� ����   Vector2i ������ � ���� x � y
	


	//HWND hConsole = GetConsoleWindow(); //�� ��� ������� ������� �� ����
	//ShowWindow(hConsole, SW_HIDE); //���������� ������ ����� �������

	

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

		if (event.type == sf::Event::MouseButtonPressed)              //������� ����� ������ ����
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