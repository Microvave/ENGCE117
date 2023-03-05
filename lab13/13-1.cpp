#include <stdio.h>
#include <iostream>
#include <set>

int *KnapsackDP( int *w, int *v, int n, int wx ) ;

int main(){
    int n = 5 , wx = 11 ;
    int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
    int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
    int *x ;
    x = KnapsackDP( w, v, n, wx ) ;
    for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
    return 0 ;
}

int *KnapsackDP( int *w, int *v, int n, int wx ){
    int i, j, u, y;
    int a;
   
    std::set<int> Sa;
    for( i = 0 ; i <= n-1 ; i++ ){
        for( j = 1 ; j <= wx ; j++ ){
            if( (i - 1) < 0){
                a = 0;
                
            }else{ 
                u = (i-1)+j;
                a =  u;
                y = (i-1)+j;
                Sa.insert(y);
                std::cout << Sa << " ";
                
            }
        }
    }
    return 0;
}