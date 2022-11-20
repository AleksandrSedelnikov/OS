#include <iostream>
#include <time.h>
#include <iomanip>
#include <locale>
#include <fstream>
#include <stdlib.h>

using namespace std;

void mass_random(int **mass,int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mass[i][j] = rand() % 201 - 100;
		}
	}
}

void mass_keyboard(int** mass, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "������� (" << i << " " << j << ") �������� � ������: ";
			cin >> mass[i][j];
		}
	}
}

void mass_file(int** mass, int n, int m)
{
	ifstream InFile("D:\\Project Visual Studio\\Laboratornye\\RGZ Infa\\text.txt");
	if (InFile)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				InFile >> mass[i][j];
			}
		}
	}
	else
	{
		cout << endl;
		cout << "\t\t\t\t\t\t********************" << endl;
		cout << "\t\t\t\t\t\t***Fail not found***" << endl;
		cout << "\t\t\t\t\t\t********************" << endl;
		exit(404);
	}
}

void mass_out(int **mass, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << setw(7) << mass[i][j];
		}
		cout << endl;
	}
}

int glav(int** mass, int n, int m)
{
	int k = 0;
	for (int i = 0, j = 0; i < n, j < m; i++, j++)
	{
		if (mass[i][j] < 0)
		{
			k++;
		}
	}
	return k;
}

void uvelich(int** mass, int n, int m)
{
	int j = 1;
	for (int i = 0; i < n; i++)
	{
		mass[i][j] += 9;
	}
}


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int v,flag = 0, k = 0;
	int **mass;
	int n = 6, m = 6;
	mass = new int *[n];
	for (int i = 0; i < n; i++)
	{
		mass[i] = new int[m];
	}
	cout << "\t\t\t**************************************************************" << endl;
	cout << "\t\t\t***����� ���������� � ������� ���������� ��� �� �����������***" << endl;
	cout << "\t\t\t**************************************************************" << endl;
	cout << "\t\t***�������� ������� ��������� ����������������, ������ ��-103 ����������� �.�.***" << endl;
	cout << "\t\t\t\t\t\t***������� 14***" << endl;
	cout << "\t   � ������ ��������� �� ������ ����������� ������������ ������� 3-�� ���������, � ������:     \n\t    (1) - ������ ��������� �����\n\t    (2) - ���� � ����������\n\t    (3) - ���� �� �����" << endl;
	cout << "\t   ����� ��������� ������� ����� �� ��������, �� �������:    \n\t    (*)������ ���������� ������������� ����� � ������� ��������� �������\n\t    (*)��������� ������ ������� ������� �� 9" << endl;
	while (flag == 0)
	{
		cout << "\t   ��� ������ �������� ��������� �������, ������� ����� ��������(������: 1): ";
		cin >> v;
		cout << endl;
		if (v == 1)
		{
			cout << "\t   �� ������� ��������� ������� � ������� ������� ��������� �����." << endl;
			mass_random(mass, n, m);
			flag = 1;
		}
		if (v == 2)
		{
			cout << "\t   �� ������� ��������� ������� � ������� ����� �������� � ����������." << endl;
			mass_keyboard(mass, n, m);
			flag = 1;
		}
		if (v == 3)
		{
			cout << "\t   �� ������� ��������� ������� � ������� ����� �������� �� ����� (text.txt)." << endl;
			mass_file(mass, n, m);
			flag = 1;
		}
		if (v != 1 && v != 2 && v != 3)
		{
			cout << "\t\t\t\t\t***Error!***" << endl;
			cout << "\t***����� �������� ����� �������� ��������� �������, ��������� ���� �������� ��������***" << endl;
			flag = 0;
		}
	}
	cout << endl;
	cout << "\t��������� ������� �� �������� "<< v << "..." << endl;
	cout << endl;
	mass_out(mass,n,m);
	k = glav(mass, n, m);
	cout << endl;
	cout << "\t���������� ������������� ����� � ������� ��������� �������: " << k << endl;
	cout << endl;
	cout << "\t���������� ������� ������� ������� �� 9: " << endl;
	cout << endl;
	uvelich(mass, n, m);
	mass_out(mass, n, m);
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t*********************" << endl;
	cout << "\t\t\t\t\t\t***����� ���������***" << endl;
	cout << "\t\t\t\t\t\t*********************" << endl;
	return 0;
}