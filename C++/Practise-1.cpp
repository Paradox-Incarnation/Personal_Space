#include <iostream>
using namespace std;

int main(){
    cout << " Welcome To Farenhight To Celsius Or Celcius To Farenhight Converter"<<endl;
    cout<<"1. Farenheight to Celcius Converter"<<endl;
    cout<<"2. Celcius To Farenheight Converter"<<endl;
    int x=0;
    bool flag=true;
    while (flag){
            cin>>x;
            if (x==1){
                double Farenheight=0;
                cout<<"Enter The Farenheight Value: ";
                cin>>Farenheight;
                cout<< " The Entered value of Farenheight: "<<Farenheight<<" is equivalent to "<<(Farenheight-32)*5/9<<" Celsius"<<endl;
            }
            else if (x==2){
                double Celsius=0;
                cout<<"Enter The Celsius Value: ";
                cin>>Celsius;
                cout<< " The Entered value of Farenheight: "<<Celsius<<" is equivalent to "<<(Celsius*9/5)+32<<" Celsius"<<endl;
            }
            char Ask;
            cout<<"More[Y/N] ";
            cin>>Ask;
            if (Ask=='N'){
                flag=false;
            }
            else{
                continue;
            }

    }
}