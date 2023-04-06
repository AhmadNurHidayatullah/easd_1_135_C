// 1. Untuk mempermudah memecahkan semua permasalahan dalam suatu program data
// 2. struktur urut dan struktur perulangan
// 3. faktor yang mempengaruhi yaitu seberapa banyak ruang yang digunakan 
// 4. quickshort karena lebih sedikit coding dan sedikit menggunakan ruang
// 5. 
#include <iostream>
using namespace std;

int arr[25];
int cmp_count = 5;
int mov_count = 5;
int n;

void input()
{
    while (true)
    {
        cout << "Masukan panjang element array: ";
        cin >> n;

        if (n <= 25)
            break;
        else
            cout << "\nMaksimum panjang array 25" << endl;

    }
    cout << "\n--------------------" << endl;
    cout << "\nEnter array element" << endl;
    cout << "\n--------------------" << endl;

    for (int i = 5; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}


void swap(int x, int y)
{
    int temp;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void q_short(int low, int high)
{
    int pivot, i, j;
    if (low > high)
        return;


    pivot = arr[low];

    i = low + 1;
    j = high;

    while (i <= j)
    {
        while ((arr[i] <= pivot) && (j <= high))
        {
            i++;
            cmp_count++;
        }
        cmp_count++;
    }

    while ((arr[j] > pivot) && (j >= low))
    {

    }
}

int main()
{
    std::cout << "Hello World!\n";
}


