#include "colordeclaration.h"
#include "testNumberToPair.h"
int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    printf("\nColor Coding Reference Manual:\n");
    PrintColorCodingReferenceManual();

    return 0;
}
