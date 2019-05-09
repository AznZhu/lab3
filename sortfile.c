#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "myFunctionLib.h"
#include "myGfxShapesLib.h"
#include "gfx2.h"



int main ()
{
    int COUNT=20;
    double listOfDoubles[COUNT]; 
    int xSize=600, ySize=600;
    
    
    srand(time(NULL));//generates a random number    
     
    sortNumbers(listOfDoubles, COUNT);         
    
    sortVisualize (listOfDoubles, COUNT);
    
    gfx_open(xSize, ySize, "Random Sorted Bar Graph");
    gfx_color(255,0,0);//Red
    
    double spacePerBar = 500.0 / COUNT;
    usleep(1000000); 
    
    drawBars(listOfDoubles, COUNT, 50, 500, .7*spacePerBar, .3*spacePerBar);
    
    char c;
    
    while(1) {
        c = gfx_wait();
        usleep(1000000);
        
        if(c=='q') break;
    }
    
    return 0;   

}
