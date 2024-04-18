#include <stdio.h>

int main() 
{
    int serial_number;
    int id;
    char name[50];
    char gender;
    float salary;
    long long phone_number;
    char address[100];

    printf("Enter employee serial number: ");
    scanf("%d", &serial_number);

    printf("Enter employee ID: ");
    scanf("%d", &id);

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter employee gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    printf("Enter employee phone number: ");
    scanf("%lld", &phone_number);

    printf("Enter employee address: ");
    scanf("%s", address);

    printf("\nEmployee details:\n");
    printf("Serial number: %d\n", serial_number);
    printf("ID: %d\n", id);
    printf("Name: %s\n", name);
    printf("Gender: %c\n", gender);
    printf("Salary: %.2f\n", salary);
    printf("Phone number: %lld\n", phone_number);
    printf("Address: %s\n", address);

    return 0;
}
