#include <stdio.h>
#include <deposit.h>
#include <ctest.h>

CTEST(correct_input, days_0_deposit_10000) {
    int days, deposit;
    
    const int result = inputData(&days, &deposit);
    
    ASSERT_EQUAL(0, result);
}
