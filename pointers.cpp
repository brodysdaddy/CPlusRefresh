#include "pointers.h"
#include <memory> // For unique_ptr

void testPointers() {
    float* buffer = new float[3];  // Raw pointer to array of 3 floats
    buffer[0] = 0.5f;  // Sample data
    buffer[1] = 1.0f;
    buffer[2] = 0.2f;
    cout << "Sample 1: " << buffer[0] << endl;
    cout << "Sample 2: " << buffer[1] << endl;  // Tweak added
    delete[] buffer;  // Free memory
}