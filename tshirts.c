#include <stdio.h>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if (cms > 18 && cms<38) {
        sizeName = 'S';
    } else if (cms < 42) {
        sizeName = 'M';
    } else if (cms>=42 && cms<90)
        sizeName = 'L';
    }else
    {
        sizeName = 'Error, enter a valid size'
    }
    return sizeName;
}

int testTshirtSize() {
    printf("\nTshirt size test\n");
    assert(size(-1) == "Error, enter a valid size"); // should not accept any negative value.
    assert(size(10) == "Error, enter a valid size"); // not a vaild size, too small.
    assert(size(37) == 'S');
    assert(size(38) == 'M');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(200) == "Error, enter a valid size") // max allowed shoulder length is 90cm
    printf("All is well (maybe!)\n");
    return 0;
}

