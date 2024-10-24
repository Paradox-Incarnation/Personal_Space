
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // cout << "Hello, by this project you can make a repeatative texts sir" << endl;

    size_t num1;
    string text;

    cout << "how many repeatative texts you want : " << endl;
    cin >> num1;
    const size_t COUNT{num1};
    cout << "Enter your text: \n";
	getline(cin, text);

    cout<< text;
    size_t i{0}; //Iterator declaration 
    for(i; i < num1 ; ++i){
     cout  << i << text << endl;
   }
   return 0;
} 