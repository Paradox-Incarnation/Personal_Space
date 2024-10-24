#include <iostream>
using namespace std;

int main(){
    int x=1534236469;
    if(sizeof(x)>=4){
        cout<<0;
    }
    cout<<x;
    cout<<sizeof(x);
}