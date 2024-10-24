#include <stdio.h>

int Expo(int m);

int main() {
   int n,m;
   printf("Enter The exponent");
   scanf("%d",&m);
   for(n=0;n<m;n++){
    printf("%d \n",Expo(n));
   }

}
int Expo(int n){
    if (n==0 || n==1){
            return 1;
    }
    else{
        return (Expo(n-1)+Expo(n-2));
    }
}



