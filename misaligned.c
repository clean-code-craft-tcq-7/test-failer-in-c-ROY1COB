#include <stdio.h>
#include <assert.h>
int ColorIndextoPainNumberCheck(int majorindex, int minorindex){
    return majorindex*5 + minorindex +1;
}
int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", ColorIndextoPainNumberCheck(i,j), majorColor[i], minorColor[j]);
        }
    }
    return i * j;
}

int testPrintColorMap() {
    printf("\nPrint color map test\n");
    int result = printColorMap();
    assert(result == 25);
    assert(ColorIndextoPainNumberCheck(0,0) ==1);
    printf("All is well (maybe!)\n");
    return 0;
}
