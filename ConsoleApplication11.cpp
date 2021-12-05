#include <iostream>
using namespace std;

int main() {
	string huruf[15] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O" };
	int i, j, k = 0, ks = 0, vk = 0;
	string temp;
	char ulang, pilih;

	do {
		cout << "Program Membuat Array\n";
		cout << "1. Soal Array 1 \n";
		cout << "2. Soal Array 2\n";
		cout << "3. Keluar\n";
		cout << "Pilih : "; cin >> pilih;

		switch (pilih) {
		case '1':
			for (i = 0; i < 15; i++)
			{
				temp = huruf[i];
				if (temp == "A" || temp == "I" || temp == "U" || temp == "E" || temp == "O")
				{
					vk++;
				}
				else
				{
					ks++;
				}
				cout << huruf[i];
				cout << " ";
				if ((i + 1) % 5 == 0)
				{
					cout << endl;
				}
			}
			break;
		case '2':
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5 - i; j++)
				{
					cout << " ";
				}
				for (j = 0; j < i + 1; j++)
				{
					cout << huruf[k];
					k++;
				}
				cout << endl;
			}
			break;
		case '3':
			return 0;
			break;
		default:
			cout << "Ada Pilihan lain? [y/n]";
			cin >> ulang;
		}
	} while
		(ulang == 'y' || ulang == 'Y');
}