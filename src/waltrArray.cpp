#include "tigr.h"
#include <iostream>
#include <vector>

using namespace std;


void drawArray(vector<int*> myVector){

    //create dimensions for a screen in tigr and include buffer for the edges
    int screenX = 320;
    int screenY = 240;
    int bufferX = 10;
    int bufferY = 100;
    
    
    //get the amount of elements in the vector
    int valuesLength = myVector.size();

    //scale the vector so it fits on screen
    int boxWidth = ((screenX/valuesLength)-(bufferX*2));


    //create screen
    Tigr* screen = tigrWindow(screenX, screenY, (char*)"Your Array!", 0);
    while (!tigrClosed(screen) && !tigrKeyDown(screen, TK_ESCAPE)){

        tigrClear(screen, tigrRGB(0x80, 0x90, 0xa0));

    //make boxes from array values and print index number below the box

        for(int i=0; i<=valuesLength; i++){
            tigrRect(screen, bufferX, bufferY, boxWidth, boxWidth, tigrRGB(0,0,0));
            tigrFillRect(screen, bufferX, bufferY, boxWidth, boxWidth, tigrRGB(250, 250, 0));
            tigrPrint(screen, tfont, (bufferX+(boxWidth/2)), (bufferY + (boxWidth/2)), tigrRGB(0,0,0), "%d", *(myVector[i]));
            tigrPrint(screen, tfont, (bufferX+(boxWidth/2)), (bufferY+boxWidth+5), tigrRGB(0, 100, 250), "%d", i);
            bufferX = bufferX + boxWidth + 2;
        }

        tigrUpdate(screen);
    }
    tigrFree(screen);
}