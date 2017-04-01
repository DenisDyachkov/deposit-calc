#include <stdio.h>

#define CTEST_MAIN
#include <ctest.h>

CTEST (eazy, test1)
{
    ASSERT_EQUAL(0, 0);
}

CTEST (eazy, test2)
{
    ASSERT_EQUAL(0, 1);
}

int main(int argc, const char *argv[])
{ 
    return ctest_main(argc, argv);
}


