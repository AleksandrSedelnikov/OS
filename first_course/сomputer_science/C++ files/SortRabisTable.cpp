#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <math.h>
#include <locale>
#include <time.h>

using namespace std;

void v_lab()
{
	cout << "������������ ������ �8: " << endl;
	cout << endl;
	string text;
	int count = 0, max_c = 0,addr = 0;
	cout << "������� �����������: ";
	getline(cin, text);
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == ' ' || i == text.length() - 1 || text[i] == ',' || text[i] == '.')
		{
			if (count > max_c)
			{
				max_c = count;
				addr = i - count;
			}
			count = 0;
		}
		else
		{
			count++;
		}
	}
	for (int i = addr; i < addr + max_c; i++)
	{
		text[i] = 'X';
	}
	cout << endl;
	cout << text << endl;
}

struct person
{
	int nom;
	string name;
	char pol;
	int god;
	int pos;
};

void d_lab()
{
	struct person rab[10];
	rab[0].nom = 1; rab[0].name = "�������� �.�."; rab[0].pol = '�'; rab[0].god = 1940; rab[0].pos = 1957;
	rab[1].nom = 2; rab[1].name = "������ �. �."; rab[1].pol = '�'; rab[1].god = 1980; rab[1].pos = 1999;
	rab[2].nom = 3; rab[2].name = "������ �. �."; rab[2].pol = '�'; rab[2].god = 1960; rab[2].pos = 1980; 
	rab[3].nom = 4; rab[3].name = "������ �. �."; rab[3].pol = '�'; rab[3].god = 1971; rab[3].pos = 1990;
	rab[4].nom = 5; rab[4].name = "������� �. �."; rab[4].pol = '�'; rab[4].god = 1993; rab[4].pos = 2011; 
	rab[5].nom = 6; rab[5].name = "�������� �. �."; rab[5].pol = '�';  rab[5].god = 1972; rab[5].pos = 1990;
	rab[6].nom = 7; rab[6].name = "�������� �. �."; rab[6].pol = '�'; rab[6].god = 1943; rab[6].pos = 1960;
	rab[7].nom = 8; rab[7].name = "����� �. �."; rab[7].pol = '�'; rab[7].god = 1979; rab[7].pos = 2005;
	rab[8].nom = 9; rab[8].name = "������� �. �."; rab[8].pol = '�'; rab[8].god = 1959; rab[8].pos = 1981;
	rab[9].nom = 10; rab[9].name = "������ �. �."; rab[9].pol = '�'; rab[9].god = 1991; rab[9].pos = 2010;
	cout << endl;
	cout << "�������� �������: " << endl;
	cout << endl;
	cout << left << setw(3) << "�" << setw(15) << "�������. �.�." << setw(4) << "���" << setw(13) << "��� ��������" << setw(26) << "��� ����������� �� ������" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << left << setw(2) << rab[i].nom << ' ';
		cout << left << setw(15) << rab[i].name << ' ';
		cout << left << setw(6) << rab[i].pol << ' ';
		cout << left << setw(17) << rab[i].god << ' ';
		cout << left << setw(26) << rab[i].pos << ' ';
		cout << endl;
	}
	cout << endl;
	cout << endl;
	
	struct person buff;
	for (int i = 0; i < 10; i++)
		for (int b = 0; b < 10; b++)
		{
			if ((2021 - rab[i].god) > 30 && (2021 - rab[i].pos) < (2021 - rab[b].pos))
			{
				buff = rab[i];
				rab[i] = rab[b];
				rab[b] = buff;
			}
		}
	cout << endl;
	cout << "���������� �������: " << endl;
	cout << endl;
	cout << left << setw(3) << "�" << setw(15) << "�������. �.�."<<setw(4)<<"���" << setw(13) << "��� ��������" << setw(26) << "��� ����������� �� ������" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << left << setw(2) << i+1 << ' ';
		cout << left <<setw(15) << rab[i].name << ' ';
		cout << left <<setw(6) <<rab[i].pol<< ' ';
		cout << left << setw(17) <<rab[i].god<< ' ';
		cout << left <<setw(26) <<rab[i].pos<< ' ';
		cout << endl;
	}
}


void sev_lab()
{
	int i = 0, j = 0,k = 0,nom = 0;
	double min = 99999;
	double A[5][5]{
		{-3.8, 0, 5.3, 4.5, 0.5 },
		{0.2, -1.3, 0, -8.5, 3.5},
		{-1.1, 1.8, 5.1, -8.2, 0.32},
		{0, -0.3, 0, -1.28, 0.52},
		{-0.3, 0.5, 1.8, -7.3, 5.5}
	};
	double X[25];
	cout << "����������� �������: " << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << setw(6) << A[i][j];
			if (A[i][j] > 0)
			{
				X[k] = A[i][j];
				k++;
			}
		}
		cout << endl;
	}
	cout << endl;
	cout << "������������ ������ X: " << endl;
	for (i = 0; i < k; i++)
	{
		cout << setw(6) << X[i];
		if (X[i] < min)
		{
			min = X[i];
			nom = i;
		}
	}
	cout << endl;
	cout << "����������� ������� ������� X: " << min << " " << ", ��� �����: " << nom + 1 << endl;
}

void v1_lab()
{
	int count_s1 = 0, count_s2 = 0;
	string s = "pow(e,pow((log(abs(sin(x)))),(1/3))/(a+b))";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			count_s1++;
		}
		else if (s[i] == ')')
		{
			count_s2++;
		}
	}
	if (count_s1 == count_s2)
	{
		cout << "��������� �����������" << endl;
	}
	else
	{
		cout << "���������� ������������� ������: " << count_s1 << " ���������� ������������� ������: " << count_s2 << endl;
	}
}

void v2_lab()
{
	string s1, s2;
	cout << "������� ������: ";
	getline(cin, s1);
	int locate_one = 0, locate_two = 0,count_a = 0,count_k = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == 'a' && count_a != 1)
		{
			locate_one = i;
			count_a++;
		}
		else if (s1[i] == 'k' && count_k != 1)
		{
			locate_two = i;
			count_k++;
		}
	}
	for (int i = locate_one; i < locate_two; i++)
	{
		s2 += s1[i];
	}
	cout << "������������ ������: " << s2 << endl;
}

void p_lab()
{
	int n, i, count_p = 0, count_o = 0;;
	double sum = 0.0, arif = 0.0, chislo = 0.0;
	cout << "������� ���������� ����� � ������������������: "; cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "������� " << i + 1 << " ����� ������������������: "; cin >> chislo;
		if (chislo > 0)
		{
			sum += chislo;
			count_p++;
		}
		else if (chislo < 0)
		{
			count_o++;
		}
	}
	arif = sum / count_p;
	cout << "������� �������������� ������������� ��������: " << arif << " " << "���������� ������������� ��������: " << count_o << endl;
}

void s_lab()
{
	int i, j, h = 0, g = 0, k = 0, l = 0;
	float d_max = 0, d_min = 99999, q = 0.0;
	float mass[5][5]
	{
		{-3.8 , 0 , 5.3 , 4.5, 0.5 },
		{ 0.2 , -1.3 , 0 , -8.5 , 3.5 },
		{ -1.1 , 1.8 , 5.1 , -8.2 , 0.32 },
		{ 0 , -0.3 , 0 , -1.28 , 0.52 },
		{ -0.3 , 0.5 , 1.8 , -7.3 , 5.5 }
	};
	cout << "�������� �������: " << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << setw(6) << mass[i][j];
			if (mass[i][j] > d_max)
			{
				d_max = mass[i][j];
				h = i;
				g = j;
			}
			else if (mass[i][j] < d_min)
			{
				d_min = mass[i][j];
				k = i;
				l = j;
			}
		}
		cout << endl;
	}
	cout << endl;
	cout << "������������ �������� � ��� �������: " << d_max << " (" << h << ";" << g << ") " << endl;
	cout << "����������� �������� � ��� �������: " << d_min << " (" << k << ";" << l << ") " << endl;
	q = mass[h][g];
	mass[h][g] = mass[k][l];
	mass[k][l] = q;
	cout << endl;
	cout << "���������� �������: " << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << setw(6) << mass[i][j];
		}
		cout << endl;
	}

}

int od_lab(int** mass, int n, int m)
{
	int summ = 0;
	int i = 0, j = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mass[i][j] = rand() % 10 - 5;
			cout << setw(6) << mass[i][j];
		}
		cout << endl;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++) // i < j
		{
			if (j > i)
			{
				summ += mass[i][j];
			}
		}
	}
	return summ;
}

void des_lab(int** mass, int n, int m)
{
	int summ = 0;
	int count = 0;
	int i = 0, j = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mass[i][j] = rand() % 10 - 5;
			cout << setw(6) << mass[i][j];
		}
		cout << endl;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++) // i < j
		{
			if (j > i)
			{
				summ += mass[i][j];
				count += 1;
			}
		}
	}
	cout << endl;
	cout << summ << endl;
}

void v4_lab()
{
	string s;
	int count = 0,i,j;
	cout << "������� �����������: ";
	getline(cin, s);
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			for (j = i; j < s.length(); j++)
			{
				s[j] = s[j + 1];
			}
			count++;
		}
	}
	cout << "��������������� ������: " << s << endl;
	cout << "���������� ��������: " << count;
}


void s2_lab()
{
	srand(time(NULL));
	int n, m;
	cout << "������� ���������� �����: "; cin >> n;
	cout << "������� ���������� ��������: "; cin >> m;
	int b = n * m;
	int** mass;
	int* mass_new;
	int i, j, max = -99999,k = 0;
	mass = new int* [n];
	for (int i = 0; i < n; i++)
	{
		mass[i] = new int[m];
	}
	mass_new = new int[b];
	cout << "����������� �������: " << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			mass[i][j] = rand() % 201 - 100;
			cout << setw(6) << mass[i][j];
			if (mass[i][j] > 0)
			{
				mass_new[k] = mass[i][j];
				k++;
			}
		}
		cout << endl;
	}
	cout << endl;
	cout << "������������ ������: " << endl;
	for (i = 0; i < k; i++)
	{
		cout << setw(6) << mass_new[i];
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (mass[i][j] < 0)
			{
				if (mass[i][j] > max)
				{
					max = mass[i][j];
				}
			}
		}
	}
	cout << endl;
	cout << "������ ������� �� max ��� ����� � �������: " << endl;
	for (i = 0; i <= k; i++)
	{
		mass_new[i] = max;
		cout << setw(6) << mass_new[i];
	}
}

void z8_lab()
{
	string s;
	cout << "������� �����������: "; getline(cin, s); s += ' ';
	int i;
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			s[i + 1] = '*';
		}
	}
	s[0] = '*';
	cout << s;
}

void z81_lab()
{
	string s;
	cout << "������� �����������: "; getline(cin, s);
	int i,j,addr = 0,count_p = 0,count = 0;
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			count_p++;
			addr = i + 1;
		}
	}
	for (i = addr; i < s.length(); i++)
	{
		for (j = i; j < s.length(); j++)
		{
			s[j] = s[j - 1];
		}
	}
	cout << s;
}

void l6_lab()
{
	srand(time(NULL));
	int n,i,a,b,buff_one = 0, buff_two = 0;
	cout << "������� ����������� �������: "; cin >> n;
	int *mass = new int[n];
	cout << "����������� ������: " << endl;
	for (i = 0; i < n; i++)
	{
		mass[i] = rand() % 201 - 100;
		cout << setw(6) << mass[i];
	}
	for (i = 0; i < 5; i++)
	{
		for (b = 0; b < 5; b++)
		{
			if (mass[i] < mass[b])
			{
				buff_one = mass[i];
				mass[i] = mass[b];
				mass[b] = buff_one;
			}
		}
	}
	for (i = n - 5; i < n; i++)
	{
		for (b = n - 5; b < n; b++)
		{
			if (mass[i] > mass[b])
			{
				buff_one = mass[i];
				mass[i] = mass[b];
				mass[b] = buff_one;
			}
		}
	}
	cout << endl;
	cout << "���������� ������: " << endl;
	for (i = 0; i < n; i++)
	{
		cout << setw(6) << mass[i];
	}
}

void l8_lab()
{
	setlocale(LC_ALL, "Russian");
	string s;
	cout << "������� �����������: "; getline(cin, s);
	const int n = int('z') - int('a') + 1;
	int str[n];
	for (int i = 0; i < n; i++)
	{
		str[i] = 0;
	}
	for (int i = 0; i < s.length(); i++)
	{
		str[int(s[i]) - int('a')]++;
	}
	cout << "� ����������� �������:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (str[i] != 0)
		{
			cout << char(int('a') + i) << " - " << str[i] << endl;
		}
	}
}

void proga()
{
	char k[] = "�����";
	int p = strlen(k);
	cout << p;

}

void s3_lab()
{
	srand(time(NULL));
	int mass[5][5];
	int X[25];
	int i = 0, j, max = -99999, k = 0,l = 0;
	cout << "����������� �������: " << endl;
	for (i = 0; i < 5; i++) // �������� ������� � ������� ���
	{
		for (j = 0; j < 5; j++)
		{
			mass[i][j] = rand() % 201 - 100;
			cout << setw(6) << mass[i][j];
		}
		cout << endl;
	}
	i = 0;
	while (i < 5)
	{
		for (j = 0; j < 5; j++)
		{
			if (mass[i][j] > max)
			{
				max = mass[i][j];
				k = j;
			}
		}
		mass[i][k] = 0;
		max = -99999;
		i++;
	}
	cout << endl;
	cout << "���������� ������: " << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << setw(6) << mass[i][j];
		}
		cout << endl;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (mass[i][j] < 0)
			{
				X[l] = mass[i][j];
				l++;
			}
		}
	}
	cout << endl;
	cout << "������ ������������� ����� �������:" << endl;
	for (i = 0; i < l; i++)
	{
		cout << setw(6) << X[i];
	}
}

void sev2_lab()
{
	int i = 0, j = 0, k = 0;
	double arif = 0.0,sum = 0.0;
	double A[5][5]{
		{-3.8, 0, 5.3, 4.5, 0.5 },
		{0.2, -1.3, 0, -8.5, 3.5},
		{-1.1, 1.8, 5.1, -8.2, 0.32},
		{0, -0.3, 0, -1.28, 0.52},
		{-0.3, 0.5, 1.8, -7.3, 5.5}
	};
	double X[25];
	cout << "����������� �������: " << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << setw(6) << A[i][j];
			if (A[i][j] < 0)
			{
				X[k] = A[i][j];
				k++;
			}
		}
		cout << endl;
	}
	cout << endl;
	cout << "������������ ������ X: " << endl;
	for (i = 0; i < k; i++)
	{
		cout << setw(6) << X[i];
		sum += X[i];
	}
	arif = sum / k;
	cout << endl << endl;
	cout << "������� �������������� ������������� �������: " << arif << endl;
}

void z88_lab()
{
	string s;
	cout << "������� �����������: "; getline(cin, s);
	int i;
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			s[i] = '_';
		}
	}
	cout << s;
}

int main()
{
	//system("chcp 1251");
	setlocale(LC_ALL, "Russian");
	//cout << endl;
	//v_lab();
	//v1_lab();
	//v2_lab();
	/*cout << endl;
	cout << endl;
	cout << endl;
	*/
	d_lab();
	//sev_lab();
		/*srand(time(NULL));
	int n, m,v;
	int count = 0;
	cout << "������� ����������� �������: " << endl;
	cout << "������� a: ";
	cin >> n;
	cout << "������� b: ";
	cin >> m;
	int** mass;
	mass = new int* [n];
	for (int i = 0; i < n; i++)
	{
		mass[i] = new int[m];
	}
	des_lab(mass,n,m);
	count = od_lab(mass, n, m);
	cout << endl;
	cout << count << endl;
	s_lab();
	p_lab();
	*/
	//v4_lab();
	//s2_lab();
	//z8_lab();
	//z81_lab();
	//l6_lab();
	//l8_lab();
	//proga();
	//s3_lab();
	//sev2_lab();
	//z88_lab();
	return 0;
}