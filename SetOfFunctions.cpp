#include <iostream>
#include <algorithm>
using namespace std;

class setOfFunctions {
private:
    int *nums;
    int size;

public:
    setOfFunctions() {
        nums = new int[10];
        size = 0;
    }
    ~setOfFunctions() {
        delete[] nums;
    }
    void Getting_Array_input() {
        cout << "Enter up to 10 positive numbers (enter a negative number to stop):" << endl;
        size = 0;
        int num;
        while (size < 10) {
            cout << "Enter number " << size + 1 << ": ";
            cin >> num;
            if (num < 0) {
                break;
            }
            nums[size++] = num;
        }
    }
    void ShowEvenAndOddNumbers() {
        cout << "Even numbers: ";
        for (int i = 0; i < size; i++) {
            if (nums[i] % 2 == 0) {
                cout << nums[i] << " ";
            }
        }
        cout << endl;
        cout << "Odd numbers: ";
        for (int i = 0; i < size; i++) {
            if (nums[i] % 2 != 0) {
                cout << nums[i] << " ";
            }
        }
        cout << endl;
    }
    double CalculateAverage() {
        if (size == 0) {
            return 0.0;
        }
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += nums[i];
        }

        return static_cast<double>(sum) / size;
    }
    int CalculateSum() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += nums[i];
        }
        return sum;
    }
    void Sort(bool ascending = true) {
        if (ascending) {
            sort(nums, nums + size);
            cout << "Array sorted in ascending order." << endl;
        } else {
            sort(nums, nums + size, greater<int>());
            cout << "Array sorted in descending order." << endl;
        }
    }
    void MultiplyList(int factor) {
        int result =1;
        for (int i = 0; i < size; i++) {
            result = nums[i] *= factor;
        }
        cout << "Array multiplied by " << result << "." << endl;
    }
};

