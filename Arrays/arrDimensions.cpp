#include <iostream>
using namespace std;

int main() {
    int oneDim[5] = {3, 34, 3, 2, 4};

    cout << "1D Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << oneDim[i] << " ";
    }
    cout << endl;

    int twoDim[2][3] = {
        {2, 3, 5},
        {7, 5, 8}
    };

    cout << "2D Array elements:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << twoDim[i][j] << " ";
        }
        cout << endl;
    }

    int multiDim[2][2][2] = {
        { {3, 45}, {5, 34} },
        { {24, 54}, {7, 9} }
    };

    cout << "3D Array elements:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << multiDim[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
