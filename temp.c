#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>

void draw();
#define border_w 36// border width
#define border_h 18 // border height

void setup(){

    while (true){

        const int score_size = 10;
        char best_score[score_size];
        FILE *record = fopen("record.txt", "r");
        fgets(best_score, score_size, record);
        fclose(record);
        best_score[strcspn(best_score, "\0")] = '\0';

        system("cls");
        printf("Welcome to Snake Game\n\n");
        printf("Highest score : %s\n\n", best_score);
        printf("Press Enter to Continue\n\n");

        getch();
        system("cls");

        break;
    }
    
}

void draw(){

    // for(int height = 1; height <= border_h; height++){
        
    //     if(height == 1 || height == border_h){
    //         for(int width = 1; width <= border_w; width++ )printf("#");
            
    //     }
    //     else{
    //         for(int width = 1; width <= border_w; width++ ){
    //             if(width == 1 || width == border_w) printf("#");
    //             else printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    //optimize version
    for(int height = 1; height <= border_h; height++){
        for(int weight = 1; weight <= border_w; weight++){
            if(height == 1 || height == border_h || weight == 1 || weight == border_w) printf("#");
            else printf(" ");
        }
        printf("\n");
    }
}



int main(){

    setup();
    draw();

    return 0;
}
