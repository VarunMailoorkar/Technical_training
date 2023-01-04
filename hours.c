#include <stdio.h>
int hrs;         
int mins;         
int tot_mins;     

const int MINaHOUR = 60;     

char line_text[50];    
int main() {
	printf("Input hours: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &hrs);

	printf("Input minutes: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &mins);

	tot_mins = mins + (hrs * MINaHOUR);

	printf("Total: %d minutes.\n", tot_mins);

	return(0);
}