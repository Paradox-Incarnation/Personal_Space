#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums;
    nums={1,3};
    int target=2;
    int i;
    for(i=0;i<nums.size();i++){
        if(nums[i]>=target){
            cout<<i;
            break;
        }
        else{
            continue;
        }
    }
    cout<<(nums.size());
}