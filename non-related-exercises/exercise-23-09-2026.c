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



    }




    return 0;
}
