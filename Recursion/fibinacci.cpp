#include<iostream>
using namespace std;


int fibonacci(int i){
    if(i==0)return 0;
    if(i==1)return 1;
    return fibonacci(i-1) + fibonacci(i-2);
}

int main(){
    int n;
    cin >> n;
    int fb_series = fibonacci(n);
    cout << fb_series << endl;
}