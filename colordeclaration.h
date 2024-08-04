

#ifndef COLORDECLARATION_H
#define COLORDECLARATION_H

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

typedef enum {WHITE, RED, BLACK, YELLOW, VIOLET} MajorColor;
typedef enum {BLUE, ORANGE, GREEN, BROWN, SLATE} MinorColor;

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

