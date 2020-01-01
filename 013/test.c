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

    double grossPay = (normalHours * payRate) + (overtimeHours * payRate * 1.5);
    double initialPay = grossPay;

    double totalTax = 0.0;

    if (grossPay > 0) {
        grossPay > 300 ? (totalTax += 300 * 0.15) : (totalTax += grossPay * 0.15);
        grossPay -= 300;
    }

    if (grossPay > 0) {
        grossPay > 150 ? (totalTax += 150 * 0.2) : (totalTax += grossPay * 0.2);
        grossPay -= 150;
    }

    if (grossPay > 0) {
        totalTax += grossPay * 0.25;
    }

    printf("Normal Time: %f\n", normalHours);
    printf("Overtime: %f\n", overtimeHours);
    printf("Gross Pay: %f\n", initialPay);
    printf("Tax: %f\n", totalTax);
    printf("Net Earnings: %f\n", initialPay - totalTax);
    return 0; 
}
