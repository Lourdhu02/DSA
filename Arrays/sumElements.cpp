#include <iostream>
#include <vector>
using namespace std;
int main() {
    const vector<int> array = {23,5,23,4,52,34,42};
    int sumElements = 0;
    for (const int i : array) {
        sumElements += i;
    }
    cout << "Sum of Elements in array " << sumElements << endl;
    return 0;
}