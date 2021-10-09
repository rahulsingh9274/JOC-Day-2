#include <stdio.h>

int main()
{
    int t;
    printf("No of Customers: ");
    scanf("%d", &t);
    while(t--)
    {
        int n;
        printf("Enter number of books: ");
        scanf("%d", &n);
        float cost;
        cost=10*n;

        if(n<10000)
        {
            printf("\n No discount!!! ");
        }
        else if(n>10000 && n<15000)
        {
            cost-=(cost*10/100);
            printf("\n Hey !! you got a 10%% discount.!!! ");
        }
        else if(n>15000 && n<20000)
        {
            cost-=(cost*20/100);
            printf("\n Hey !! you got a 20%% discount.!!! ");
        }

        cost+=(cost*18/100);

        printf("\n %.3f \n",cost);

    }

    return 0;
}