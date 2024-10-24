#include <stdio.h>

int fibonacci(int n);

int main(){
    int n=10;
    int Array (n);
    int i;
    for(i=0;i<n;i++){
        Array[fibonacci(i)];
        printf("%d",fibonacci(i));
    }
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return (fibonacci(n-1)+fibonacci(n-2));
}
