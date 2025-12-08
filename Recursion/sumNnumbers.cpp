#include<iostream>
using namespace std;

int sumNnumbers(int i){
    if(i==0)return 0;
    return i+ sumNnumbers(i-1);

}


int main(){
    int n;
    cin >> n;
    int sum = sumNnumbers(n);
    cout << sum <<endl;
    return 0;
}