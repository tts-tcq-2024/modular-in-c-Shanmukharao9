
#include "ColorCodingReferenceManual.h"

void PrintColorCodingReferenceManual() {
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d: %s\n", pairNumber, colorPairNames);
    }
}
