#include<iostream>
using namespace std;

void naturalNumbers(int i){
    if(i==0)return;
    cout << i << " ";
    naturalNumbers(i-1);
    
}

int main(){
    int n;
    cin >> n;
    naturalNumbers(n);
    return 0;
}