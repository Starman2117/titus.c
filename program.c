#include <stdio.h>
#include <stdlib.h>

typedef struct {
char name[100];
int age;
char address[100];
char phone[15];
char email[50];
} Person;

int main()
{
Person p;
int choice;

do {
printf("Vaccine Registration System\n");
printf("1, Register for vaccine\n");
printf("2, View registration information\n");
printf("3, Exit\n");
scanf("%d", &choice);

switch (choice) {
case 1:
printf("Name: ");
scanf("%s", p.name);
printf("Age: ");
scanf("%d", &p.age);
printf("Address: ");
scanf("%s", p.address);
printf("Phone number: ");
scanf("%s", p.phone);
printf("Email: ");
scanf("%s", p.email);
printf("Registration successful!\n");
break;
case 2:
printf("Name: %s\n", p.name);
printf("Age: %d\n", p.age);
printf("Address: %s\n", p.address);
printf("Phone number: %s\n", p.phone);
printf("Email: %s\n", p.email);
break;
case 3:
printf("Exiting...\n");
break;
default:
printf("Invalid choice. Please try again.\n");
break;
}
} while (choice != 3);
return 0;
}
