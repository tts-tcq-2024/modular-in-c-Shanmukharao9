

#ifndef COLORDECLARATION_H
#define COLORDECLARATION_H

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

typedef enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
typedef enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern int numberOfMajorColors;
extern int numberOfMinorColors;

void PrintColorCodingReferenceManual();

#endif // COLORDECLARATION_H

