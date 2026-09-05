#include<stdio.h>

int main (void) {
    int all_tickets;
    int closed_tickets;
    int open_tickets;
    
    printf("All tickets (0 to exit program): ");
    if (scanf("%d", &all_tickets) != 1) {
        printf("Wrong input!");
        return 1;
    
    }
    
    
    while (all_tickets != 0) {
        printf("Closed_tickets: ");
        if ( scanf("%d", &closed_tickets) != 1) {
            printf("Wrong input!");  
            return 1;   
        }
        open_tickets = all_tickets - closed_tickets;
        
        printf("All tickets: %d\n", all_tickets);
        printf("Closed tickets: %d\n", closed_tickets);
        printf("Open tickets: %d\n", open_tickets);
        if (closed_tickets > open_tickets) {
            printf("There are more closed tickets than open.\n");
        }
        if (open_tickets > closed_tickets) {
            printf("There are more open tickets than closed.\n");

        }
        printf("All tickets: ");
        if (scanf("%d", &all_tickets) != 1) {
            printf("Wrong input!");
            return 1;
        }
    
    
    }
    return 0;
}  
