#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n);

int main(){
    int n=10;
    vector <int> Dummy;
    int i;
    for(i=0;i<n;i++){
        Dummy.push_back(fibonacci(i));
        cout<<fibonacci(i)<<endl;
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
