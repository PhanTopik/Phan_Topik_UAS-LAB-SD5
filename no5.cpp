#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int interpolationsearch(vector<int> & kursi, int lo, int hi, int x){
    int pos;
    if(lo <= hi && x >= kursi[lo] && x <= kursi[hi]){
        pos = lo + (((double)(hi - lo) / (kursi[hi] - kursi[lo]))  * (x - kursi[lo]));

        if(kursi[pos] == x){
            return pos;
        }

        if (kursi[pos] < x) {
            interpolationsearch(kursi, pos + 1, hi, x);
        }

        if(kursi[pos > x]) {
            interpolationsearch(kursi, lo, pos - 1, x);
        }
    }
    return -1;
}

int main(){
    int n, nomor, x, index, terdekat, mic;
    vector<int> kursi;
    vector<int> beda;


    cout <<"Jumlah kursi yang tersedia: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Masukan nomor kursi yang tersedia: ";
        cin >> nomor;
        kursi.push_back(nomor);
    }
    cout <<"Mencari kursi NO: ";
    cin >> x;
    index = interpolationsearch(kursi, 0, kursi.size() - 1, x);

    if(index > 0){
        cout <<"Status: TERSEDIA\n";
        cout <<"Detail: Ditemukan pada index [" << index <<"]";
    } else if (index = -1){
        cout <<"Status: Tidak Tersedia\n";
        cout << "Opsi: Kursi Terdekat yang tersedia adalah No.";

        for(int i = 0; i < n; i++){
            beda.push_back(abs(kursi[i]-x));
            if (beda[i] < mic)
            mic = kursi[i];
        }
        cout << mic;
    }
    return 0;
}