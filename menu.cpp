#include <iostream>
#include <conio.h>
using namespace std;

const int N = 5;
int data[N]; // Array dibuat global agar bisa digunakan di semua fungsi
bool dataTersedia = false;

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Array"<<"\n";       
cout<<"1. Masukan Data"<<"\n";
cout<<"2. Tampilkan data"<<"\n";
cout<<"3. Sorting data"<<"\n";
cout<<"4. Sepatah Kata"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        
}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu"<<pesan;
getch();
}

void inputData() {
    system("cls");
    cout << "=== INPUT DATA ARRAY ===\n\n";
    for (int i = 0; i < N; i++) {
        while (true) {
            cout << "Masukkan nilai ke-" << i + 1 << " : ";
            cin >> data[i];

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Input tidak valid! Harus berupa angka.\n";
            } else {
                break;
            }
        }
    }
    dataTersedia = true; // data sudah diisi
    cout << "\nData berhasil disimpan. Tekan tombol untuk kembali...";
    getch();
}

void showData() {
  system("cls");
    if (!dataTersedia) {
        cout << "\nBelum ada data! Silakan input data terlebih dahulu.\n";
    } else {
        cout << "\nIsi array saat ini: ";
        for (int i = 0; i < N; i++) {
            cout << data[i] << " ";
        }
    }
    cout << "\n\nTekan tombol untuk kembali...";
    getch();
}

void insertionSort() {
    if (!dataTersedia) {
        cout << "\nBelum ada data yang bisa diurutkan!\n";
        cout << "Silakan input data terlebih dahulu.\n";
        getch();
        return;
    }

    system("cls");
    cout << "=== PROSES INSERTION SORT ===\n\n";

    for (int i = 1; i < N; i++) {
        int key = data[i];
        int j = i - 1;

        cout << "Langkah ke-" << i << " (key = " << key << "):\n";

        // Proses geser elemen yang lebih besar dari key
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }

        data[j + 1] = key;

        // Tampilkan array setelah langkah ini
        cout << "Array: ";
        for (int k = 0; k < N; k++) {
            cout << data[k] << " ";
        }
        cout << "\n\n";
    }

    cout << "=== HASIL AKHIR SETELAH SORTING ===\n";
    cout<<  "Metode Sorting Insertion Ascending\n";
    for (int i = 0; i < N; i++) {
        cout << data[i] << " ";
    }

    cout << "\n\nTekan tombol untuk kembali...";
    getch();
}

void SepatahKata(){
  system("cls");
  cout<<"Runtuhlah negeri ini tanpa ide dan motivasi, majukan bangsa dimulai dari diri sendiri\n";
  cout<<"Poliban 2025";
  getch();
}


int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    mPertama("pertama");
    inputData();
    break;
   case '2':
    mPertama("ke- dua");
    showData();
    break;  
    case '3':
    mPertama("ke- tiga");
     insertionSort();
    break;
    case '4':
    mPertama("ke- empat");
    SepatahKata();
    break;
    case '5':
    cout<<"\nTerimakasih sudah mencoba program saya :)"<<endl;
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}