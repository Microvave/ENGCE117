#include <stdio.h>

struct adog {
    int age;
    int height;
    int weight;
};

void set( struct adog *state ); //Prototype

int main() {
    struct adog d;
    set(&d);
    printf("dog age : %d year\n", d.age);
    printf("dog height : %d cm\n", d.height);
    printf("dog weight : %d kg\n", d.weight);
    return 0;
}

void set( struct adog *state ){
    (*state).age = 5;
    (*state).height = 50;
    (*state).weight = 10;
}