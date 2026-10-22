#include<stdio.h>

#define MAX_ENTRIES 10
void print_statistics(int all, int closed, int open);
void print_records(int entry[], int ticket_count);
void save_record(int entry[], int index, int open);


int main() {
    
int all_tickets = 0;
int open_tickets = 0;
int closed_tickets = 0;
int ticket_count = 0;
int record[MAX_ENTRIES];

    printf("All tickets (0 to exit): ");
    if(scanf("%d", &all_tickets) != 1) {
        printf("Wrong format.\n");
        return 1;
    }

    while (all_tickets != 0) {
        
        printf("Closed tickets: ");
        if (scanf("%d", &closed_tickets) != 1) {
            printf("Wrong format.\n");
            return 1;
        }
        open_tickets = all_tickets - closed_tickets;
        save_record(record, ticket_count, open_tickets);

    }

    return 0;
}

void print_statistics(int all, int closed, int open) {

    printf("All tickets: %d", all);
    printf("Closed tickets: %d", closed);
    printf("Open tickets: %d", open);

    if (open > closed) {
        printf("There are more open tickets than closed.");
    }
    if (closed > open) {
        printf("There are more closed tickets than open.");
    }

}
void print_records(int entry[], int ticket_count) {


}
void save_record(int entry[], int index, int open) {

    entry[index] = open;
    index++;

}
