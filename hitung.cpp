#include <iostream>

using namespace std;

int main()
{//begin
    //numeric nPanjang, nLebar, nLuas
    float Panjang, Lebar, Luas;
    //display 'Masukan panjangnya = '
    cout <<  "Masukan panjangnya = ";
    //accept nPanjang
    cin >> Panjang;
    //display 'Masukan lebarnya'
    cout << "Masukan Lebarnya";
    //accept nLebar
    cin >> Lebar;
    //compute nLuas = nPanjang * nLebar
    Luas = Panjang * Lebar;
    //display 'Luas persegi panjang = ' + nLuas
    cout << "Luas persegi panjang = " << Luas;
}//end