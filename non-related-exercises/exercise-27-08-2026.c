#include<stdio.h>

int main (void) {
	int all_tickets = 84;
	int closed_tickets =57;
	
	
	int open_tickets = all_tickets - closed_tickets;

	printf("all tickets: %d\n", all_tickets);
	printf("closed tickets: %d\n", closed_tickets);
	printf("open tickets: %d\n", open_tickets);
	if (open_tickets > closed_tickets) { printf("There are more open tickets than closed\n");  }
	if (closed_tickets > open_tickets) { printf("There are more closed tickets than open.\n");  }





	return 0;


}
