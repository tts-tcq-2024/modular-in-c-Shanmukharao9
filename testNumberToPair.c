#include "convertColorpairString.h"
#include "identifyColorPairnumber.h"
#include "testNumberToPair.h"
#include "colordeclaration.h"

void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
