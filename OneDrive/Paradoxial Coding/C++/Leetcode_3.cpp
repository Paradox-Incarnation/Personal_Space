#include <iostream>
using namespace std;
#include <vector>

int main(){
     vector <int> Dummy ;
     int i,j;
    //  int nums [5] {1,1,2,4,2};
     bool Flag;
     int k;
     for(i=0;i<5;i++){
        Flag=true;
        for(j=0;j<Dummy.size();j++){
            if( nums[i]==Dummy[j]){
                Flag=false;
                break;
            }
        }
        if(Flag==true){
            Dummy.push_back(nums[i]);
        }
        
     }
    

    cout<<Dummy.size();

     

}