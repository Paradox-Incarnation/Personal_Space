#include <iostream>
using namespace std;
int main(){
    int No_Of_Large_Rooms {0};
    cout << "Enter The Number Large of Rooms: ";
    cin>>No_Of_Large_Rooms;
    cout << "==============================="<<endl;
    int No_Of_Small_Rooms {0};
    cout << "Enter The Number of Small Rooms: ";
    cin>>No_Of_Small_Rooms;
    cout<<"Number of Large Rooms: "<<No_Of_Large_Rooms<<endl;
    cout<<"Number of  Small Rooms: "<<No_Of_Small_Rooms<<endl;
    const double Price_Per_SmallRoom {25.0};
    const double Price_Per_LargeRoom {35.0};
    cout<<"Price per Room: "<<"$"<<Price_Per_LargeRoom<<endl;
    cout<<"Price per Room: "<<"$"<<Price_Per_SmallRoom<<endl;
    cout<<"Total Cost: "<<"$"<<Price_Per_LargeRoom*No_Of_Large_Rooms+Price_Per_SmallRoom*No_Of_Small_Rooms<<endl;
    const double Tax {6};
    cout<<"Total Tax: "<<"$"<<(Price_Per_LargeRoom*No_Of_Large_Rooms+Price_Per_SmallRoom*No_Of_Small_Rooms*Tax)/100<<endl;
    cout<<"Total Estimate: "<<"$"<<(Price_Per_LargeRoom*No_Of_Large_Rooms+Price_Per_SmallRoom*No_Of_Small_Rooms*Tax)/100 + Price_Per_LargeRoom*No_Of_Large_Rooms+Price_Per_SmallRoom*No_Of_Small_Rooms<<endl;
    const int days {30};
    cout<<"This estimate is valid till " <<days<< " days"<<endl;

}