#include<iostream>
#include<vector>
using namespace std;

int main() {
    int count = 0;
    const vector array = {23,44,23,4,4,2243,4234,234,4};
    for (const int i : array) {
        if (int target = 4; i == target ) {
            count++;
        }
    }
    cout <<"Number of occurrences = " << count << endl;
    return 0;

}