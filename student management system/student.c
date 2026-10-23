
#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main(void)
{
    struct Student s[50];
    int choice, count = 0, i;

    do
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (count < 50)
                {
                    printf("Enter Roll Number: ");
                    scanf("%d", &s[count].rollNo);

                    printf("Enter Name: ");
                    scanf(" %49[^\n]", s[count].name);

                    printf("Enter Marks: ");
                    scanf("%f", &s[count].marks);

                    count++;
                    printf("Student added successfully!\n");
                }
                else
                {
                    printf("Student limit reached!\n");
                }
                break;

            case 2:
                if (count == 0)
                {
                    printf("No student records found.\n");
                }
                else
                {
                    printf("\n--- Student Records ---\n");

                    for (i = 0; i < count; i++)
                    {
                        printf("\nRoll Number: %d\n", s[i].rollNo);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 3);

    return 0;
}

