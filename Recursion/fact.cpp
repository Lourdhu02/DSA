#include<iostream>
using namespace std;

int fact(int i){
    if(i==0 || i==1)return 1;
    return i * fact(i-1);
}

int main(){
    int n;
    cin>>n;
    int factF = fact(n);
    cout << factF <<endl;
}