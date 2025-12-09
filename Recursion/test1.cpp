#include <iostream>
using namespace std;

void printValues(int i, int a) {
    if(i >= a) return;       
    cout << 2 + i << " ";   
    printValues(i + 1, a);   
}

int main() {
    int a = 5;
    printValues(0, a);
    return 0;
}
