#include <iostream>
using namespace std;

int arr[20]; //membuat array dengan panjang data 20
int n; //membuat variable inputan n
int main(){}
void input()
{//procedure input
while (true)
{
cout << "masukkan jumlah data pada array : "; //membuat inputan jumlah element array
cin >> n; // memanggil variable inputan n

if (n <= 20)
{//membuat kondisi n tidak lebih dari 20
break;
}
else
{
cout << "\nArray yang anda masukkan maksimal 20 element.\n"; //menampilkan pesan jika data lebih dari 20
}
}
cout << endl; //membuat jarak per baris program
cout << "======================" << endl; //membuat tampilan sususan data element array
cout << "masukkan element array" << endl;
cout << "======================" << endl;

