#include <stdio.h>

int main() {

    // Variables to store customer details
        char name[50];
        int days;
        float budget;


    // Variables to store the bill calculations
     float roomRent, gst, finalBill;

    // Take customer name as input
        printf("Enter Customer Name: ");
        scanf(" %[^\n]", name);
        
    // Take number of days as input
        printf("Enter Number of Days: ");
        scanf("%d", &days);

    // Take daily budget as input
         printf("Enter Daily Budget: ");
        scanf("%f", &budget);

    // Calculate the total room rent
        roomRent = days * budget;
    // Calculate 12% GST on the room rent
        gst = roomRent * 0.12;
    // Calculate the final bill including GST
        finalBill = roomRent + gst;

    // Display the hotel booking summary
    printf("\n===== HOTEL BOOKING =====\n");
    printf("Customer : %s\n", name);

    // Determine and display the room category based on daily budget
    if (budget < 2000)
        printf("Room : Standard Room\n");
    else if (budget < 5000)
        printf("Room : Deluxe Room\n");
    else if (budget < 8000)
        printf("Room : Executive Room\n");
    else
        printf("Room : Luxury Suite\n");


    // Display the number of days stayed
        printf("Stay : %d Days\n", days);

    // Display the total room rent
        printf("Room Rent : %.2f\n", roomRent);

    // Display the GST amount
        printf("GST : %.2f\n", gst);

    // Display the final bill amount
         printf("Final Bill : %.2f\n", finalBill);

    return 0;
}