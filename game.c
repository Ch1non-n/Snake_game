#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>
#include "game.h"

#define border_w 36// border width
#define border_h 18 // border height

void setup(){

    while (true){

        printf("Welcome to Snake Game\n\n");
        printf("Highest score : %d\n\n");
        printf("Press Enter to Continue\n\n");

        getch();
        system("cls");
        break;
    }
    
}

// border
void draw(){

    for(int height = 1; height <= border_h; height++){
        
        if(height == 1 || height == border_h){
            for(int width = 1; width <= border_w; width++ )printf("#");
            
        }
        else{
            for(int width = 1; width <= border_w; width++ ){
                if(width == 1 || width == border_w) printf("#");
                else printf(" ");
            }
        }
        printf("\n");
    }

}


