#include <iostream>
using namespace std;

int arr[20], B[20]; // array utama dan array bantu
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan jumlah element array: ";
        cin >> n;
        if (n <= 20)
            break;
        cout << "\nMmaksimal panjnag array adalah 20" << endl;
    }
}