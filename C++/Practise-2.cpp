#include <iostream>
using namespace std;
int main(){
   //Input 3 Integer Numbers and Display their sum abd their average
   cout << " Enter Three Number Seperated by space";
   int x,y,z=0;
   cin>>x>>y>>z;
   int Sum=x+y+z;
   cout<< "Sum: "<<Sum<<endl;
   cout<<"Average: "<<static_cast <double>(Sum/3);


}
