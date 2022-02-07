// Написати функцію, яка отримує покажчик на статичний масив і його розмір.Функція розподіляє додатні, від’ємні та нульові елементи в окремі динамічні масиви.
#include <iostream>
#include<ctime>;
using namespace std;
void rozpodil(int* ptrArr, int size)//функція розподілу елементів в дин.масиви
{
	int* dynarr2 = new int[size];
	int* dynarr3 = new int[size];
	int* dynarr4 = new int[size];

	int a = 0;
	int b = 0;
	int c = 0;

	for (int i = 0; i < size; i++)
	{
		if (ptrArr[i] > 0)//шукаємо додатні елементи
		{
			dynarr2[a] = ptrArr[i];
			a++;
		}
		else if (ptrArr[i] < 0)//шукаємо відємні елементи
		{
			dynarr3[b] = ptrArr[i];
			b++;
		}
		else if (ptrArr[i] == 0)//шукаємо нульові елементи
		{
			dynarr4[c] = ptrArr[i];
			c++;
		}
	}
	cout << endl;
	cout << "Вивівід додатніх елементів :\n\n ";	

	for (int i = 0; i < a; i++)//вивід додатніх елементів дин.масиву  
	{
		cout << dynarr2[i] << "\t";
	}
	cout <<"\n\n";
	cout << "Вивід відємних елементів :\n\n ";

	for (int i = 0; i < b; i++)//вивід відємних елементів дин.масиву  
	{
		cout << dynarr3[i] << "\t";
	}
	cout << "\n\n";
	cout << "Вивід нульових елементів :\n\n ";	

	for (int i = 0; i < c; i++)//вивід нульових елементів дин.масиву  
	{
		cout << dynarr4[i] << "\t";
	}
	delete[] dynarr2;
	delete[] dynarr3;
	delete[] dynarr4;
}
int main()
{
	setlocale(0, "");
	srand(time(NULL));
	const int size = 10;
	int arr1[size];
	cout << "Масив заповнюється випадковими числами від -50 до 50 :\n\n";
	
	for (int i = 0; i < size; i++)//заповнення масиву випадковими числами
	{
		arr1[i] = rand() % 100 - 50;
	}
	
	for (int i = 0; i < size; i++)//вивід масиву 
	{
		cout << arr1[i] << "\t";
	}
	int* ptrarr1 = arr1;

	rozpodil(ptrarr1, size);//функція розподілу елементів в дин.масиви
}





