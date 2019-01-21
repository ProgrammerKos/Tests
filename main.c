#include <stdio.h>
#include <string.h>

int main(){
    float y;
    int x;
    for (int i = -5; i <= 10; i++){
        x = i;
        if (x == 0){
            printf("0 : infinity\n");}
        else if (x < 5){
            y = x + 5;
            y = y / (x * x);
            printf("%d : %f", x, y);
            printf("\n");}
        else if (x >= 5){
            y = x * x;
            printf("%d : %f", x, y);
            printf("\n");}}
    return 0;}
