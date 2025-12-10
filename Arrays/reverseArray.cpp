#include<iostream>
#include<vector>
using namespace std;

int main() {
    const vector<int> array = {34,23,43,234,32};
    for (int i = array.size() - 1; i >= 0; i--) {
        cout << array[i] << " ";

    }
    return 0;
}