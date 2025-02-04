#include <iostream>

using namespace std;

int main() {

    int rows, coloms;

    cout << "Enter the number of rows: ";

    cin >> rows;

    cout << "Enter the number of coloms: ";

    cin >> coloms;

    int **table = new int*[rows];
    for (int i = 0; i < rows; i++) {
        table[i] = new int[coloms];
    }

    table[1][2] = 88;
    table[2][1] = 99;
    table[3][3] = 77;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < coloms; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }
    delete[] table;
    system(""); // to stop the console from closing
    return 0;
}