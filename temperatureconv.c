#include <stdio.h>

int main() {
    char unit;
    float temperature, convertedTemperature;

    printf("Enter temperature: ");
    scanf("%f %c", &temperature, &unit);

    if (unit == 'F' || unit == 'f') {
        // Convert Fahrenheit to Celsius
        convertedTemperature = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f C\n", convertedTemperature);
    } else if (unit == 'C' || unit == 'c') {
        // Convert Celsius to Fahrenheit
        convertedTemperature = (temperature * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f F\n", convertedTemperature);
    } else {
        printf("Invalid input. Please enter valid temperature followed by 'F' or 'C'.\n");
    }

    return 0;
}
