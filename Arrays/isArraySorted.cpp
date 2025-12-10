#include<iostream>
#include<vector>
using namespace std;

int main() {
    const vector arr = {1,2,3,4,5,6,7,8,9};
    bool sorted = true;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        if ( arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }
    if (sorted) {
        cout <<"Sorted" << endl;
    }
    else {
        cout <<"Not Sorted" << endl;
    }
    return 0;
}