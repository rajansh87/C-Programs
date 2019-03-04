#include <stdio.h>
#include "stdlib.h"
#include"conio.h"
void main()
{
    int num, i, *p, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    p = (int*) malloc(num * sizeof(int));  //memory allocated using malloc
    if(p == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements of array: ");
    for(i = 0; i < num; ++i)
    {
        scanf("%d", p + i);
        sum += *(p + i);
    }

    printf("Sum = %d", sum);
    free(p);
    getch();
}
