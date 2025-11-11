#include <stdio.h>
int main (){
    float rad;
    float pi= 3.14159; /*Standard value*/
    printf("Enter radius = ");
    scanf("%f", &rad);

    if (rad>0.0){
        float area= pi*rad*rad;
        float peri= 2*pi*rad;
        printf("Area= %f\n", area);
        printf("Perimeter= %f", peri);
    }
        else
        printf("Not defined");

    return 0;    
    

}