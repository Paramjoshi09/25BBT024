#include <stdio.h>
#include <conio.h>
int main() {
     // Conversion rate
    float rate = 48.0;

    // Input in dollars
    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    // Convert dollars → rupees
    rupees = dollars * rate;
    printf("%.2f Dollars = %.2f Rupees\n", dollars, rupees);

    // Input in rupees
    printf("\nEnter amount in Rupees: ");
    scanf("%f", &rupees);

    // Convert rupees → dollars
    dollars = rupees / rate;
    printf("%.2f Rupees = %.2f Dollars\n", rupees, dollars);
    getch();

  }s  

