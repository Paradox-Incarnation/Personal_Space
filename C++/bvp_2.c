#include <stdio.h>

int main(){
    printf("Hello Baby How do you do");
    int a,b;
    float c;
    printf("Enter numbers");
    scanf("%d %d",&a,&b);
    int x=6;
    switch (x){
        case 1:
            printf("its 1");
        case 2:
            printf("its 2");
        case 3:
            printf("its 3");
        case 4:
            printf("its 4");
        case 5:
            printf("its 5");
        case 6:
            printf("its 6");
        default:
            printf("NOTA");
    }
}