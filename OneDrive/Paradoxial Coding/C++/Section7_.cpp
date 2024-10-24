#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vector1 {};
    vector <int> vector2 {};
    vector1.push_back(10);
    vector1.push_back(2000);
    int i;
    for(i=0;i<vector1.size();i++){
        cout<<"For Vector 1: "<<vector1.at(i)<<endl;
    }
    cout<<"Size"<<vector1.size()<<endl;
    vector2.push_back(100);
    vector2.push_back(200);
    for(i=0;i<vector2.size();i++){
        cout<<"For Vector 2: "<<vector2.at(i)<<endl;
    }
    cout<<"Size"<<vector2.size()<<endl;
}