#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    // int array [10] {3};
    // int i;
    // for(i=0;i<10;i++){
    //     cout<<array[i];
    // }
    int n;
    cout<<"Enter the lenght of array";
    cin>>n;
    int array [n];
    int i;
    int m;
    cout<<"Enter your Target";
    cin>>m;
    int j;
    int Flag;
    for(i=0;i<(sizeof(array))/4;i++){
        cout<<"Enter element for index "<<i<<" ";
        cin>>array[i];
    }
    for(i=0;i<(sizeof(array))/4;i++)
    {
       for(j=i+1;j<(sizeof(array))/4;j++){
        if(array[i]+array[j]==m){
            return i,j;
        }
       }
    }
}