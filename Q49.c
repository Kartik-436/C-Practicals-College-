#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    int rollNumber;
    float marks;
};

int main() 
{
    struct Student students[10];

    for (int i = 0; i < 10; i++) 
    {
        printf("\nEnter details for student %d => \n", i + 1);
        
        printf("Name => ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        
        printf("Roll Number => ");
        scanf("%d", &students[i].rollNumber);
        
        printf("Marks => ");
        scanf("%f", &students[i].marks);
        
        while (getchar() != '\n');
        
        printf("\n");
    }

    printf("Details of the students:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("\nStudent %d => \n", i + 1);

        printf("\nName => %s\n", students[i].name);

        printf("\nRoll Number => %d\n", students[i].rollNumber);

        printf("\nMarks => %.2f\n", students[i].marks);

        printf("\n");
    }

    return 0;
}
