#include <iostream>
using namespace std;
int main(){
    int v1=0 , v2=0;
    cout << "Enter Two Number ";
    cin  >> v1 >> v2;
    while ((v1-v2)>1){
        cout << ++v2;
    }
    while ((v2-v1)>1){
        cout << ++v1;
    }

}