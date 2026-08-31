#include<stdio.h>

int main (void) {

    int all_tickets = 0;
    int closed_tickets = 0;


    printf("All tickets: ");
    if (scanf("%d", &all_tickets) != 1) {
        printf("Wrong input!\n");
        return 1;

    }else
    printf("Closed tickets: ");
    if (scanf("%d", &closed_tickets) != 1) {
        printf("Wrong input!\n");
        return 1;


    }
    int open_tickets = all_tickets - closed_tickets;

    printf("all: %d\n", all_tickets);
    printf("closed: %d\n", closed_tickets);
    printf("open: %d\n", open_tickets);

    if (closed_tickets > open_tickets) {
        printf("There are more closed tickets than open.\n");


    }
    if (closed_tickets == open_tickets) {
        printf("There are an equal amount of closed and open tickets.\n");


    }
    if (open_tickets > closed_tickets) {
        printf("There are more open tickets than closed.\n");

    }


	return 0;





}
