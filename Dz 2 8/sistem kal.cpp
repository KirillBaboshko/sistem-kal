#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdio>
#include <time.h>
#include <stdio.h>
#include <cmath>
using namespace std;
struct sistema
{
	int per=0;
	int vtor=0;
	int chisl=0;
	int n[20];
	int size=0;
	int temp= 0;
	char shest[20];
};
void perevorot(int* arr, int size)
{
	int t;
	for (int i = 0; i < size / 2; i++) 
	{
		t = arr[i];
		arr[i]=arr[size - i - 1];
		arr[size - i - 1]=t;
	}
	cout << "Ваше переведенное число " << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
}
void perevorot16(int* arr, int size)
{
	int t;
	for (int i = 0; i < size / 2; i++)
	{
		t = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = t;
	}
	cout << "Ваше переведенное число " << "\n";
	for (int i = 0; i < size; i++)
	{
		switch (arr[i])
		{
			case 10:
			{
				cout << "A";
				break;
			}
			case 11:
			{
				cout << "B";
				break;
			}
			case 12:
			{
				cout << "C";
				break;
			}
			case 13:
			{
				cout << "D";
				break;
			}	
			case 14:
			{
				cout << "E";
				break;
			}
			case 15:
			{
				cout << "F";
				break;
			}
			default:
			{
				cout << arr[i];
				break;
			}
		}

	}
}
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	sistema ch;
	cout << "Введите систему ИЗ которой переводите " << "\n";
	cin >> ch.per;
	cout << "Введите систему В которой переводите " << "\n";
	cin >> ch.vtor;
	switch (ch.per)
	{

	case 10:
	{
		switch (ch.vtor)
		{
		case 2:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl >= ch.vtor; i++)
			{
				ch.n[i] = ch.chisl % ch.vtor;
				ch.chisl = ch.chisl / ch.vtor;
				ch.size++;
				if (ch.chisl < ch.vtor)
				{
					ch.n[i + 1] = ch.chisl;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);
			break;
		}
		case 3:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl >= ch.vtor; i++)
			{
				ch.n[i] = ch.chisl % ch.vtor;
				ch.chisl = ch.chisl / ch.vtor;
				ch.size++;
				if (ch.chisl < ch.vtor)
				{
					ch.n[i + 1] = ch.chisl;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);
			break;
		}

		case 8:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl >= ch.vtor; i++)
			{
				ch.n[i] = ch.chisl % ch.vtor;
				ch.chisl = ch.chisl / ch.vtor;
				ch.size++;
				if (ch.chisl < ch.vtor)
				{
					ch.n[i + 1] = ch.chisl;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);
			break;
		}
		case 16:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			if (ch.temp < ch.vtor)
			{
				cout << "Ваше переведенное число " << "\n";
				switch (ch.temp)
				{
				case 10:
				{
					cout << "A";
					break;
				}
				case 11:
				{
					cout << "B";
					break;
				}
				case 12:
				{
					cout << "C";
					break;
				}
				case 13:
				{
					cout << "D";
					break;
				}
				case 14:
				{
					cout << "E";
					break;
				}
				case 15:
				{
					cout << "F";
					break;
				}
				default:
				{
					cout << ch.temp;
					break;
				}
				}
				break;
			}
			for (int i = 0; ch.temp >= ch.vtor; i++)
			{
				ch.n[i] = ch.temp % ch.vtor;
				ch.temp = ch.temp / ch.vtor;
				ch.size++;
				if (ch.temp < ch.vtor)
				{
					ch.n[i + 1] = ch.temp;
					ch.size++;
				}
			}
			perevorot16(ch.n, ch.size);
			break;
		}
		default:
		{
			cout << "Вы ввели неправельную систему В которой переводите ";
			break;
		}
		}
		break;
	}
	case 2:
	{

		switch (ch.vtor)
		{
		case 10:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			cout << "Ваше переведенное число " << "\n";
			cout << ch.temp;
			break;
		}
		case 3:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			for (int i = 0; ch.temp >= ch.vtor; i++)
			{
				ch.n[i] = ch.temp % ch.vtor;
				ch.temp = ch.temp / ch.vtor;
				ch.size++;
				if (ch.temp < ch.vtor)
				{
					ch.n[i + 1] = ch.temp;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);
			break;
		}
		case 8:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			for (int i = 0; ch.temp >= ch.vtor; i++)
			{
				ch.n[i] = ch.temp % ch.vtor;
				ch.temp = ch.temp / ch.vtor;
				ch.size++;
				if (ch.temp < ch.vtor)
				{
					ch.n[i + 1] = ch.temp;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);

			break;
		}
		case 16:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			if (ch.temp < ch.vtor)
			{
				cout << "Ваше переведенное число " << "\n";
				switch (ch.temp)
				{
				case 10:
				{
					cout << "A";
					break;
				}
				case 11:
				{
					cout << "B";
					break;
				}
				case 12:
				{
					cout << "C";
					break;
				}
				case 13:
				{
					cout << "D";
					break;
				}
				case 14:
				{
					cout << "E";
					break;
				}
				case 15:
				{
					cout << "F";
					break;
				}
				default:
				{
					cout << ch.temp;
					break;
				}
				}
				break;
			}
			for (int i = 0; ch.temp >= ch.vtor; i++)
			{
				ch.n[i] = ch.temp % ch.vtor;
				ch.temp = ch.temp / ch.vtor;
				ch.size++;
				if (ch.temp < ch.vtor)
				{
					ch.n[i + 1] = ch.temp;
					ch.size++;
				}
			}
			perevorot16(ch.n, ch.size);
			break;
		}
		default:
		{
			cout << "Вы ввели неправельную систему В которой переводите ";
			break;
		}
		}

		break;
	}
	

	case 3:
	{

		switch (ch.vtor)
		{
		case 10:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			cout << ch.temp;
			break;
		}
		case 2:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			for (int i = 0; ch.temp >= ch.vtor; i++)
			{
				ch.n[i] = ch.temp % ch.vtor;
				ch.temp = ch.temp / ch.vtor;
				ch.size++;
				if (ch.temp < ch.vtor)
				{
					ch.n[i + 1] = ch.temp;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);
			break;
		}
		case 8:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			for (int i = 0; ch.temp >= ch.vtor; i++)
			{
				ch.n[i] = ch.temp % ch.vtor;
				ch.temp = ch.temp / ch.vtor;
				ch.size++;
				if (ch.temp < ch.vtor)
				{
					ch.n[i + 1] = ch.temp;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);

			break;
		}
		case 16:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			if (ch.temp < ch.vtor)
			{
				cout << "Ваше переведенное число " << "\n";
				switch (ch.temp)
				{
				case 10:
				{
					cout << "A";
					break;
				}
				case 11:
				{
					cout << "B";
					break;
				}
				case 12:
				{
					cout << "C";
					break;
				}
				case 13:
				{
					cout << "D";
					break;
				}
				case 14:
				{
					cout << "E";
					break;
				}
				case 15:
				{
					cout << "F";
					break;
				}
				default:
				{
					cout << ch.temp;
					break;
				}
				}
				break;
			}
			for (int i = 0; ch.temp >= ch.vtor; i++)
			{
				ch.n[i] = ch.temp % ch.vtor;
				ch.temp = ch.temp / ch.vtor;
				ch.size++;
				if (ch.temp < ch.vtor)
				{
					ch.n[i + 1] = ch.temp;
					ch.size++;
				}
			}
			perevorot16(ch.n, ch.size);
			break;
		}
		default:
		{
			cout << "Вы ввели неправельную систему В которой переводите ";
			break;
		}
		}
		break;
	}
	case 8:
	{
		switch (ch.vtor)
		{
		case 10:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			cout << "Ваше переведенное число " << "\n";
			cout << ch.temp;
			break;
		}
		case 3:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			for (int i = 0; ch.temp >= ch.vtor; i++)
			{
				ch.n[i] = ch.temp % ch.vtor;
				ch.temp = ch.temp / ch.vtor;
				ch.size++;
				if (ch.temp < ch.vtor)
				{
					ch.n[i + 1] = ch.temp;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);
			break;
		}
		case 2:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			for (int i = 0; ch.temp >= ch.vtor; i++)
			{
				ch.n[i] = ch.temp % ch.vtor;
				ch.temp = ch.temp / ch.vtor;
				ch.size++;
				if (ch.temp < ch.vtor)
				{
					ch.n[i + 1] = ch.temp;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);

			break;
		}
		case 16:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.chisl;
			for (int i = 0; ch.chisl > 0; i++)
			{
				ch.temp = ch.temp + ((ch.chisl % 10) * pow(ch.per, i));
				ch.chisl = ch.chisl / 10;
			}
			if (ch.temp < ch.vtor)
			{
				cout << "Ваше переведенное число " << "\n";
				switch (ch.temp)
				{
				case 10:
				{
					cout << "A";
					break;
				}
				case 11:
				{
					cout << "B";
					break;
				}
				case 12:
				{
					cout << "C";
					break;
				}
				case 13:
				{
					cout << "D";
					break;
				}
				case 14:
				{
					cout << "E";
					break;
				}
				case 15:
				{
					cout << "F";
					break;
				}
				default:
				{
					cout << ch.temp;
					break;
				}
				}
				break;
			}
			for (int i = 0; ch.temp >= ch.vtor; i++)
			{
				ch.n[i] = ch.temp % ch.vtor;
				ch.temp = ch.temp / ch.vtor;
				ch.size++;
				if (ch.temp < ch.vtor)
				{
					ch.n[i + 1] = ch.temp;
					ch.size++;
				}
			}
			perevorot16(ch.n, ch.size);
			break;
		}
		default:
		{
			cout << "Вы ввели неправельную систему В которой переводите ";
			break;
		}
		}

		break;
	}
	case 16:
	{
		switch (ch.vtor)
		{
		case 10:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.shest;
			for (int i = strlen(ch.shest)-1; i >= 0; i--)
			{
				for (int j = 0; j < strlen(ch.shest); j++)
				{
					switch (ch.shest[i])
					{
					case '0':
					{
						ch.chisl = ch.chisl + 0 * pow(ch.per, j);
						break;

					}
					case '1':
					{
						ch.chisl = ch.chisl + 1 * pow(ch.per, j);
						break;
					}
					case '2':
					{
						ch.chisl = ch.chisl + 2 * pow(ch.per, j);
						break;
					}
					case '3':
					{
						ch.chisl = ch.chisl + 3 * pow(ch.per, j);
						break;
					}
					case '4':
					{
						ch.chisl = ch.chisl + 4 * pow(ch.per, j);
						break;
					}
					case '5':
					{
						ch.chisl = ch.chisl + 5 * pow(ch.per, j);
						break;
					}
					case '6':
					{
						ch.chisl = ch.chisl + 6 * pow(ch.per, j);
						break;
					}
					case '7':
					{
						ch.chisl = ch.chisl + 7 * pow(ch.per, j);
						break;
					}
					case '8':
					{
						ch.chisl = ch.chisl + 8 * pow(ch.per, j);
						break;
					}
					case '9':
					{
						ch.chisl = ch.chisl + 9 * pow(ch.per, j);
						break;
					}
					case 'A':
					{
						ch.chisl = ch.chisl + 10 * pow(ch.per, j);
						break;
					}
					case 'B':
					{
						ch.chisl = ch.chisl + 11 * pow(ch.per, j);
						break;
					}
					
					case 'C':
					{
						ch.chisl = ch.chisl + 12 * pow(ch.per, j);
						break;
					}
					case 'D':
					{
						ch.chisl = ch.chisl + 13 * pow(ch.per, j);
						break;
					}
					case 'E':
					{
						ch.chisl = ch.chisl + 14 * pow(ch.per, j);
						break;
					}
					case 'F':
					{
						ch.chisl = ch.chisl + 15 * pow(ch.per, j);
						break;
					}
					default:
					{
						cout << "Вы ввели неправильное число в шестнадцатиричной системе";
						break;
					}
					}
					i--;
				}
			}
			cout << ch.chisl;
			break;
		}
		case 3:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.shest;
			for (int i = strlen(ch.shest) - 1; i >= 0; i--)
			{
				for (int j = 0; j < strlen(ch.shest); j++)
				{
					switch (ch.shest[i])
					{
					case '0':
					{
						ch.chisl = ch.chisl + 0 * pow(ch.per, j);
						break;

					}
					case '1':
					{
						ch.chisl = ch.chisl + 1 * pow(ch.per, j);
						break;
					}
					case '2':
					{
						ch.chisl = ch.chisl + 2 * pow(ch.per, j);
						break;
					}
					case '3':
					{
						ch.chisl = ch.chisl + 3 * pow(ch.per, j);
						break;
					}
					case '4':
					{
						ch.chisl = ch.chisl + 4 * pow(ch.per, j);
						break;
					}
					case '5':
					{
						ch.chisl = ch.chisl + 5 * pow(ch.per, j);
						break;
					}
					case '6':
					{
						ch.chisl = ch.chisl + 6 * pow(ch.per, j);
						break;
					}
					case '7':
					{
						ch.chisl = ch.chisl + 7 * pow(ch.per, j);
						break;
					}
					case '8':
					{
						ch.chisl = ch.chisl + 8 * pow(ch.per, j);
						break;
					}
					case '9':
					{
						ch.chisl = ch.chisl + 9 * pow(ch.per, j);
						break;
					}
					case 'A':
					{
						ch.chisl = ch.chisl + 10 * pow(ch.per, j);
						break;
					}
					case 'B':
					{
						ch.chisl = ch.chisl + 11 * pow(ch.per, j);
						break;
					}

					case 'C':
					{
						ch.chisl = ch.chisl + 12 * pow(ch.per, j);
						break;
					}
					case 'D':
					{
						ch.chisl = ch.chisl + 13 * pow(ch.per, j);
						break;
					}
					case 'E':
					{
						ch.chisl = ch.chisl + 14 * pow(ch.per, j);
						break;
					}
					case 'F':
					{
						ch.chisl = ch.chisl + 15 * pow(ch.per, j);
						break;
					}
					default:
					{
						cout << "Вы ввели неправильное число в шестнадцатиричной системе";
						break;
					}
					}
					i--;
				}
			}
			for (int o = 0; ch.chisl >= ch.vtor; o++)
			{
				ch.n[o] = ch.chisl % ch.vtor;
				ch.chisl = ch.chisl / ch.vtor;
				ch.size++;
				if (ch.chisl < ch.vtor)
				{
					ch.n[o + 1] = ch.chisl;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);
			break;
		}
		case 2:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.shest;
			for (int i = strlen(ch.shest) - 1; i >= 0; i--)
			{
				for (int j = 0; j < strlen(ch.shest); j++)
				{
					switch (ch.shest[i])
					{
					case '0':
					{
						ch.chisl = ch.chisl + 0 * pow(ch.per, j);
						break;

					}
					case '1':
					{
						ch.chisl = ch.chisl + 1 * pow(ch.per, j);
						break;
					}
					case '2':
					{
						ch.chisl = ch.chisl + 2 * pow(ch.per, j);
						break;
					}
					case '3':
					{
						ch.chisl = ch.chisl + 3 * pow(ch.per, j);
						break;
					}
					case '4':
					{
						ch.chisl = ch.chisl + 4 * pow(ch.per, j);
						break;
					}
					case '5':
					{
						ch.chisl = ch.chisl + 5 * pow(ch.per, j);
						break;
					}
					case '6':
					{
						ch.chisl = ch.chisl + 6 * pow(ch.per, j);
						break;
					}
					case '7':
					{
						ch.chisl = ch.chisl + 7 * pow(ch.per, j);
						break;
					}
					case '8':
					{
						ch.chisl = ch.chisl + 8 * pow(ch.per, j);
						break;
					}
					case '9':
					{
						ch.chisl = ch.chisl + 9 * pow(ch.per, j);
						break;
					}
					case 'A':
					{
						ch.chisl = ch.chisl + 10 * pow(ch.per, j);
						break;
					}
					case 'B':
					{
						ch.chisl = ch.chisl + 11 * pow(ch.per, j);
						break;
					}

					case 'C':
					{
						ch.chisl = ch.chisl + 12 * pow(ch.per, j);
						break;
					}
					case 'D':
					{
						ch.chisl = ch.chisl + 13 * pow(ch.per, j);
						break;
					}
					case 'E':
					{
						ch.chisl = ch.chisl + 14 * pow(ch.per, j);
						break;
					}
					case 'F':
					{
						ch.chisl = ch.chisl + 15 * pow(ch.per, j);
						break;
					}
					default:
					{
						cout << "Вы ввели неправильное число в шестнадцатиричной системе";
						break;
					}
					}
					i--;
				}
			}
			for (int o = 0; ch.chisl >= ch.vtor; o++)
			{
				ch.n[o] = ch.chisl % ch.vtor;
				ch.chisl = ch.chisl / ch.vtor;
				ch.size++;
				if (ch.chisl < ch.vtor)
				{
					ch.n[o + 1] = ch.chisl;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);
			break;
		}
		case 8:
		{
			cout << "Введите ваше число " << "\n";
			cin >> ch.shest;
			for (int i = strlen(ch.shest) - 1; i >= 0; i--)
			{
				for (int j = 0; j < strlen(ch.shest); j++)
				{
					switch (ch.shest[i])
					{
					case '0':
					{
						ch.chisl = ch.chisl + 0 * pow(ch.per, j);
						break;

					}
					case '1':
					{
						ch.chisl = ch.chisl + 1 * pow(ch.per, j);
						break;
					}
					case '2':
					{
						ch.chisl = ch.chisl + 2 * pow(ch.per, j);
						break;
					}
					case '3':
					{
						ch.chisl = ch.chisl + 3 * pow(ch.per, j);
						break;
					}
					case '4':
					{
						ch.chisl = ch.chisl + 4 * pow(ch.per, j);
						break;
					}
					case '5':
					{
						ch.chisl = ch.chisl + 5 * pow(ch.per, j);
						break;
					}
					case '6':
					{
						ch.chisl = ch.chisl + 6 * pow(ch.per, j);
						break;
					}
					case '7':
					{
						ch.chisl = ch.chisl + 7 * pow(ch.per, j);
						break;
					}
					case '8':
					{
						ch.chisl = ch.chisl + 8 * pow(ch.per, j);
						break;
					}
					case '9':
					{
						ch.chisl = ch.chisl + 9 * pow(ch.per, j);
						break;
					}
					case 'A':
					{
						ch.chisl = ch.chisl + 10 * pow(ch.per, j);
						break;
					}
					case 'B':
					{
						ch.chisl = ch.chisl + 11 * pow(ch.per, j);
						break;
					}

					case 'C':
					{
						ch.chisl = ch.chisl + 12 * pow(ch.per, j);
						break;
					}
					case 'D':
					{
						ch.chisl = ch.chisl + 13 * pow(ch.per, j);
						break;
					}
					case 'E':
					{
						ch.chisl = ch.chisl + 14 * pow(ch.per, j);
						break;
					}
					case 'F':
					{
						ch.chisl = ch.chisl + 15 * pow(ch.per, j);
						break;
					}
					default:
					{
						cout << "Вы ввели неправильное число в шестнадцатиричной системе";
						break;
					}
					}
					i--;
				}
			}
			for (int o = 0; ch.chisl >= ch.vtor; o++)
			{
				ch.n[o] = ch.chisl % ch.vtor;
				ch.chisl = ch.chisl / ch.vtor;
				ch.size++;
				if (ch.chisl < ch.vtor)
				{
					ch.n[o + 1] = ch.chisl;
					ch.size++;
				}
			}
			perevorot(ch.n, ch.size);
			break;
		}
		default:
		{
			cout << "Вы ввели неправельную систему В которой переводите ";
			break;
		}
		}

		break;
	}
	default:
	{
		cout << "Вы ввели неправельную систему ИЗ которой переводите ";
		break;
	}
	}

	return 0;
}