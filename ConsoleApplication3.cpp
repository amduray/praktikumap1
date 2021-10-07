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
    int jam_kerja, upah_per_jam, total_upah;

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
        break;
    case 'B':
        upah_per_jam = 20000;
        break;
    case 'C':
        upah_per_jam = 30000;
        break;
    case 'D':
        upah_per_jam = 40000;
        break;
    case 'E':
        upah_per_jam = 50000;
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
        cout << "lembur:" << (jam_kerja - 150) * golongan << endl;
        cout << "gaji total" << nama << golongan + ((jam_kerja - 150) * golongan);
    }

    // proses output
    cout << endl;
    cout << nama << "menerima upah RP" << total_upah << "perbulan";
    cout << endl;
   
    return 0;
}