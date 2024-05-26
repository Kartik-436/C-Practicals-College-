#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    int rollNumber;
    float marks;
};

void copyStudent(struct Student *dest, const struct Student *src) 
{
    strcpy(dest->name, src->name);
    dest->rollNumber = src->rollNumber;
    dest->marks = src->marks;
}

int main() 
{
    struct Student student1, student2;

    printf("\nEnter details for student 1:\n");

    printf("\nName => ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0';

    printf("\nRoll Number => ");
    scanf("%d", &student1.rollNumber);

    printf("\nMarks => ");
    scanf("%f", &student1.marks);

    copyStudent(&student2, &student1);

    printf("\nDetails of student 2 (copied from student 1):\n");
    printf("Name => %s\n", student2.name);
    printf("Roll Number => %d\n", student2.rollNumber);
    printf("Marks => %.2f\n", student2.marks);

    return 0;
}
