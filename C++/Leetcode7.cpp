#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> nums {1,2,3,4};
    int n=5;
    int i;
    nums.push_back(0);
    for(i=0;i<(nums.size()-1);i++){
        nums[i+1]=nums[i];
    }
    nums.push_back(0);
    nums[0]=0;
    for(i=1;i<(nums.size()-1);i++){
            if((nums[i-1]<target && target<=nums[i])){
                return (i-1);
            }
            }
    if(target<=nums[0]){
        return 0;
    }
    else if(target>=nums.at(nums.size()-2)){
        return (nums.size()-1);
    }
            }

