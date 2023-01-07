#include <stdio.h>

void GetText( char **text ); 
int main(){
    char *str;
    GetText(&str);
    printf("%s", str);
    return 0;
}

void GetText( char **text ) { 
    *text = new char[20];
    printf("Enter your text : ");
    gets(*text); 
}
