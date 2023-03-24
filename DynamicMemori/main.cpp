#include <iostream>
#include <ctime>
#include <cstdlib>


void arr_add(int*& arr, int length, int num) {
	if (num <= 0)
		return;
	int* tmp = new int[length + num]{};
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[] arr;
	arr = tmp;


}








int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	// Динамическая память
	//int* pointer=new int; /*направление указателя на произвольный участок дин памяти размером в 4 байта*/
	//*pointer = 15; //запись в дин память число 15
	//std::cout << "pointer = " << pointer << std::endl;
	//std::cout << "*pointer = " << *pointer << std::endl;

	//delete pointer; //очистка области дин памяти, на которую направлен указатель. Необходимо во избежании утечки памяти

	//pointer = new int;
	//std::cout << "pointer = " << pointer << std::endl;
	//std::cout << "*pointer = " << *pointer << std::endl;
	//delete pointer;

	//Динамические массивы
	
	//std::cout << " Введите размер массива :";
	//int size;
	//std::cin >> size;
	//int* d_arr = new int[size];
	//std::cout << " Ввод массива:\n";
	//for (int i = 0; i < size; i++) {
	//	std::cout << " Введите " << i + 1 << " -й элемент - ";
	//	std::cin >> d_arr[i];
	//}
	//std::cout << " Итоговый массив : \n";
	//for (int i = 0; i < size; i++)
	//	std::cout << d_arr[i] << ' ';
	//std::cout << std::endl;
	//delete[] d_arr;


	// Двумерный динамический массив

	int rows, cols;
	std::cout << "Введите размеры дв массива ";
	std::cin >> rows >> cols;
	//int *mx=new int[rows][cols]  ошибка, не правильно
	int** mx = new int* [rows];
	for (int i = 0; i < rows; i++)
		mx[i] = new int[cols];


	for (int i = 0; i < rows; i++)
		delete[] mx[i];
	delete[] mx;

	// Задача 1 
	std::cout << "Введите размер массива ";
	int size1;
	std::cin >> size1;
	int* arr1 = new int[size1];
	srand(time(NULL));
	std::cout << " Изначальный массив ";


	size1 += n;

	std::cout << " итоговый массив: \n [";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ", ";
	std::cout<<







	return 0;
}