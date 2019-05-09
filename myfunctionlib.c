#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "myFunctionLib.h"
#include "myGfxShapesLib.h"
#include "gfx2.h"


void sortVisualize (double* listOfDoubles, int COUNT)
{
    int i;
    
    for (i=0; i < COUNT; i++) 
    {
        printf("%lf\n", listOfDoubles[i]);  
    }    
}

void sortNumbers(double* listOfDoubles, int COUNT)
{
    int i,j,num;
    int temp=0;
    
    for (i=0; i < COUNT; i++)  
    {
        num = rand()
        listOfDoubles[i] = num;
    }
    for (i=0; i < COUNT; i++)  
    {
        for (j=0; j < COUNT - 1; j++)  
        { 
            if (listOfDoubles[j] > listOfDoubles[j+1])  
            {
                temp=listOfDoubles[j];
                listOfDoubles[j] = listOfDoubles[j+1];
                listOfDoubles[j+1]=temp;
               
            }
        } 
    }
}
