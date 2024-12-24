#include <iostream>
using namespace std;

int main() {

	int matriks1[3][3];
	int matriks2[3][3];
	int totalmatriks[3][3];
	cout << "masukkan nilai matriks 3*3 pertama " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "masukkan nilai matriks  (" << i << "," << j << ") = ";
			cin >> matriks1[i][j];

		}

	}
	cout << "masukkan nilai matriks 3*3 kedua" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "masukkan nilai matriks (" << i << "," << j << ") = ";
			cin >> matriks2[i][j];
		}
	}
	cout << " hasil penjumlahan :" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			totalmatriks[i][j] = matriks1[i][j] + matriks2[i][j];
			cout << totalmatriks[i][j] << ", ";
		}
		cout << endl;
	}
}