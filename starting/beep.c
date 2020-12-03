#include <stdio.h>
#include <windows.h>

int main() {

    // Frequencies of Musical Notes: C, D, E, F, G, A, B, C
    float freq[8] = { 256.87, 288.33, 323.63, 342.88, 384.87, 432.00, 484.90, 513.74 };

    // The notes: C, D, E, F, G, A, B, C
    char *notes[8] = { "C", "D", "E", "F", "G", "A", "B", "C" };

    // First loop, goes straight up
    for (int i = 0; i < 8; i++) {
        printf("\n[%d] Beep: %s\n", i, notes[i]);
        Beep(freq[i], 1000);
    }

    // End of first loop
    printf("----------------------------------");

    // Second Loop, goes down
    for (int i = 7; i >= 0; i--) {
        printf("\n[%d] Beep: %s\n", i, notes[i]);
        Beep(freq[i], 1000);
    }

    return 0;
}
