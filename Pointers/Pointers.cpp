// Указатели.
#include <iostream>
#include <ctime>
#include <cstdlib>

// Указатели как параметры ф-ции.
void my_swap(int n1, int n2);
void p_swap(int *pn1, int *pn2);

// Задание 1. Сумма эл-тов массива
template <typename T>
void sum_arr1(T arr1[], const int length, T* x);
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end);
template <typename T>
void show_arr(T arr[], const int length);

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 20;

	// Указатели как параметры ф-ции.
	/*std::cout << n << ' ' << m << '\n'; // 10 20
	//my_swap(n, m); не работает тк параметры - это копии
	p_swap(&n,&m);
	std::cout << n << ' ' << m << '\n'; // 20 10
	// Области применения указателей:
	// 1 - Работа с массивами.
	// 2 - Доступ к разным объектам из разных программных блоков.
	// 3 - Работа с динамической памятью.
	// 4 - Экономия памяти.
	*/

	// Указатели на переменные.
	/*std::cout << "Адресс n = " << &n << "\n"; // Ввывод адреса (выделенная обл ОП) переменной.
	
	int* pn; // Объявление указателя на тип int.
	pn = &n; // направляем указатель на адрес переменной n.
	std::cout << " Адресс n = " << pn << "\n"; // Вывод значения указателя pn;

	std::cout << " n = " << n << "\n"; 
	std::cout << " n = " << *pn << "\n"; // Вывод значения n с помощью разыменования указателя pn.
	// Разыменование - это операция, применяемая к указателю с целью обращения к переменной, адрес которой записан в указателе.
	*pn = 15; // Меняем значение n с помощью разыменования указателя pn.
	std::cout << " Новая n = " << n << "\n";

	std::cout << " Адрес m = " << &m << "\n";
	pn = &m; // Перенаправляем указатель на адрес переменной n.
	std::cout << " Адресс m = " << pn << "\n";

	int* pm = &m;

	// Объем памяти, выделяемый под хранение указателя, зависит от разрядности ОС. Если ОС 32-х разрядная, то указатель весит 4 байта.
	// Если 64-х разрядная - 8 байт.
	*/

	// Указатели и массивы.
	/*const int size = 5;
	int arr[size]{ 10, 20, 30, 40, 50 }; // Назавание массива - это указатель на адрес первого эл-та массива.
	int* pa2 = &arr[2];
	
	std::cout << " arr[2] = " << *pa2 << "\n"; // 30

	pa2++;
	std::cout << " *pa2 = " << *pa2 << "\n"; // 40
	// Арифметика указателей - сдвиг направления указателей на определенное кол-во ячеек вперед или назад. 
	// Для этого применяются ТОЛЬКО операции сложения и вычитания.
	pa2 -= 2;
	std::cout << " *pa2 = " << *pa2 << "\n"; // 20
	
	pa2 = arr; // Направляем указатель pa2 на адрес первого эл-та массива arr. 
	std::cout << " *pa2 = " << *pa2 << "\n";
	// Вывод массива через указатель pa2.
	std::cout << " Массив --> ";
	for (int i = 0; i < size; i++)
		std::cout << *(pa2 + i) << " "; // arr[i] = *(arr + i)
	std::cout << "\n";
	*/

	// Задача 1.
	
	const int s1 = 5;
	int arr1[s1];
	std::cout << "\t\tЗадача 1.\n Изначальный массив --> ";
	fill_arr(arr1, s1, 1, 11);
	show_arr(arr1, s1);
	sum_arr1(arr1, s1, &n);
	std::cout << " Сумма эл-тов массива = " << n << '\n';
	
	

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

// Задание 1. Сумма эл-тов массива
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