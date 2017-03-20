#include <stdio.h>
#include "deposit.h"

int main()
{
    int days, deposit;
    if (!inputData(&days, &deposit)) {
        return 1;    
    }
    
    float income = getIncome(days, deposit);
    printf("Income: %.2f\n", income);  
   
    return 0;
}
