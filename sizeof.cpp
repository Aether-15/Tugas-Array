#include <iostream>
using namespace std;

int Nilai[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 3, 2, 27, 98, 34, 5, 7, 45, 76, 56, 100 };

int main() {
    int length = sizeof(Nilai) / sizeof(*Nilai);
    cout << "Jumlah dari panjang Array adalah : " << length << endl;

    // Ukuran array
    int array[7];
    std::cout << "Ukuran array: " << sizeof(array) << " byte" << endl;
}