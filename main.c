#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

struct seatLevel{
    char level[64];
    int price;
};

int main(void){
    int c = -1;
    printf("Welcome to the Airline Reservation System\n");
    do{
        int tickets = 0,total = 0;
        struct seatLevel *seat;

        printf("How many tickets? 0 to exit.\n");
        scanf("%i",&tickets);
        if (c == 0) return 0;

        printf("\n");

        printf("Choose a seat level\n");
        printf("0. exit\n1. Economy $100\n2. First Class $150\n");
        scanf("%d",&c);

        switch(c){
            case 0:
                return 0;
                break;
            case 1:
                printf("HELLO");
                strcpy(seat->level,"Economy");
                seat->price = 100;
                printf("%s",seat->level);
                break;
            case 2:
                strcpy(seat->level,"First Class");
                seat->price = 150;
                break;
            default:
                return 0;
        }

        //Calculate the total
        total = tickets * seat->price;



        printf("\n");
        printf("# of Tickets: %i\n",tickets);
        printf("Seat Level: %s\n",seat->level);
        printf("Total Price: %i\n\n",total);

    }while(!(c == 0));

    return 0;
}