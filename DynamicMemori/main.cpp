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
	// ������������ ������
	//int* pointer=new int; /*����������� ��������� �� ������������ ������� ��� ������ �������� � 4 �����*/
	//*pointer = 15; //������ � ��� ������ ����� 15
	//std::cout << "pointer = " << pointer << std::endl;
	//std::cout << "*pointer = " << *pointer << std::endl;

	//delete pointer; //������� ������� ��� ������, �� ������� ��������� ���������. ���������� �� ��������� ������ ������

	//pointer = new int;
	//std::cout << "pointer = " << pointer << std::endl;
	//std::cout << "*pointer = " << *pointer << std::endl;
	//delete pointer;

	//������������ �������
	
	//std::cout << " ������� ������ ������� :";
	//int size;
	//std::cin >> size;
	//int* d_arr = new int[size];
	//std::cout << " ���� �������:\n";
	//for (int i = 0; i < size; i++) {
	//	std::cout << " ������� " << i + 1 << " -� ������� - ";
	//	std::cin >> d_arr[i];
	//}
	//std::cout << " �������� ������ : \n";
	//for (int i = 0; i < size; i++)
	//	std::cout << d_arr[i] << ' ';
	//std::cout << std::endl;
	//delete[] d_arr;


	// ��������� ������������ ������

	int rows, cols;
	std::cout << "������� ������� �� ������� ";
	std::cin >> rows >> cols;
	//int *mx=new int[rows][cols]  ������, �� ���������
	int** mx = new int* [rows];
	for (int i = 0; i < rows; i++)
		mx[i] = new int[cols];


	for (int i = 0; i < rows; i++)
		delete[] mx[i];
	delete[] mx;

	// ������ 1 
	std::cout << "������� ������ ������� ";
	int size1;
	std::cin >> size1;
	int* arr1 = new int[size1];
	srand(time(NULL));
	std::cout << " ����������� ������ ";


	size1 += n;

	std::cout << " �������� ������: \n [";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ", ";
	std::cout<<







	return 0;
}