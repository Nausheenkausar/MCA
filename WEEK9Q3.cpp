#include <iostream>
using namespace std;

// Function to print the transpose of a matrix
void printTranspose(int matrix[10][10], int rows, int cols) {
    cout << "
Transpose of the matrix:
";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[10][10];
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter matrix elements:
";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "
Original matrix:
";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Call the function
    printTranspose(matrix, rows, cols);

    return 0;
}
