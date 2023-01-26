// 8.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 
// Пользователь вводит с клавиатуры 7 целых чисел. Напишите 
//программу, которая определяет максимальное из этих 7 чисел
//

#include <iostream>

using namespace std;


int main()

{
	
	int number;
	int maxNumber = 0;
	
		for (int i = 1; i <= 7; i++)
		{
			cout << "Введите число   " << i << ": ";
			cin >> number;

			if (maxNumber < number)
			{
				maxNumber = number;
			}
		}

		cout << "Максимальное число равно: " << maxNumber;
}
			