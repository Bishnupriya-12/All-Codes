#include<iostream>
using namespace std;

// Function to find the maximum number among four numbers
int Maximum(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

// Function to find the minimum number among four numbers
int Minimum(int a, int b, int c, int d) {
    return min(min(a, b), min(c, d));
}

// Function to check if a number is even or odd
void EvenOrOdd(int num) {
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}

// Function to check if a number is positive or negative
void PositiveOrNegative(int num) {
    if (num > 0) {
        cout << num << " is positive." << endl;
    } else if (num < 0) {
        cout << num << " is negative." << endl;
    } else {
        cout << num << " is zero." << endl;
    }
}

int main() {
    int num1, num2, num3, num4;

    // Ask user to enter four numbers
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Find maximum and minimum numbers
    int maxNum = Maximum(num1, num2, num3, num4);
    int minNum = Minimum(num1, num2, num3, num4);

    // Print maximum and minimum numbers
    cout << "Maximum number: " << maxNum << endl;
    cout << "Minimum number: " << minNum << endl;

    // Check if maximum number is even or odd
    EvenOrOdd(maxNum);

    // Check if minimum number is even or odd
    EvenOrOdd(minNum);

    // Check if maximum number is positive or negative
    PositiveOrNegative(maxNum);

    // Check if minimum number is positive or negative
    PositiveOrNegative(minNum);

    return 0;
}

