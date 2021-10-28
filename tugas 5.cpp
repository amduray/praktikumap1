#include<iostream>
using namespace std;

int main() {
	int b, c;
	string test[26] = { "A ", "B ", "C ", "D ", "E ", "F ", "G ", "H ", "I ", "J ", "K ", "L ", "M ", "N ", "O ","P ", "Q ", "R ", "S ", "T ", "U ", "V ", "W ", "X ", "Y ", "Z " };

	for (b = 0; b <= 25; b++) {
		for (c = b; c <= 25; c++) {
			cout << test[c];
		}
		cout << endl;
	}
}