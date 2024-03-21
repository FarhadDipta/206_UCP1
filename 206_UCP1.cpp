#include <iostream>
using namespace std;

int farhad[06];
int n;

void input(){
    while (true)
    {
        cout <<"masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 06 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1 ) << ": ";
        cin >> farhad[i];
    }
    
} 

void selectionSortArray() {
    for (int j = 0; j <= n - 2; j++) {
        int min_index = j;
        for (int i = j + 1; i < n; i++) {
            if (farhad[i] < farhad[min_index]) {
                min_index = i;
            }
        }
        int temp = farhad[j];
        farhad[j] = farhad[min_index];
        farhad[min_index] = temp;
    }
}

void display (){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for( int j = 0; j < n; j++){
        cout << farhad[j] << endl; //output setiap element array pada garis baru
    }
    cout << "jumlah pass = " << n-1  << endl;
    cout << endl;  
}

int main (){
    input();
    selectionSortArray();
    display();
}