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
	for (int i = 0; i < number_of_shifts; i++)//���� ���� �������� ������ �� number_of_shifts ���������
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;// � ����� ������� ��������� �������
	}
}

void main()
{
	setlocale(LC_ALL, "");
	cout << "�ello Functions!" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	//��������� ������ ���������� �������
	/*for (int i = 0; i < n; i++)
	{
		arr[i] = rand();*/// ������� rand () ���������� ��������������� ����� � ��������� �� 0 �� 32767	}
	// ����� ������� �� �����
	Print(arr, n);
	/*for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;*/
		// ����� ������� �� �������� ����� ���������
		int number_of_shifts;
		cout << "������� ���������� �������:"; cin >> number_of_shifts;
		Shift(arr, n, number_of_shifts);
		//for (int i = 0; i < number_of_shifts; i++)//���� ���� �������� ������ �� number_of_shifts ���������
		//{
		//	int buffer = arr[0];
		//	for (int j = 0; j < n; j++)
		//	{
		//		arr[j] = arr[j + 1];
		//	}
		//	arr[n - 1] = buffer;// � ����� ������� ��������� �������
		//}
		// ����� ���������� ������� �� �����
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
		cout << "������� ���������� �������:"; cin >> number_of_shifts;
		Shift(brr, m, number_of_shifts);
		//for (int i = 0; i < number_of_shifts; i++)//���� ���� �������� ������ �� number_of_shifts ���������
		//{
		//	int buffer = brr[0];
		//	for (int j = 0; j < n; j++)
		//	{
		//		brr[j] = brr[j + 1];
		//	}
		//	brr[n - 1] = buffer;// � ����� ������� ��������� �������
		//}
		Print(brr, m);
		/*for (int i = 0; i < n; i++)
		{
			cout << brr[i] << tab;
		}*/
		cout << endl;
	}


	