#include <iostream>
using namespace std;

class Kalkulator {
  public:
    int input1, input2, hasil1, hasil2, hasil3, hasil4;

    void operasi(){
        hasil1 = input1 + input2;
        hasil2 = input1 - input2;
        hasil3 = input1 * input2;
        hasil4 = input1 / input2;
    }
    void tampilkanOperasi(){
        cout << "Masukkan bilangan pertama: " ;
        cin >> input1; 
        cout << "Masukkan bilangan kedua: " ;
        cin >> input2 ;

        operasi ();

        cout << "\nHasil penjumlahan: " << hasil1 << endl; 
        cout << "Hasil pengurangan: " << hasil2 << endl;
        cout << "Hasil perkalian: " << hasil3 << endl; 
        cout << "Hasil pembagian: " << hasil4 << endl;
    }
};

int main() {
    Kalkulator proglan;
    proglan.tampilkanOperasi();
  return 0;
}
