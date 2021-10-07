#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "##  Program Menghitung Gaji Karyawan  ##" << endl;
    cout << "========================================" << endl;
    cout << endl;

    string nama;
    char golongan;
    int jam_kerja, upah_per_jam, total_upah , Gaji_tetap;

    // proses input
    cout << "Nama Karyawan: ";
    getline(cin, nama);

    cout << "Golongan: ";
    cin >> golongan;

    cout << "Jumlah jam kerja: ";
    cin >> jam_kerja;

    // tentukan jumlah upah per jam berdasarkan golongan
    switch (golongan) {
    case 'A':
        upah_per_jam = 10000;
        Gaji_tetap = 1000000;
        break;
    case 'B':
        upah_per_jam = 20000;
        Gaji_tetap = 2000000;
        break;
    case 'C':
        upah_per_jam = 30000;
        Gaji_tetap = 3000000;
        break;
    case 'D':
        upah_per_jam = 40000;
        Gaji_tetap = 4000000;
        break;
    case 'E':
        upah_per_jam = 50000;
        Gaji_tetap = 5000000;
        break;
    }
    total_upah = jam_kerja * upah_per_jam;
    // cek apakah jam kerja lebih dari 150 jam
    if ((jam_kerja - 150) > 0) {
        total_upah = total_upah + ((jam_kerja - 260) * golongan);
        if (jam_kerja <= 150) {
            cout << "gaji pokok:A";
        }
        else(jam_kerja > 150);
    }

    // proses output
    cout << endl;
    cout << nama << "menerima upah RP" << total_upah << "perbulan";
    cout << "lembur:" << (jam_kerja - 150) * upah_per_jam << endl;
    cout << "gaji total" << nama << Gaji_tetap + ((jam_kerja - 150) * upah_per_jam);
    cout << endl;
   
    return 0;
}