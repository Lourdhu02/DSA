#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "memory addresses:\n";
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i]
             << "  |  Address: " << &arr[i] << endl;
    }

    cout << "\nAccessing element :\n";
    cout << "*(arr + 2) = " << *(arr + 2) << endl; 
    return 0;
}
