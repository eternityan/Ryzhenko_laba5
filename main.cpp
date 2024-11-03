#include <iostream>
using namespace std;

int main() {
    int size = 3;
    int arr[size][size] = {
        {18, 11, 14},
        {17, 1, 22},
        {90, 11, 8}
    };
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            for (int k = 0; k < size - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
        for (int j = 0; j < size; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
