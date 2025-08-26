#include <stdio.h>
#include <conio.h>
int main() {
    float dollars, rupees;

    // Input in dollars
    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    // Conversion (1$ = 48 Rs)
    rupees = dollars * 48;

    // Output
    printf("%.2f Dollars = %.2f Rupees\n", dollars, rupees);
    getch();
    
}
