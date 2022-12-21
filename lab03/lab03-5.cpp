#include <stdio.h>
#include <string.h>
struct millionaire {
    char name[20];
    int age;
    int money;
};
struct millionaire *findMoney(struct millionaire people[], int count); // prototype

int main(){
    struct millionaire people[5];
    strcpy(people[0].name, "pun");
    people[0].age = 21;
    people[0].money = 500;
    for( int i = 1 ; i < 5 ; i++ ){
        printf("Millionaire %d : name, age, money : ", i);
        scanf("%s %d %d", people[i].name, 
                         &people[i].age, 
                         &people[i].money);
    } // End loop

    struct millionaire *mostMoney;
    mostMoney = findMoney( people, 5 );
    printf("This is richest : %s %d %d", (*mostMoney).name, 
                                         (*mostMoney).age, 
                                         (*mostMoney).money);
    return 0;
}
struct millionaire *findMoney(struct millionaire people[], int count){
    int maxMoney, maxI;
    maxMoney = people[0].money;
    maxI = 0;
    for ( int i = 1 ; i < count ; i++ ){
        if ( people[i].money > maxMoney ){
            maxMoney = people[i].money;
            maxI = i;
        }
    } // End loop
    return &people[maxI];
}