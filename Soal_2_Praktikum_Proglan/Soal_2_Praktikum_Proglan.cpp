#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
  public:
    int input1;
    string input2, input3, input4;

    void inputLooping(){
        cout << "Test Case 1:" << endl;
        cout << "Masukkan jumlah mahasiswa: " ;
        cin >> input1;
        cin.ignore();
    }

    void inputData(){
        cout << "Nama: " ;
        getline(cin, input2);
        cout << "NIM: " ;
        getline(cin, input3);
        cout << "Jurusan: " ;
        getline(cin, input4);
    }

    void hasilData(){
        cout << "Nama: " << input2 << "," << " NIM: " << input3 << "," << " Jurusan: " << input4 << endl;
    }
    
    void looping(){
        Mahasiswa proglan[input1];
        for (int i = 0; i < input1; i++) {
        cout << "\nMasukkan data mahasiswa ke-" << i + 1 << endl ;
            proglan[i].inputData();
        }
        cout << "\nData mahasiswa: " << endl ;
        for (int i = 0; i < input1; i++) {
            proglan[i].hasilData();
        }
    }
};

int main() {
    Mahasiswa proglan;
    proglan.inputLooping();
    proglan.looping();
  return 0;
}
