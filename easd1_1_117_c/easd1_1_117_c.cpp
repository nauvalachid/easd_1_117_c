//1.Karena algoritma adalah cara untuk mengurutkan data
//2.a.Data struktur linear
//  b.Data struktur in-linear
//3.a.Faktor seberapa banyak ruang data
//  b.Faktor banyak langkah yang mempengaruhi algoritma
//4.Algoritma sorting,karena algoritma ini mengurutkan data kecil yang masih belum berurutan dengan cara yang sangat sederhana 
//5.a.Quadratic Bubble sort
//  b.Longlinear Quick Sort

#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array: ";
		cin >> n;

		if (n <= 17)
			break;
		else
			cout << "\nMaksimum panjang array adalah 17" << endl;
	}

	cout << "\n======================" << endl;
	cout << "\nMasukkan element array" << endl;
	cout << "\n======================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void swap(int nauval)
{
	int temp;

	temp = arr[nauval];
	arr[nauval] = arr[nauval];
	arr[nauval] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)						
		return;

	pivot = arr[low];					
	i = low + 1;						
	j = high;