#include <stdio.h>
#include "../src/add.h"

int main()
{
    if(add(2,3)!=5)
    {
        printf("Test Failed\n");
        return 1;
    }

    if(add(10,15)!=25)
    {
        printf("Test Failed\n");
        return 1;
    }

    printf("All Tests Passed\n");

    return 0;
}
