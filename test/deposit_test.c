#include <stdio.h>
#include <deposit.h>
#include <ctest.h>

CTEST(deposit_test, days_0_to_30_deposit_10000) {
    ASSERT_DBL_NEAR(0.9f, getPercentOfInc(0, 10000));
    ASSERT_DBL_NEAR(9000.f, getIncome(0, 10000));
    
    ASSERT_DBL_NEAR(0.9f, getPercentOfInc(10, 10000));
    ASSERT_DBL_NEAR(9000.f, getIncome(10, 10000));
    
    ASSERT_DBL_NEAR(0.9f, getPercentOfInc(30, 10000));
    ASSERT_DBL_NEAR(9000.f, getIncome(30, 10000));
}

CTEST(deposit_test, days_0_to_30_deposit_100000) {
    ASSERT_DBL_NEAR(0.9f, getPercentOfInc(0, 100000));
    ASSERT_DBL_NEAR(90000.f, getIncome(0, 100000));
    
    ASSERT_DBL_NEAR(0.9f, getPercentOfInc(10, 100000));
    ASSERT_DBL_NEAR(90000.f, getIncome(10, 100000));
    
    ASSERT_DBL_NEAR(0.9f, getPercentOfInc(30, 100000));
    ASSERT_DBL_NEAR(90000.f, getIncome(30, 100000));
}

CTEST(deposit_test, days_0_to_30_deposit_200000) {
    ASSERT_DBL_NEAR(0.9f, getPercentOfInc(0, 200000));
    ASSERT_DBL_NEAR(180000.f, getIncome(0, 200000));
    
    ASSERT_DBL_NEAR(0.9f, getPercentOfInc(10, 200000));
    ASSERT_DBL_NEAR(180000.f, getIncome(10, 200000));
    
    ASSERT_DBL_NEAR(0.9f, getPercentOfInc(30, 200000));
    ASSERT_DBL_NEAR(180000.f, getIncome(30, 200000));
}

CTEST(deposit_test, days_31_to_120_deposit_10000) {
    ASSERT_DBL_NEAR(1.02f, getPercentOfInc(31, 10000));
    ASSERT_DBL_NEAR(10200.f, getIncome(31, 10000));
    
    ASSERT_DBL_NEAR(1.02f, getPercentOfInc(80, 10000));
    ASSERT_DBL_NEAR(10200.f, getIncome(80, 10000));
    
    ASSERT_DBL_NEAR(1.02f, getPercentOfInc(120, 10000));
    ASSERT_DBL_NEAR(10200.f, getIncome(120, 10000));
}

CTEST(deposit_test, days_31_to_120_deposit_100000) {
    ASSERT_DBL_NEAR(1.02f, getPercentOfInc(31, 100000));
    ASSERT_DBL_NEAR(102000.f, getIncome(31, 100000));
    
    ASSERT_DBL_NEAR(1.02f, getPercentOfInc(80, 100000));
    ASSERT_DBL_NEAR(102000.f, getIncome(80, 100000));
    
    ASSERT_DBL_NEAR(1.02f, getPercentOfInc(120, 100000));
    ASSERT_DBL_NEAR(102000.f, getIncome(120, 100000));
}

CTEST(deposit_test, days_31_to_120_deposit_200000) {
    ASSERT_DBL_NEAR(1.03f, getPercentOfInc(31, 200000));
    ASSERT_DBL_NEAR(206000.f, getIncome(31, 200000));
    
    ASSERT_DBL_NEAR(1.03f, getPercentOfInc(80, 200000));
    ASSERT_DBL_NEAR(206000.f, getIncome(80, 200000));
    
    ASSERT_DBL_NEAR(1.03f, getPercentOfInc(120, 200000));
    ASSERT_DBL_NEAR(206000.f, getIncome(120, 200000));
}

CTEST(deposit_test, days_121_to_240_deposit_10000) {
    ASSERT_DBL_NEAR(1.06f, getPercentOfInc(121, 10000));
    ASSERT_DBL_NEAR_TOL(10600.f, getIncome(121, 10000), 1e-2);
    
    ASSERT_DBL_NEAR(1.06f, getPercentOfInc(180, 10000));
    ASSERT_DBL_NEAR_TOL(10600.f, getIncome(180, 10000), 1e-2);
    
    ASSERT_DBL_NEAR(1.06f, getPercentOfInc(240, 10000));
    ASSERT_DBL_NEAR_TOL(10600.f, getIncome(240, 10000), 1e-2);
}

CTEST(deposit_test, days_121_to_240_deposit_100000) {
    ASSERT_DBL_NEAR(1.06f, getPercentOfInc(121, 100000));
    ASSERT_DBL_NEAR_TOL(106000.f, getIncome(121, 100000), 1e-2);
    
    ASSERT_DBL_NEAR(1.06f, getPercentOfInc(180, 100000));
    ASSERT_DBL_NEAR_TOL(106000.f, getIncome(180, 100000), 1e-2);
    
    ASSERT_DBL_NEAR(1.06f, getPercentOfInc(240, 100000));
    ASSERT_DBL_NEAR_TOL(106000.f, getIncome(240, 100000), 1e-2);
}

CTEST(deposit_test, days_121_to_240_deposit_200000) {
    ASSERT_DBL_NEAR(1.08f, getPercentOfInc(121, 200000));
    ASSERT_DBL_NEAR_TOL(216000.f, getIncome(121, 200000), 1e-1);
    
    ASSERT_DBL_NEAR(1.08f, getPercentOfInc(180, 200000));
    ASSERT_DBL_NEAR_TOL(216000.f, getIncome(180, 200000), 1e-1);
    
    ASSERT_DBL_NEAR(1.08f, getPercentOfInc(240, 200000));
    ASSERT_DBL_NEAR_TOL(216000.f, getIncome(240, 200000), 1e-1);
}

CTEST(deposit_test, days_241_to_365_deposit_10000) {
    ASSERT_DBL_NEAR(1.12f, getPercentOfInc(241, 10000));
    ASSERT_DBL_NEAR_TOL(11200.f, getIncome(241, 10000), 1e-2);
    
    ASSERT_DBL_NEAR(1.12f, getPercentOfInc(300, 10000));
    ASSERT_DBL_NEAR_TOL(11200.f, getIncome(300, 10000), 1e-2);
    
    ASSERT_DBL_NEAR(1.12f, getPercentOfInc(365, 10000));
    ASSERT_DBL_NEAR_TOL(11200.f, getIncome(365, 10000), 1e-2);
}

CTEST(deposit_test, days_241_to_365_deposit_100000) {
    ASSERT_DBL_NEAR(1.12f, getPercentOfInc(241, 100000));
    ASSERT_DBL_NEAR_TOL(112000.f, getIncome(241, 100000), 1e-2);
    
    ASSERT_DBL_NEAR(1.12f, getPercentOfInc(300, 100000));
    ASSERT_DBL_NEAR_TOL(112000.f, getIncome(300, 100000), 1e-2);
    
    ASSERT_DBL_NEAR(1.12f, getPercentOfInc(365, 100000));
    ASSERT_DBL_NEAR_TOL(112000.f, getIncome(365, 100000), 1e-2);
}

CTEST(deposit_test, days_241_to_365_deposit_200000) {
    ASSERT_DBL_NEAR(1.15f, getPercentOfInc(241, 200000));
    ASSERT_DBL_NEAR_TOL(230000.f, getIncome(241, 200000), 1e-2);
    
    ASSERT_DBL_NEAR(1.15f, getPercentOfInc(300, 200000));
    ASSERT_DBL_NEAR_TOL(230000.f, getIncome(300, 200000), 1e-2);
    
    ASSERT_DBL_NEAR(1.15f, getPercentOfInc(365, 200000));
    ASSERT_DBL_NEAR_TOL(230000.f, getIncome(365, 200000), 1e-2);
}
