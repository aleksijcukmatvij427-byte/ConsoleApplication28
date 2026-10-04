#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    srand(time(0)); // Seed for random numbers

    // Task 1. Array of 10 ints, input from keyboard, product of elements
    cout << "Task 1. Array of 10 integers" << endl;
    {
        int arr[10];
        long long product = 1;
        for (int i = 0; i < 10; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
            product *= arr[i];
        }
        cout << "Array: ";
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
        cout << "\nProduct of elements: " << product << endl;
    }

    // Task 2. Array of 7 ints, random [-12..50], count negative and positive
    cout << "\nTask 2. Array of 7 random integers" << endl;
    {
        int arr[7];
        int negCount = 0;
        int posCount = 0;
        for (int i = 0; i < 7; i++) {
            arr[i] = rand() % 63 - 12; // Range -12 to 50
            if (arr[i] < 0) {
                negCount++;
            }
            else if (arr[i] > 0) {
                posCount++;
            }
        }
        cout << "Array: ";
        for (int i = 0; i < 7; i++) {
            cout << arr[i] << " ";
        }
        cout << "\nNegative elements: " << negCount << endl;
        cout << "Positive elements: " << posCount << endl;
    }

    // Task 3. Array of 7 longs, initialized, sum of even elements
    cout << "\nTask 3. Array of 7 longs" << endl;
    {
        long arr[7] = { 10, 15, 20, 25, 30, 35, 40 };
        long sumEven = 0;
        cout << "Array: ";
        for (int i = 0; i < 7; i++) {
            cout << arr[i] << " ";
            if (arr[i] % 2 == 0) {
                sumEven += arr[i];
            }
        }
        cout << "\nSum of even elements: " << sumEven << endl;
    }

    // Task 4. Array of 10 ints, powers of 2, forward and reverse order
    cout << "\nTask 4. Array of powers of 2" << endl;
    {
        int arr[10];
        int value = 2;
        for (int i = 0; i < 10; i++) {
            arr[i] = value;
            value *= 2;
        }
        cout << "Forward order: ";
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
        cout << "\nReverse order: ";
        for (int i = 9; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Task 5. Replace all negative elements with their absolute values
    cout << "\nTask 5. Replace negatives with absolute values" << endl;
    {
        int arr[8] = { -5, 10, -15, 20, -25, 30, -35, 40 };
        cout << "Original array: ";
        for (int i = 0; i < 8; i++) {
            cout << arr[i] << " ";
        }

        for (int i = 0; i < 8; i++) {
            if (arr[i] < 0) {
                arr[i] = abs(arr[i]); // Or: arr[i] = -arr[i];
            }
        }

        cout << "\nModified array: ";
        for (int i = 0; i < 8; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}