#include <iostream>
#include <algorithm>
#include "setOfFunctions.cpp"

using namespace std;

int main() {
    setOfFunctions mySet;
    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Enter numbers" << endl;
        cout << "2. Show even and odd numbers" << endl;
        cout << "3. Calculate the average" << endl;
        cout << "4. Calculate the sum" << endl;
        cout << "5. Sort (1 for ascending, 0 for descending)" << endl;
        cout << "6. Multiply the list by a certain number" << endl;
        cout << "7. Close" << endl;
        int option;
        cin >> option;
        switch (option) {
            case 1:
                mySet.Getting_Array_input();
                break;
            case 2:
                mySet.ShowEvenAndOddNumbers();
                break;
            case 3:
                cout << "Average: " << mySet.CalculateAverage() << endl;
                break;
            case 4:
                cout << "Sum: " << mySet.CalculateSum() << endl;
                break;
            case 5:
                int order;
                cout << "Sort (1 for ascending, 0 for descending): ";
                cin >> order;
                mySet.Sort(order == 1);
                break;
            case 6:
                int factor;
                cout << "Enter a number to multiply the list by: ";
                cin >> factor;
                mySet.MultiplyList(factor);
                break;
            case 7:
                return 0;
            default:
                cout << "Invalid option. Please choose a valid option." << endl;
                break;
        }
    }
}