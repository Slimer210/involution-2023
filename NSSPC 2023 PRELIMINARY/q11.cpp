#include <iostream>
#include <vector>
#include <algorithm>

/* The line of code int index = (i + j) % N; is used to calculate the circular index when looping through the array in a circular manner. Let's break down how it works:

    i is the current index of the base element that we are comparing against.
    j is the loop variable that represents the number of steps we've taken from the base element. It starts from 1 and goes up to N (the size of the array).
    N is the size of the array.

The purpose of (i + j) % N is to calculate an index that wraps around to the beginning of the array once it reaches the end, effectively creating a circular iteration.

Here's an example to illustrate how it works:

Suppose we have an array of size N = 5 and we are currently at index i = 3 (base element at index 3). We want to check the elements in a circular manner, so we start from index i and move j steps ahead.

    When j = 1, index = (3 + 1) % 5 = 4.
    When j = 2, index = (3 + 2) % 5 = 0.
    When j = 3, index = (3 + 3) % 5 = 1.
    When j = 4, index = (3 + 4) % 5 = 2.
    When j = 5, index = (3 + 5) % 5 = 3.

As you can see, the index wraps around after reaching the end of the array, creating a circular iteration. This is exactly what we want to achieve when searching for elements in a circular manner.*/


using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; ++i) {
        int base = arr[i];
        int firstLarger = -1;
        int secondLarger = -1;

        for (int j = 1; j <= N; ++j) {
            int index = (i + j) % N; // Circular logic (refer notes above for explanation)
            if (arr[index] > base) {
                if (firstLarger == -1) {
                    firstLarger = arr[index];
                } else if (secondLarger == -1 || arr[index] > secondLarger) {
                    secondLarger = arr[index];
                    break;
                }
            }
        }

        cout << secondLarger << " ";
    }

    return 0;
}
