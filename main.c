#include <math.h>
float CalculateY(int x) {
    float y;
    if (x == 0){
        y = NAN;}
    else if (x < 5){
        y = x + 5;
        y = y / (x * x);}
    else if (x >= 5){
        y = x * x;}
    return y;}
int main(){
    int x;
    for (int i = -5; i <= 10; i++){
        x = i;
        printf("%d : %f\n", x, CalculateY(x));}
return 0; }
