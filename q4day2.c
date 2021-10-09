#include <stdio.h>

int main()
{
  
    int rank;
    printf("Rank of Mr. Engineer \n");
    scanf("%d", &rank);

    if(rank<3250)
    {
       printf("According to your rank the available branch is :  CSE ISE EandC MECH");
    }
    else if(rank>3250 && rank<6505)
    {
        printf("According to your rank the available branch is :  ISE EandC MECH");
    }
    else if(rank>6505 && rank<12012)
    {
        printf("According to your rank the available branch is : EandC MECH");
    }
    else if(rank>12012 && rank<22340)
    {
        printf("According to your rank the available branch is : MECH");
    }
    else
    {
        printf("Admsission is not possible at Rnsit");
    }

  return 0;
}

