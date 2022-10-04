// ���������.
#include <iostream>
#include <ctime>
#include <cstdlib>

// ��������� ��� ��������� �-���.
void my_swap(int n1, int n2);
void p_swap(int *pn1, int *pn2);

// ������� 1. ����� ��-��� �������
template <typename T>
void sum_arr1(T arr1[], const int length, T* x);
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end);
template <typename T>
void show_arr(T arr[], const int length);

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 20;

	// ��������� ��� ��������� �-���.
	/*std::cout << n << ' ' << m << '\n'; // 10 20
	//my_swap(n, m); �� �������� �� ��������� - ��� �����
	p_swap(&n,&m);
	std::cout << n << ' ' << m << '\n'; // 20 10
	// ������� ���������� ����������:
	// 1 - ������ � ���������.
	// 2 - ������ � ������ �������� �� ������ ����������� ������.
	// 3 - ������ � ������������ �������.
	// 4 - �������� ������.
	*/

	// ��������� �� ����������.
	/*std::cout << "������ n = " << &n << "\n"; // ������ ������ (���������� ��� ��) ����������.
	
	int* pn; // ���������� ��������� �� ��� int.
	pn = &n; // ���������� ��������� �� ����� ���������� n.
	std::cout << " ������ n = " << pn << "\n"; // ����� �������� ��������� pn;

	std::cout << " n = " << n << "\n"; 
	std::cout << " n = " << *pn << "\n"; // ����� �������� n � ������� ������������� ��������� pn.
	// ������������� - ��� ��������, ����������� � ��������� � ����� ��������� � ����������, ����� ������� ������� � ���������.
	*pn = 15; // ������ �������� n � ������� ������������� ��������� pn.
	std::cout << " ����� n = " << n << "\n";

	std::cout << " ����� m = " << &m << "\n";
	pn = &m; // �������������� ��������� �� ����� ���������� n.
	std::cout << " ������ m = " << pn << "\n";

	int* pm = &m;

	// ����� ������, ���������� ��� �������� ���������, ������� �� ����������� ��. ���� �� 32-� ���������, �� ��������� ����� 4 �����.
	// ���� 64-� ��������� - 8 ����.
	*/

	// ��������� � �������.
	/*const int size = 5;
	int arr[size]{ 10, 20, 30, 40, 50 }; // ��������� ������� - ��� ��������� �� ����� ������� ��-�� �������.
	int* pa2 = &arr[2];
	
	std::cout << " arr[2] = " << *pa2 << "\n"; // 30

	pa2++;
	std::cout << " *pa2 = " << *pa2 << "\n"; // 40
	// ���������� ���������� - ����� ����������� ���������� �� ������������ ���-�� ����� ������ ��� �����. 
	// ��� ����� ����������� ������ �������� �������� � ���������.
	pa2 -= 2;
	std::cout << " *pa2 = " << *pa2 << "\n"; // 20
	
	pa2 = arr; // ���������� ��������� pa2 �� ����� ������� ��-�� ������� arr. 
	std::cout << " *pa2 = " << *pa2 << "\n";
	// ����� ������� ����� ��������� pa2.
	std::cout << " ������ --> ";
	for (int i = 0; i < size; i++)
		std::cout << *(pa2 + i) << " "; // arr[i] = *(arr + i)
	std::cout << "\n";
	*/

	// ������ 1.
	
	const int s1 = 5;
	int arr1[s1];
	std::cout << "\t\t������ 1.\n ����������� ������ --> ";
	fill_arr(arr1, s1, 1, 11);
	show_arr(arr1, s1);
	sum_arr1(arr1, s1, &n);
	std::cout << " ����� ��-��� ������� = " << n << '\n';
	
	

	return 0;
}

void my_swap(int n1, int n2){
	int x = n1;
	n1 = n2;
	n2 = x;
}
void p_swap(int* pn1, int* pn2) {
	int x = *pn1;
	*pn1 = *pn2;
	*pn2 = x;
}

// ������� 1. ����� ��-��� �������
template <typename T>
void sum_arr1(T arr1[], const int length, T* x) {
	*x = 0;
	for (int i = 0; i < length; i++)
		*x += *(arr1 + i);
}
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}
template <typename T>
void show_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}