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

void Shift(int arr[], const int n, int number_of_shifts)
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

void main()
{
	setlocale(LC_ALL, "");
	cout << "Нello Functions!" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	//Заполняем массив случайными числами
	/*for (int i = 0; i < n; i++)
	{
		arr[i] = rand();*/// Функция rand () возвращает псевдослучайное число в диапфзоне от 0 до 32767	}
	// Вывод массива на экран
	Print(arr, n);
	/*for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;*/
		// Сдвиг массива на заданное число элементов
		int number_of_shifts;
		cout << "Введите количество сдвигов:"; cin >> number_of_shifts;
		Shift(arr, n, number_of_shifts);
		//for (int i = 0; i < number_of_shifts; i++)//Этот цикл сдвигает массив на number_of_shifts элементов
		//{
		//	int buffer = arr[0];
		//	for (int j = 0; j < n; j++)
		//	{
		//		arr[j] = arr[j + 1];
		//	}
		//	arr[n - 1] = buffer;// в буфер ложится последний элемент
		//}
		// Вывод сдвинутого массива на экран
		Print(arr, n);
		/*for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;*/
		//////////////////////////////////////////////
		const int m = 8;
		int brr[m];
		FillRand(brr, m);
		/*for (int i = 0; i < m; i++)
		{
			brr[i] = rand();
		}*/
		Print(brr, m);
		/*for (int i = 0; i < m; i++)
		{
			cout << brr[i] << tab;
		}*/
		cout << "Введите количество сдвигов:"; cin >> number_of_shifts;
		Shift(brr, m, number_of_shifts);
		//for (int i = 0; i < number_of_shifts; i++)//Этот цикл сдвигает массив на number_of_shifts элементов
		//{
		//	int buffer = brr[0];
		//	for (int j = 0; j < n; j++)
		//	{
		//		brr[j] = brr[j + 1];
		//	}
		//	brr[n - 1] = buffer;// в буфер ложится последний элемент
		//}
		Print(brr, m);
		/*for (int i = 0; i < n; i++)
		{
			cout << brr[i] << tab;
		}*/
		cout << endl;
	}


	