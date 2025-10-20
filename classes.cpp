#include "classes.h"  // Include the header instead

void testNoteClass() {
    Note a4(440.0f);
    cout << "Freq: " << a4.getFreq() << endl;
    a4.setFreq(523.25f);
    cout << "New Freq: " << a4.getFreq() << endl;
}