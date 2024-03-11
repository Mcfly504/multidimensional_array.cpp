#include <iostream>

const int ROWS = 3;
const int COLS = 3;

void inputArray(int array[ROWS][COLS]) {
    std::cout << "Enter elements for the array:" << std::endl;

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << "Enter element at position [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }
}

void outputArray(int array[ROWS][COLS]) {
    std::cout << "Array contents:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int myArray[ROWS][COLS];

    // Input data into the array
    inputArray(myArray);

    // Output the contents of the array
    outputArray(myArray);

    return 0;
}
