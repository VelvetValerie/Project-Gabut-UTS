#include <iostream>
#include <conio.h>
using namespace std;

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Array"<<"\n";       
cout<<"1. Masukan Data, Tampilkan, dan Sorting"<<"\n";
cout<<"2. Sepatah Kata"<<"\n";            
cout<<"3. Exit"<<"\n";           
cout<<"Masukan angka :";        
}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}

  void masukkanData(){
    const int N = 5;
    int data[N];

    system("cls");
    cout << "=== PROGRAM INSERTION SORT (TAMPILAN TIAP LANGKAH) ===\n\n";

    // Input nilai
    for (int i = 0; i < N; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << " : ";
        cin >> data[i];
        cout << endl;
    }

    // Proses Insertion Sort dengan tampilan langkah-langkah
    cout << "\n--- Proses Insertion Sort ---\n";
    for (int i = 1; i < N; i++) {
        int key = data[i];
        int j = i - 1;

        cout << "Langkah ke-" << i << " (key = " << key << "):\n";

        // Geser elemen yang lebih besar dari key ke kanan
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;

        // Tampilkan array setelah langkah ini
        cout << "Array setelah langkah ke-" << i << " : ";
        for (int k = 0; k < N; k++) {
            cout << data[k] << " ";
        }
        cout << "\n\n";
    }

    // Hasil akhir
    cout << "=== HASIL AKHIR SETELAH SORTING ===\n";
    for (int i = 0; i < N; i++) {
        cout << data[i] << " ";
    }

    cout << "\n\nTekan tombol apa saja untuk keluar...";
    getch();
}

void SepatahKata(){
  system("cls");
  cout<<"Runtuhlah negeri ini tanpa ide dan motivasi, majukan bangsa dimulai dari diri sendiri"<<endl;
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
    masukkanData();
    break;
   case '2':
    mPertama("ke- dua");
    SepatahKata();
    break;  
   case '3':
    mPertama("ke- tiga");
    cout<<"\nTerimakasih sudah mencoba program saya :)"<<endl;
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='3');
  return 0;
}