#include <stdio.h>

int main()
{
    int choice;

    printf("Welcome to the C Program!\n");

    do
    {
        printf("\nMenu:\n");
        printf("1. Execute the 'if' statement\n");
        printf("2. Execute the 'switch' statement\n");
        printf("3. Execute the 'for' loop\n");
        printf("4. Execute the 'while' loop\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if_example();
            break;
        case 2:
            switch_example();
            break;
        case 3:
            for_example();
            break;
        case 4:
            while_example();
            break;
        case 5:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    while (choice != 5);

    return 0;
}

void if_example()
{
    int num = 10;

    printf("\nExample of 'if' statement:\n");
    if (num > 5)
    {
        printf("%d is greater than 5.\n", num);
    }
    else
    {
        printf("%d is not greater than 5.\n", num);
    }
}

void switch_example()
{
    char grade = 'B';

    printf("\nExample of 'switch' statement:\n");
    switch (grade)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Good!\n");
        break;
    case 'C':
        printf("Satisfactory.\n");
        break;
    default:
        printf("Unsatisfactory.\n");
    }
}

void for_example()
{
    printf("\nExample of 'for' loop (counting from 1 to 5):\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

void while_example()
{
    printf("\nExample of 'while' loop (counting from 1 to 5):\n");
    int i = 1;
    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}
