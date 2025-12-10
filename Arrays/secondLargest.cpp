#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int secondLargest = INT_MIN;
    int largest = INT_MIN;
    const vector arr = {23,3,3,234,5,23,34,4,23};
    for (const int x : arr) {
        if ( x > largest) {
            secondLargest = largest;
            largest = x;
        }
        else if (x > secondLargest && x != largest) {
            secondLargest = x;
        }
    }
    cout << secondLargest << endl;
    return 0;
}