#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 

    double totalHours;

    printf("State how many hours you worked per week:");
    scanf("%lf", &totalHours);

    double normalHours;
    double overtimeHours = 0.0;

    if (totalHours > 40.0) { 
        normalHours = 40;
        overtimeHours = totalHours - 40.0; 
    } else { 
        normalHours = totalHours;
    }

    double payRate = 12.0;

    double runningPay = (normalHours * payRate) + (overtimeHours * payRate * 1.5);
    double grosspay = runningPay;

    double totalTax = 0.0;

    if (runningPay > 0) {
        runningPay > 300 ? (totalTax += 300 * 0.15) : (totalTax += runningPay * 0.15);
        runningPay -= 300;
    }

    if (runningPay > 0) {
        runningPay > 150 ? (totalTax += 150 * 0.2) : (totalTax += runningPay * 0.2);
        runningPay -= 150;
    }

    if (runningPay > 0) {
        totalTax += runningPay * 0.25;
    }

    printf("Normal Time: %f\n", normalHours);
    printf("Overtime: %f\n", overtimeHours);
    printf("Gross Pay: %f\n", grosspay);
    printf("Tax: %f\n", totalTax);
    printf("Net Earnings: %f\n", grosspay - totalTax);
    return 0; 
}
