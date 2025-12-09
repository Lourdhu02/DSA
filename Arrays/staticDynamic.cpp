#include<iostream>
using namespace std;

int main(){
    int a[5] = {3,5,3,23,7};
    int* dynamicarr = new int[5];

    cout << "static array " ;
    for(int i = 0; i < 5; i++){
        cout << a[i];
    }
    cout << endl;
    for(int i=0; i<5; i++){
        dynamicarr[i] = i*2;
    }
    cout << "dynamic array " ;
    for(int i = 0; i < 5; i++){
        cout << dynamicarr[i];
    }

}