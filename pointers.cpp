#include "pointers.h"
#include <memory>  // For unique_ptr

void testPointers() {
    unique_ptr<float[]> buffer(new float[3]);  // Smart pointer array
    buffer[0] = 0.5f;
    buffer[1] = 1.0f;
    buffer[2] = 0.2f;
    cout << "Sample 1: " << buffer[0] << endl;
    cout << "Sample 2: " << buffer[1] << endl;
}