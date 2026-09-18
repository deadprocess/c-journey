#include<stdio.h>

int main(void) {

    #define MAX_ENTRIES 10
    int all_tickets;
    int closed_tickets;
    int open_tickets;
    int record[MAX_ENTRIES];
    int sum = 0;
    int i;
    
    printf("All tickets (0 to exit): ");
    if (scanf("%d", &all_tickets) != 1) {
        printf("Input was not a number.\n");
        return 1;

    }
    while(all_tickets != 0) {
        printf("Closed tickets: ");
        if (scanf("%d", &closed_tickets) != 1) {
            printf("Input was not a number.\n");
            return 1;
        }
        open_tickets = all_tickets - closed_tickets;
        if (sum >= MAX_ENTRIES) {
            printf(" Warning: Entry won't be saved.");

        }else{
            record[sum] = open_tickets;
            sum++;
        }    
       
        printf("all: %d\n", all_tickets);
        printf("closed: %d\n", closed_tickets);
        printf("open: %d\n", open_tickets);

        if (closed_tickets > open_tickets) {
            printf("There are closed tickets than open.\n");
        }

        if (open_tickets > closed_tickets) {
            printf("There are more open tickets than closed");
        }
        printf("All Tickets: (0 to exit): ");
        if (scanf("%d", &all_tickets) != 1) {
            printf("Input was not a number\n");
            return 1;
        }

    }
    if (all_tickets == 0 && sum != 0) {
        printf("Entries of open tickets (newest record first)\n");
            for (i = sum - 1; i >= record[sum]; i--) {
            printf("Round %d: %d open\n", i + 1, record[i]);
            
        }
    }


    return 0;

}
