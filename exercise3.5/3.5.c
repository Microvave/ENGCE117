#include<stdio.h>
main(){

    int i, j, c, n;
    int len = 10;
    int arr[len];

    printf("Input number of element to be store in array : "); //input num to enter the conditions
    scanf("%d", &n); // keep value at n.
    printf("-------------\n");

    for (i = 0; i < n; i++) // condition check.
    {
        printf("Element %d: ", i +1); // input num and i+1 with element because The displayed value starts at 1.
        scanf("%d", &arr[i]); // keep value at arr[i].
    }

    printf("-------------\n");
    
    for(i = 0; i < n; i++){ // condition check.
        c = 1; // c = 1. because The displayed value start at 1.
        for(j = i+1; j <= n; j++){ // condition check.

            if( arr[i] == arr[j] ){ // condition check.
                c++; // because if find value duplicate c++.
                arr[j] = 0; // when find value duplicate reset j = 0.
            }
        }
            if( arr[i] != 0){ // condition check.
                printf("%d --> %d\n",arr[i],c); // display arr[i](value element) and c(value duplicate).
        }
    } 
        return 0;
}
