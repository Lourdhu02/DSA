#include <iostream>
using namespace std;

void printFibonacci(int a, int b, int n) {
    if(n == 0) return;       
    cout << a << " ";      
    printFibonacci(b, a + b, n - 1); 
}

int main() {
    int n;
    cin >> n;                
    if(n <= 0) return 0;

    printFibonacci(0, 1, n); 
    cout << endl;
}
