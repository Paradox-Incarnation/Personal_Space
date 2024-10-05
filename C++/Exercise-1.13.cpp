#include <iostream>
using namespace std;

// int main(){
//     int sum=0;
//     for (int i=50;i<=100;++i)
//         sum+=i;
//     cout << sum;


// }
// int main(){
//     int sum=0;
//     for (int i=10;i>=0;--i)
//         cout<< i;


// }
int main()
{
 int sum = 0, value = 0;
 // read until end-of-file, calculating a running total of all values read
 while (std::cin >> value)
 sum += value; // equivalent to sum = sum + value
 std::cout << "Sum is: " << sum << std::endl;
// int value;
// cin >> value;
// cout << value<< endl;
// cout << value<< endl;

return 0;
}