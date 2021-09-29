#include <iostream>
using namespace std;

int main() {
	double a1, a2, a3;
	char pilih, ulang;

	do {
		cout << "-\n";
		cout << "Menghitung Bunga Tunggal\n";
		cout << "1. Bunga Tunggal Pertahun\n";
		cout << "2. Bunga Tunggal Persemester\n";
		cout << "pilih (1,2) :"; cin >> pilih;
		cout << "-\n";
		switch (pilih) {
		case '1':
			cout << "*Bunga Tunggal Pertahun*\n";
			cout << "Masukan Tabungan Akhir\t:";
			cin >> a1;
			cout << "Masukan Bunga/Tahun(%)\t:";
			cin >> a2;
			cout << "Masukan Lama Menabung \t:";
			cin >> a3;
			cout << fixed << "Tabungan Awal \t\t:" << 1 / (1 + (a2 / 100) * 1 + (a2 / 100) * 1 + (a2 / 100)) * a1;
			break;
		case '2':
			cout << "*Bunga Tunggal Persmester*\n";
			cout << "Masukan Tabungan Akhir\t:";
			cin >> a1;
			cout << "Masukan Bunga/semester(%):";
			cin >> a2;
			cout << "Masukan Lama Menabung \t:";
			cin >> a3;
			cout << fixed << "Tabungan Awal \t\t:" << 1 / (1 + (a2 / 100 / 2) * 1 + (a2 / 100 / 2) * 1 + (a2 / 100 / 2) * 1 + (a2 / 100 / 2) * 1 + (a2 / 100 / 2) * 1 + (a2 / 100 / 2)) * a1;
			break;
		default:
			cout << "Pilihan anda tidak ada dalam sistem\n";
		}
		cout << "\n\nKembali ke menu utama? (y/n) :";
		cin >> ulang;
	}
	while (ulang == 'y' || ulang == 'Y');
}