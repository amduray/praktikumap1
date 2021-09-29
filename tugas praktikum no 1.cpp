#include <iostream>
using namespace std;

int main()
{
	float a1;
	float a2;
	float a3;

	cout << "Menghitung Rata-rata Nilai Mahasiswa\n\n";

	cout << "Nilai tugas :";
	cin >> a1;

	cout << "Nilai UTS :";
	cin >> a2;

	cout << "Nilai UAS :";
	cin >> a3;

	cout << "rata-rata nilai :" << (a1 + a2 + a3) / 3 << endl;


}

