#include<stdio.h>
#define MAX_ENTRIES 10

int calculate_open_tickets(int all, int closed);
void print_statistics(int all, int closed, int open);



int main (void) { 
int all_tickets;
int closed_tickets;
int open_tickets;
int records[MAX_ENTRIES];
int sum = 0;
    

    printf("All tickets (0 to exit): ");
    if (scanf("%d", &all_tickets) != 1) {
        printf("Wrong input.\n");
        return 1;
    }
    while(all_tickets != 0) {
        
        printf("Closed tickets: ");
        if (scanf("%d", &closed_tickets) != 1) {
            printf("Wrong input.\n");
            return 1;
        }

        open_tickets = calculate_open_tickets(all_tickets, closed_tickets);
        if (sum >= MAX_ENTRIES) {
            printf("Warning: entry won't be saved.");
        }else {
            records[sum] = open_tickets;
            sum++;
        }

        print_statistics(all_tickets, closed_tickets, open_tickets);

        printf("All Tickets (0 to exit): ");
        if (scanf("%d", &all_tickets) != 1) {
            printf("Wrong input.\n");
            return 1;
        }
    }
    if (sum > 0) {
        printf("Records of open tickets (newest record first): ");
    }
    for(int i = sum - 1; i >= 0; i--) {
        printf("Round %d: %d open\n", i + 1, records[i]);
    }
     
    return 0;

}
int calculate_open_tickets(int all, int closed) {
    int open = all - closed;
    return open;

}
void print_statistics(int all, int closed, int open) {
    printf("all tickets: %d\n", all);
    printf("closed tickets: %d\n", closed);
    printf("open tickets: %d\n", open);

    if (closed > open) {
        printf("There are more closed tickets than open.\n");
    }
    if (open > closed) {
        printf("There are more open tickets than closed.\n");
    }
}