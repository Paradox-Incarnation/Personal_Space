#include <iostream>
using namespace std;    
int main()
{
    int sum=0,v1=50;
    while (v1<=100){
        sum+=v1;
        ++v1;
    }
    cout << sum;
}