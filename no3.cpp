#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n , p , group = 0;

    cout << "Masukan jumlah karyawan: ";
    cin >> n;

    for(int i = 0;i < n; i++){
        cin >> p;
        if(p > 0){
            group++;
        }
    }
    cout <<"Minimal Group: " << group;
    return 0;
}