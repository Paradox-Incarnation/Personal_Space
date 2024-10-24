#include  <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> nums;
    nums={1,2,3};
    int number=0;
    int i;
    for(i=0;i<nums.size();i++){
        number=number*10+nums[i];
    }
    number=number+1;
    cout<<number<<endl;
    int number1=0;
    for(i=0;i<nums.size();i++){
        number1=number1*10+number%10;
        number=number/10;
    }
    for(i=0;i<nums.size();i++){
        digits.push_back(number1%10);
        number1=number1/10;
    }
    cout<<number1;
}