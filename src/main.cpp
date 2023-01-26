#include <stdio.h>

int resultRan = 1;

int Random(int a,int b)
{
    resultRan = (3*resultRan+b)%(b+1);
    if(resultRan >= b)
    {
        printf("Random no is. %d\n",(b+a)/2);
    }
    else
    {
        printf("Random no is:%d\n",resultRan);
    }
    
    return resultRan;
}

int main()
{
   
    Random(1,15);
    Random(1,15);
    Random(1,15);
    Random(1,15);
    Random(1,15);
    Random(1,15);
    Random(1,24);
     Random(1,24);
    Random(1,24);
    Random(1,24);
    Random(1,24);
    return 07;
}