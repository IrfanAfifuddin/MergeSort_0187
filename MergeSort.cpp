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

    cout << "\n--------------------------" << endl;
    cout << "Inputkan isi element array: " << endl;
    cout << "\n--------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " :";
        cin >> arr[i];
    }
}

void mergeSort (int low, int high)
{
    if (low >= high){ // step 1
        return; // step 1a
    }

    int mid  = (low + high) / 2; // step 2

    mergeSort(low, mid); // step 3b
    mergeSort(mid + 1, high); // step 3b

    int i = low;     // step 4a
    int j = mid + 1; // step 4b
    int k = low;     // step 4c

    while (i <= mid && j <= high) //step 4d
    {
        if (arr[i] <= arr[j]) // step 4d.i
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++; //step 4d.ii
    }   

    while (j <= high) // step 4e
    {
        B[k] = arr[j]; // step 4f.i
        j++;           // step 4f.ii
        k = k + 1;     // step 4f.iii
    }

    for (int x = low; x <= high; x++) // step 5
    {
        arr[x] = B[x];
    }
}

void output()
{
    cout << "\nData setelah diurutkan (Merge Sort): ";
}