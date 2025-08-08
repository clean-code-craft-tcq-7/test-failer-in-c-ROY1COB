#include <stdio.h>
#include <assert.h>

const char* size(int cms) {
       if (cms > 18 && cms<38) {
        return 'S';
    } else if (cms < 42) {
        return 'M';
    } else if (cms>=42 && cms<90)
        return 'L';
    }else
    {
        return 'Error, enter a valid size';
    }
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