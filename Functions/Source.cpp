#include <iostream>
using namespace std;
#define tab "\t"
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
	cout << endl;
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void ShiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)//Этот цикл сдвигает массив на number_of_shifts элементов
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;// в буфер ложится последний элемент
	}
}

int Sum(int arr[],const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return Sum(arr, n) / n;
}

int minValueIn (int arr[],const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
		min = arr[i];
		}
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}



void main()
{
	setlocale(LC_ALL, "");
	cout << "Нello Functions!" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << " Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << " Среднее арифметическое:" << Avg(arr, n) << endl;
	cout << " Минимальное значение в массиве:" << minValueIn(arr, n) << endl;
	cout << " Максимальное значение в массиве:" << maxValueIn(arr, n) << endl;

		
	// Сдвиг массива на заданное число элементов
		/*int number_of_shifts;
		cout << "Введите количество сдвигов:"; cin >> number_of_shifts;
		ShiftLeft(arr, n, number_of_shifts);
		Print(arr, n);*/
		/*const int m = 8;
		int brr[m];
		FillRand(brr, m);
		Print(brr, m);
		cout << "Введите количество сдвигов:"; cin >> number_of_shifts;
		ShiftLeft(brr, m, number_of_shifts);
		Print(brr, m);
		cout << endl;*/
	}


	