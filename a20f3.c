#include <stdio.h>
#include "simpio.h"

int main()
{
    int age ;
    int max=0;
    int min=999;

    printf("Dose ilikia:");
    age=GetInteger();

    while(age!=(-1))
    {
      if(max<age)
       {
        max=age;
        if (min>age)
         {
          min=age;
         }
       }
      printf("DOSE ilikia :");
      age=GetInteger();
    }
    printf("H megaliteri ilikia einai:%d\n",max);
    printf("H mikroteri ilikia einai :%d\n",min);

    system("PAUSE");
    return 0;
}
