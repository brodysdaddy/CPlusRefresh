#include "fileio.h"
#include <memory>
#include <fstream>  // Ensure this is here

void testFileIO() {
    unique_ptr<float[]> buffer(new float[3]);
    buffer[0] = 0.5f;
    buffer[1] = 1.0f;
    buffer[2] = 0.2f;

    ofstream outFile("samples.txt");
    if (outFile.is_open()) {
        outFile << buffer[0] << " " << buffer[1] << " " << buffer[2] << endl;
        outFile.close();
    }
    else {
        cout << "Error opening file for writing" << endl;
    }

    ifstream inFile("samples.txt");
    float sample1, sample2, sample3;
    if (inFile.is_open()) {
        inFile >> sample1 >> sample2 >> sample3;
        inFile.close();
        cout << "Read Sample 1: " << sample1 << endl;
        cout << "Read Sample 2: " << sample2 << endl;
    }
    else {
        cout << "Error opening file for reading" << endl;
    }
}