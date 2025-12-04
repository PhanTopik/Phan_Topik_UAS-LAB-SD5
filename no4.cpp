#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main () {
    queue<string> express;
    queue<string> reguler;
    int n, berat, total = 0;
    string nama, layanan;
    
    cout << "Jumlah pelanggan: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Masukan nama, berat ,dan jenis layanan(express/reguler): ";
        cin >> nama >>  berat >> layanan;
        if(layanan == "express"){
            express.push(nama);
            total = total + (berat * 5);
        } else if(layanan == "reguler"){
            reguler.push(nama);
            total = total + (berat * 10);
        }
    }
    cout << "Urutan: ";


    while(!express.empty()){
        cout << express.front() << " ";
        express.pop();
    }
    while(!reguler.empty()) {
        cout << reguler.front() << " ";
        reguler.pop();
    }
    cout << "\nTotal Waktu: " << total << " Menit";
    return 0;
}