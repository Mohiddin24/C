#include<stdio.h>    

void validate(void *ptr)
{
    if(ptr==NULL)
    {
    //for(; ;);
    while(1)
    {
        printf("Infinite loop Here\n");
         
    }
    }
    
}

