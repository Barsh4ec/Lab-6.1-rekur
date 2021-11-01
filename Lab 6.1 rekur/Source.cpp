#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i] <<",";
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;


}

void Kilk(int* a, const int size, int i, int k)
{
		if (a[i] > 0 && a[i] % 3 == 0)
			k++;
		if (i < size - 1)
			return Kilk(a, size, i + 1, k);
	cout << "к≥льк≥сть елемент≥в, €к≥ задовольн€ють вказаному критер≥ю = " << k << endl;
}

void Sum(int* a, const int size, int s, int i)
{
		if (a[i] > 0 && a[i] % 3 == 0)
			s += a[i];
		if (i < size - 1)
			return Sum(a, size, s, i + 1);
	cout << " —ума елемент≥в, €к≥ задовольн€ють вказаному критер≥ю = " << s << endl;
}

void Zam(int* a, const int size, int i)
{
	if (a[i] > 0 && a[i] % 3 == 0)
		cout << setw(4) << 0 <<",";
	else
		cout << setw(4) << a[i] <<",";
	if (i < size -1)
		Zam(a, size, i + 1);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	const int n = 22;
	int a[n];

	int Low = -10;
	int High = 35;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	Kilk(a, n, 0, 0);
	Sum(a, n, 0, 0);
	Zam(a, n, 0);

	return 0;
}
