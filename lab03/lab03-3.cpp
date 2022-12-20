#include <stdio.h>
#include <string.h>
struct Human {
    char name[20];
    int age;
    int Goal;
};

struct Human findGoal(struct Human people[], int count); // prototype

int main() {
    struct Human people[5];
    strcpy(people[0].name, "pun");
    people[0].age = 21;
    people[0].Goal = 2;
    for( int i = 1 ; i < 5 ; i++ ){
        printf("People %d : name, age, goal : ", i);
        scanf("%s %d %d", people[i].name, 
                         &people[i].age, 
                         &people[i].Goal);
    } // End loop

    struct Human mostGoal;
    mostGoal = findGoal( people, 5 );
    printf("goal the most : %s %d %d", mostGoal.name, mostGoal.age, mostGoal.Goal);
    return 0;
}

struct Human findGoal(struct Human people[], int count) {
    int maxGoal, maxI;
    maxGoal = people[0].Goal;
    maxI = 0;
    for ( int i = 1 ; i < count ; i++ ){
        if ( people[i].Goal > maxGoal ){
            maxGoal = people[i].Goal;
            maxI = i;
        }
    } // End loop
    return people[maxI];
}