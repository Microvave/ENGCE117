#include <stdio.h>

struct microvave {
    int age;
    int height;
    int weight;
};

int main() {
    struct microvave body;
    body.age = 21;
    body.height = 173;
    body.weight = 52;
    printf("microvave age : %d year\n", body.age );
    printf("microvave height : %d cm\n", body.height );
    printf("microvave weight : %d kg\n", body.weight );
    return 0;
}