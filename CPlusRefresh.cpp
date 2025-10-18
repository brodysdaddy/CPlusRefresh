#include <iostream>
using namespace std;

float averageSamples(float a, float b)
{
	return (a + b) / 2.0f;
}

void applyGain(float samples[], int size, float gain)
{
	for (int i = 0; i < size; ++i) {
		samples[i] *= gain; // Multiply each sample by gain
		if (samples[i] > 1.0f) samples[i] = 1.0f; // Clamp to prevent distortion
	}
	// Print the boosted buffer
	for (int i = 0; i < size; ++i) {
		cout << samples[i] << " ";
	}
	cout << endl;
}

int main()
{
	float audioBuffer[3] = { 0.5f, 1.0, 0.2f }; // Fake audio samples
	applyGain(audioBuffer, 3, 1.5f); // Apply 1.5x gain
	return 0;
}