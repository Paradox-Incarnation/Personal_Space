#include <iostream>
using namespace std;
#define pi 3.3;

int main(){
    int No_of_smallrooms,No_of_largerooms,Days {30};
    const double Price_smallroom {2},Price_largeroom {3};
    double Tax {0.06};
    cout << "Hello, welcome to Frank's Carpet Cleaning Service";
    cout<<endl<<endl;
    cout<<"How many small rooms would you like cleaned?"<<endl;
    cin>>No_of_smallrooms;
    cout<<"How many large rooms would you like cleaned?"<<endl;
    cin>>No_of_largerooms;
    cout<<endl<<endl;
    cout<<"Number of small rooms: "<<No_of_smallrooms<<endl;
    cout<<"Number of large rooms: "<<No_of_largerooms<<endl;
    cout<<"Price per small room: "<<"$"<<Price_smallroom<<endl;
    cout<<"Price per small room: "<<"$"<<Price_largeroom<<endl;
    cout<<"Cost: "<<"$"<<(Price_smallroom*No_of_smallrooms)+(Price_largeroom*No_of_largerooms)<<endl;
    cout<<"Tax: "<<"$"<<((Price_smallroom*No_of_smallrooms)+(Price_largeroom*No_of_largerooms))*Tax<<endl;
    cout<<"================================"<<endl;
    cout<<"Total Estimate: "<<"$"<<(Price_smallroom*No_of_smallrooms)+(Price_largeroom*No_of_largerooms)+((Price_smallroom*No_of_smallrooms)+(Price_largeroom*No_of_largerooms))*Tax<<endl;
    cout<<"This estimate is valid for "<<Days<<" Days";




}

