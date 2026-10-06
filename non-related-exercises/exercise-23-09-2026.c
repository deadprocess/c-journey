#include<stdio.h>

#define MAX_ENTRIES 10

int calculate_open(int all, int closed);
void print_statistics(int all, int closed, int open);
void print_records(int entry[], int ticket_sum);




int main() {

int all_tickets;
int closed_tickets;
int open_tickets;
int records[MAX_ENTRIES];
int sum = 0;


    printf("All tickets (0 to exit): ");
    if (scanf("%d", &all_tickets) != 1) {
        printf("Wrong format.\n");
        return 1;

    }
    while (all_tickets != 0) {
    
        printf("Closed tickets: ");
        if (scanf("%d", &closed_tickets) != 1) {
            printf("Wrong format.\n");
            return 1;
        } 
        open_tickets = calculate_open(all_tickets, closed_tickets);   
        if (sum >= MAX_ENTRIES) {
            printf("Warning: overflow of entries. Entry won't be saved!.\n");
            return 1;

        }
        records[sum] = open_tickets;
        sum++;
        print_statistics(all_tickets, closed_tickets, open_tickets);
        
        printf("All tickets (0 to exit): ");
        if (scanf("%d", &all_tickets) != 1) {
            printf("Wrong format.\n");
            return 1;
        }
       
    }
    //print_records();



    return 0;
}

int calculate_open(int all, int closed) {
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

void print_records(int entry[], int ticket_sum) {
    
   

}
