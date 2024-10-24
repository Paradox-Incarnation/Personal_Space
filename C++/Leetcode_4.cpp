#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector <int> nums {50,70,30};
    int i,j;
    int k=0;
    for(i=0;i<nums.size();i++){
        while(nums[i]!=0){
            k=k+nums[i]%10;
            nums[i]=nums[i]/10;
        }
        nums[i]=k;
        cout<<nums[i];
        k=0;
        }
    k=nums[0];
    for(i=1;i<nums.size();i++){
        if(nums[i]<k){
            k=nums[i];
        }
    }
    cout<<k;
    
}
    
