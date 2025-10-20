#include <iostream>
#include <vector>
#include <algorithm>
#include "classes.h"
using namespace std;

void testRawArray() {
    vector<int> notes = { 440, 523, 659 };
    cout << "Vector start: ";
    for (int n : notes) {
        cout << n << " ";
    }
    cout << endl;
    notes.push_back(784);
    notes.resize(5);
    cout << "After push: ";
    for (int n : notes) {
        cout << n << " ";
    }
    cout << endl;
    sort(notes.begin(), notes.end());
    cout << "Sorted: ";
    for (int n : notes) {
        cout << n << " ";
    }
    cout << endl;
}