#include<stdio.h>

int main(void) {

#define MAX_ENTRIES 10
int all_tickets;
int closed_tickets;
int open_tickets;
int record[MAX_ENTRIES];
int sum = 0;
int i;
    
    printf("All tickets: (0 to exit)");
    if (scanf("%d", &all_tickets) != 1) {
        printf("Input was not a number.\n")
        return 1;

    }
    while(all_tickets != 0) {
        printf("Closed tickets: "):
        if (scanf("%d", &closed_tickets) != 1) {
            printf("Input was not a number.\n");
            return 1;
        }
        open_tickets = all_tickets - closed_ticket;
        if (sum > MAX_ENTRIES) {
            printf(" Warning: Entry won't be saved.")

        }else {
            record[sum] = open_tickets;
            sum++;
        }

    }




    return 0;

}
