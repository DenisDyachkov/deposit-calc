#include <stdio.h>
#include <deposit.h>
#include <ctest.h>

CTEST(correct_input, days_0_deposit_10000) {
    const int days = 0, deposit = 10000;
    
    const int result = validationData(days, deposit);
    ASSERT_EQUAL(1, result);
}

CTEST(correct_input, days_365_deposit_10000) {
    const int days = 365, deposit = 10000;
    
    const int result = validationData(days, deposit);
    ASSERT_EQUAL(1, result);
}

CTEST(correct_input, days_minus_1_deposit_10000) {
    const int days = -1, deposit = 10000;
    
    const int result = validationData(days, deposit);
    ASSERT_EQUAL(0, result);
}

CTEST(correct_input, days_366_deposit_10000) {
    const int days = 366, deposit = 10000;
    
    const int result = validationData(days, deposit);
    ASSERT_EQUAL(0, result);
}

CTEST(correct_input, days_180_deposit_9000) {
    const int days = 180, deposit = 9000;
    
    const int result = validationData(days, deposit);
    ASSERT_EQUAL(0, result);
}
