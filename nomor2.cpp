#include <iostream>
using namespace std;

int main() {
	int matriks1[3][3], matriks2[3][3];
	cout << "matriks1 " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "masukkan matriks (" << i << "," << j << ") = ";
			cin >> matriks1[i][j];
		}
	}
	cout << "matriks2 " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "masukkan matriks (" << i << "," << j << ") = ";
			cin >> matriks2[i][j];
		}
	}

	int hasil[3][3]{ 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				hasil[i][j] += matriks1[i][k] * matriks2[k][j];
			}

		}

	}
	cout << "hasil perkalian matriks" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << hasil[i][j] << " ";

		}
		cout << endl;
	}



}