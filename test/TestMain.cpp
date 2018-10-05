#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
}

int main() {
    assert(addNumber(5, 2) == 7);
<<<<<<< HEAD
<<<<<<< HEAD
    assert(timeNumber(5, 2) == 10);
=======
    assert(mux(5,2)==10);
>>>>>>> master
=======
    assert(addnumber2(5, 2) == 4);
>>>>>>> master
    testGetTriangleType();
    return 0;
}
