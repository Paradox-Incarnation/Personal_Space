#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> Original_Array;
    vector <int> New_Array;
    // Prompting user to enter vector
    // int x,i;
    // cout<<"Enter The number of elements in array: "<<endl;
    // cin>>x;
    // for(i=0;i<x;i++){
    //     cin>>Dummy.at(i);
    // }
    Original_Array={5,4,3,2,1};
    New_Array=Original_Array;
    int i,j=0;
    int n=0;
    bool Flag=false;
    while(j<Original_Array.size()){
        for(i=j;i<Original_Array.size();i++){
            if(Original_Array[j]>Original_Array[i]){
                New_Array[j]=Original_Array[i];
                Original_Array[i]=Original_Array[j];
                Flag=true;
            }
        
        }
        if(Flag){
                n++;
        }
        j++;

    }  
    cout<<n;
   
}