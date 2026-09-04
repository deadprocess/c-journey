#include<stdio.h>

int main (void) {
    int all_tickets;
    int closed_tickets;
    int open_tickets;
    
    printf("All tickets: ");
    if (scanf("%d", &all_tickets) != 1) {
        printf("Wrong input!");
        return 1;
    
    }
    printf("Closed tickets: ");
    if (scanf("%d", &closed_tickets) != 1) {
        printf("Wrong input!");
        return 1;
    }
    
    open_tickets = all_tickets - closed_tickets;
    while (all_tickets != 0) {
    
    
    
    }
    return 0;
}  
