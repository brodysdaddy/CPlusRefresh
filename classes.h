#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
using namespace std;

class Note {
private:
    float freq;
public:
    Note(float f = 440.0f) : freq(f) {}
    float getFreq() { return freq; }
    void setFreq(float f) { freq = f; }
};

void testNoteClass();
void testRawArray();  // New prototype for arrays.cpp function

#endif