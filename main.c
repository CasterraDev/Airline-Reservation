#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct seatLevel{
    char level[64]; //string to say seatLevel e.g. Economy, First Class
    int price; //The price of the seat
};

int main(void){
    int c = -1;

    printf("Welcome to the Airline Reservation System\n");

    do{
        int tickets = 0,total = 0;
        struct seatLevel *seat;

        printf("How many tickets? 0 to exit.\n");
        scanf("%i",&tickets);
        //If 0 is pressed exit the program
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
                //Fill the seat level with the correct values
                strcpy(seat->level,"Economy");
                seat->price = 100;
                break;
            case 2:
                //Fill the seat level with the correct values
                strcpy(seat->level,"First Class");
                seat->price = 150;
                break;
            default:
                return 0;
        }

        //Calculate the total
        total = tickets * seat->price;

        printf("\n");

        //Print out the stats to the seats they purchased
        printf("# of Tickets: %i\n",tickets);
        printf("Seat Level: %s\n",seat->level);
        printf("Total Price: %i\n",total);
        printf("\n");

    }while(c != 0);

    return 0;
}