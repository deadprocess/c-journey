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
        for (int i = 0; i <= sum; i++){    
            
            if (all_tickets == 0 && sum != 0) {
                for (int x = 0; x < MAX_ENTRY; x++) {
                    if (record[x] == 0) {
                        return 0;
                    }else {
                        printf("%d.Round: %d\n", x + 1, record[x]);
                    }
                }
                

            }

            printf("Closed tickets: ");
            if (scanf("%d", &closed_tickets) != 1) {
                printf("wrong input!");
                return 1;
            }
            record[i] = all_tickets;
	        sum = record[i];

        
            open_tickets = all_tickets - closed_tickets;
            printf("all tickets: %d\n", all_tickets);
            printf("closed tickets: %d\n", closed_tickets);
            printf("open tickets: %d\n", open_tickets);
        
            printf("All_tickets: (0 to exit): ");
            if (scanf("%d", &all_tickets) != 1) {
                printf("wrong input!");
                return 1;
            } 

        } 
    }
}
