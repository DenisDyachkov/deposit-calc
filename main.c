#include <stdio.h>

float getPercentOfInc(int days, float deposit)
{
    float percent;
    
    return percent;
}

int inputData(int* days, int* deposit)
{
    printf("Please input days: ");
    if (!scanf("%d", days))
    {
        printf("Days is incorrect\n");
        return 0;
    }
    else
       if (*days < 0 || *days > 365)
       {
           printf("Out of range days\n");
           return 0;
       }

    printf("Please input deposit: ");
    if (!scanf("%d", deposit))
    {
        printf("Deposit is incorrect\n");
        return 0;
    }
    else
       if (*deposit < 10000)
       {
           printf("Deposit is too small\n");
           return 0;
       }
    return 1;
}

int main()
{
    int days, deposit;
    if (!inputData(&days, &deposit)){
        return 1;    
    }
    
    return 0;
}
