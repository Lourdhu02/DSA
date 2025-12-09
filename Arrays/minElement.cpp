#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> array = {23, 4, 23, 234, 532, 32, 4242};
    int minElement = array[0];
    for (int i = 1; i < array.size(); i++) {
        if (array[i] < minElement) {
            minElement = array[i];
        }
    }
    cout << "Min Element is " << minElement << endl;
    return 0;
}
