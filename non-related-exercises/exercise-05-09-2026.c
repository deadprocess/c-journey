#include<stdio.h>

int main(void) {

    #define MAX_ENTRY 10
    int all_tickets;
    int closed_tickets;
    int open_tickets;
    int record[MAX_ENTRY];
    int sum = 0;

    printf("All_tickets: (0 to exit): ");
    if (scanf("%d", &all_tickets) != 1) {
        printf("wrong input!");
        return 1;
    }
    
    while(all_tickets != 0) {
        
        printf("Closed tickets: ");
        if (scanf("%d", &closed_tickets) != 1) {
            printf("wrong input!");
            return 1;

        }
        for (int i =0; i<= 9; i++) {
            record[i] = all_tickets;
	        sum = record[i];

        }
        open_tickets = all_tickets - closed_tickets;
        printf("all tickets: %d\n", all_tickets);
        printf("closed tickets: %d\n", closed_tickets);
        printf("open tickets: %d\n", open_tickets);
        
        printf("All_tickets: (0 to exit): ");
        if (scanf("%d", &all_tickets) != 1) {
            printf("wrong input!");
            return 1;
        } 
        if (all_tickets == 0 && sum != 0) {
            for (int o = 0; o <= sum; o++) {
                printf("Round: %d\n", record[o]);

            }



        }

    }

    











}
