#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
   int  *ptr;  //Stores address of integer Variable 
   char *name; //Stores address of Character String
   struct Student **friends;
} Student;

int main()
{
    int roll = 20;
    Student s1;
    s1.ptr   = &roll;
    s1.name  = "Pritesh";

    printf("\nRoll Number of Student : %d",*s1.ptr);
    printf("\nName of Student        : %s",s1.name);
    
    Student *s1p = &s1;
    printf("\nRoll Number of Student : %d",*s1p->ptr);
    printf("\nName of Student        : %s",s1p->name);
    
    printf("\nRoll Number of Student : %d",*(s1p->ptr));
    printf("\nName of Student        : %s",s1p->name);
    
    printf("\nRoll Number of Student : %d",*((*(s1p)).ptr));
    printf("\nName of Student        : %s",(*s1p).name);
    
    int roll2 = 30;
    int roll3 = 40;
    Student s2 = {&roll2, "David", NULL};
    Student s3 = {&roll3, "Donald", NULL};
    
    Student **sfriends = malloc(sizeof(Student*) *(2 +1u));
    sfriends[0] = &s2;
    sfriends[1] = &s3;
    
    s1.friends = sfriends;

    printf("\nRoll Number of Student : %d",*((*(s1p)).ptr));
    printf("\nName of Student        : %s",(*s1p).name);
    
    printf("\nFriends of the Student : ");
    for (int i = 0; i < 2; i++) {
         printf("%s, ", (*(*s1p).friends[i]).name);
    }
    printf("\nFriends of the Student : ");
    for (int i = 0; i < 2; i++) {
         printf("%s, ", s1p->friends[i]->name);
    }
    printf("\nFriends of the Student : ");
    for (int i = 0; i < 2; i++) {
         printf("%s, ", (*(*(((*s1p).friends)+i))).name);
    }
    printf("\nFriends of the Student : ");
    for (int i = 0; i < 2; i++) {
         printf("%s, ", (*(((*s1p).friends)+i))->name);
    }
    
    Student **sfriends2 = malloc(sizeof(Student*) *(2 +1u));
    sfriends2[0] = &s1;
    sfriends2[1] = &s3;
    s2.friends = sfriends2;
    
    Student **sfriends3 = malloc(sizeof(Student*) *(2 +1u));
    sfriends3[0] = &s1;
    sfriends3[1] = &s2;
    s3.friends = sfriends3;
    
    Student **students = malloc(sizeof(Student*) *(3 +1u));
    students[0] = &s1;
    printf("\n%s", students[0]->name);
    students[1] = &s2;
    students[2] = &s3;
    
    for (int i = 0; i < 3; i++) {
        printf("\nStudent: %s -> \t", students[i]->name);
        for (int j = 0; j < 2; j++) {
            printf("%s\t", (*(students[i])).friends[j]->name);
        } 
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent: %s -> \t", students[i]->name);
        for (int j = 0; j < 2; j++) {
            printf("%s\t", (*(students+1))->friends[j]->name);
        } 
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent: %s -> \t", students[i]->name);
        for (int j = 0; j < 2; j++) {
            printf("%s\t", students[i]->friends[j]->name);
        } 
    }
    
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent: %s -> \t", students[i]->name);
        for (int j = 0; j < 2; j++) {
            printf("%s\t", (*students[i]).friends[j]->name);
        } 
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent: %s -> \t", students[i]->name);
        for (int j = 0; j < 2; j++) {
            printf("%s\t", (*(*students[i]).friends[j]).name);
        } 
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent: %s -> \t", students[i]->name);
        for (int j = 0; j < 2; j++) {
            printf("%s\t", (*(*((*(*(students+i))).friends+j))).name);
        } 
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent: %s -> \t", students[i]->name);
        for (int j = 0; j < 2; j++) {
            printf("%s\t", *students[i].*children[j].name);
        } 
    }
    return 0;
}
