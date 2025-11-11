#include <stdio.h>
int main(){

    int i;
    int j=0;
    for (i=0; i<10; i++){
    j=j+i;
    printf("%d%d%d", i,j,i*(i+1)/2);
    }
    return 0;
}