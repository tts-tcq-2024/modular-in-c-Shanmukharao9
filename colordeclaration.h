

#ifndef COLORDECLARATION_H
#define COLORDECLARATION_H

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern int numberOfMajorColors;
extern int numberOfMinorColors;

void PrintColorCodingReferenceManual();

#endif // COLORDECLARATION_H

