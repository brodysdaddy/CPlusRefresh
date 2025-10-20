#include <iostream>
#include "classes.h"  // New include for testNoteClass
using namespace std;

float averageSamples(float a, float b) {
    return (a + b) / 2.0f;
}

void applyGain(float samples[], int size, float gain) {
    for (int i = 0; i < size; ++i) {
        samples[i] *= gain;
        if (samples[i] > 1.0f) samples[i] = 1.0f;
    }
    for (int i = 0; i < size; ++i) {
        cout << samples[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Average: " << averageSamples(0.8f, 0.2f) << endl;

    float audioBuffer[3] = { 0.5f, 1.0f, 0.2f };
    applyGain(audioBuffer, 3, 1.5f);

    testRawArray();

    testNoteClass();

    return 0;
}