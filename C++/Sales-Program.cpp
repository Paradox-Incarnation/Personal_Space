#include <iostream>
using namespace std;
#include <typeinfo>
#include "Sales_item.h"


int main(){
        Sales_item i;
        Sales_item j;
        cin>>j;
        cout<<typeid(j.isbn()).name();

        // while (cin>>i){
        //     if(j.isbn()==i.isbn()){
        //         ++cnt;
        //     }
        //     else{
                
        //         cout<<"The total number of transaction for isbn "<<j.isbn()<<"is "<<cnt<<endl;
        //         j.isbn()=i.isbn();
        //         cnt=1;
        //     }
        // }
        // cout<<"The total number of transaction for isbn "<<i.isbn()<<" is "<<cnt<<endl;

    }