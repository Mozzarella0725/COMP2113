#include <stdio.h>

void allocateSeats(int votes, int quota, int* autoSeat, int* remainder) {
    // Calculate the automatic seats and remainder for one list
    *autoSeat = votes / quota;  // Integer division for automatic seats
    *remainder = votes % quota;  // Remainder of votes after automatic allocation
}

int main() {
    int numLists, numSeats, totalVotes, quota;
    
    // Read the total number of seats and total number of votes
    printf("Total number of seats: ");
    scanf("%d", &numSeats);
    
    printf("Total number of votes: ");
    scanf("%d", &totalVotes);
    
    // Calculate the quota (number of votes required for one seat)
    quota = totalVotes / numSeats;
    
    // Read the number of lists
    printf("Total number of lists: ");
    scanf("%d", &numLists);
    
    // Variables to store the automatic seat count and remainder for each list
    int autoSeat, remainder;
    
    // Get the votes for each list and immediately calculate and print results
    for (int i = 0; i < numLists; i++) {
        int votes;
        printf("Votes for list %d: ", i + 1);
        scanf("%d", &votes);
        
        // Allocate seats and calculate remainder
        allocateSeats(votes, quota, &autoSeat, &remainder);
        
        // Output the results for the current list
        printf("Automatic seat for list %d: %d\n", i + 1, autoSeat);
        printf("Remainder for list %d: %d\n", i + 1, remainder);
    }
    
    return 0;
}
