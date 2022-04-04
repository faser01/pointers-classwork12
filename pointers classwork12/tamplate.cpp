#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

 void mySwap(int num1, int num2) {// функция  перемены между собой
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
 void pSwap(int* pn, int* pm) {
	 int tmp = *pn;
	 *pn = *pm;
	 *pm = tmp;
 }
 
 template <typename T> void sumArr(T array[], int length, T* num);



 void compare(int* pn, int* pm);

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;

	/*int n = 10, m = 15;

	int* pn;	//можно сразу int* pn = &n;
	pn = &n;
	cout << pn << endl;//вывод адреса переменной//
	int sum = *pn + 10;
	cout << sum << endl;
	*pn = -7;// указатель на переписаную переменную
	cout << n << endl;// вывод переписаной переменной
	cout << "___\n";
	//pn = &m;
	//cout << pn << endl;сравнение адресов в памяти.. разименование указателя
	int* pm = &m;// создаем не инициализированную переменную
	cout << *pm << endl;// вывод разименнованной переменной... выводиться адрес и значение
   *pm= 100;
   cout << m << endl;//

   int a = 8, b = 9;
   int* pa = &a;
   cout << pa << "-" << *pa << endl;
   pa = &b;
   cout << pa << "-" << *pa << endl;
   int* pb = &b;
   cout << pa << endl;//
   cout << pb << endl;
   cout << &b << endl;*/


   /*int x = 5;
   int* px = &x;
   cout << px << endl;
   px++;//сдвигаемся на ячейку в памяти =4 байта
   cout << px << endl;*/


	/*int arr[5] = {1,2,3,4,5};
	int* pArr = arr;
	cout << *(pArr + 2) << endl;
	int* pArr3 = &arr[3];
	cout << *(pArr3-1) << endl;
	cout << "Изначальный массив:\n[";// вывод массива 
	for (int i = 2; i < 5; i++)// вывод по итерациям
		cout << *(pArr + i) << ", ";
	cout << "\b\b]\n";*/



	/*cout << "задача Введите два числа: ";
cin >> n >> m;
pSwap(&n, &m);
cout << n << " " << m << endl;
//bool f1 = false, f2 = true;
//bool* pf1 = &f1;
//bool* pf2 = &f2;
//mySwap(&f1, &f2);
//cout << f1 << " " << f2 << endl;*/

/*cout << "Задача 1\nИзначальный массив:\n[";
int z1[5] = { 3,5,2,10,0 };
for (int i = 0; i < 5; i++)
	cout << *(z1 + i) << ", ";
cout << "\b\b]\n";
n = 0;
sumArr(z1, 5, &n);// передаем адрес на массив
cout << "Сумма всех элементов = " << n << endl << endl;// вывод массива*/
	
// задача 2

	cout << " Введите 2 числа:";
	cin >> n >> m;
	compare(&n, &m);
	cout << " n =" << n << ", m = " <<  m << endl;






	return 0;
}


void compare(int* pn, int* pm){
	if (*pn > *pm) {
		*pn = *pn;
		*pm = *pm;
	}
	else {
		*pn = 0;
		*pn = 0;
	}
}






template <typename T> void sumArr(T array[], int length, T* num) {// если н не инициализировать то будет ошибка
	for (int i = 0; i < length; i++)
		*num += *(array + i); // array[i] += *(array + i);можно так либо так сделать
}

template <typename T> void showArr(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}