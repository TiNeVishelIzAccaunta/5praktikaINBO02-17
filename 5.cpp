
#include "iostream"
#include "clocale"
using namespace std;

void sortirovka (int *b,int size,int a)
{
	setlocale(LC_ALL, "rus");
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (b[j] > b[j+1])
			{
				a = b[j];
				b[j] = b[j+1];
				b[j+1] = a;
			}
		}
    }
	cout << "ќтсортированный массив:" << "  ";
	for (int i = 0; i < size; i++)
	{
		cout << b[i] << " ";
	}
}

void sortirovka (float *b, int size, float a)
{
	setlocale(LC_ALL, "rus");
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (b[j] > b[j+1])
			{
				a = b[j];
				b[j] = b[j+1];
				b[j+1] = a;
			}
		}
	}
	cout << "ќтсортированный массив:" << "  ";
	for (int i = 0; i < size; i++)
	{
		cout << b[i] << " ";
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0;
	float a1 = 0;
	int size;
	cout << "¬ведите размер целочисленного массива:" << " ";
	cin >> size;
	int *massiv = new int [size];
	float *massiv1 = new float [size];
	cout << "¬ведите целые числа:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> massiv[i];
	}
	cout << "¬аш массив:" << "  ";
	for (int i = 0; i < size; i++)
	{
		cout << massiv[i] << " ";
	}
	sortirovka(massiv, size, a);
	cout << endl;
	cout << "¬ведите размер дробного массива:" << "  ";
	cin >> size;
	cout << "¬ведите дробные числа:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> massiv1[i];
	}
	cout << "¬аш массив:" << "  ";
	for (int i = 0; i < size; i++)
	{
		cout << massiv1[i] << " ";
	}
	sortirovka(massiv1, size, a1);
	system("pause");
    return 0;
}
