#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> array = {23,45,3432,45,424,24};
    int maxElement = array[0];
    for (int i : array) {
        if (i > maxElement) {
            maxElement = i;
        }
    }
    cout << "Max Element in array " << maxElement << endl;
    return 0;

}