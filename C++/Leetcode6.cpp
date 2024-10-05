#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> Dummy {1,2,2,3};
    int i,j;
    int Target=2;
    for(i=0;i<Dummy.size();i++){
        if(Dummy.at(i)==Target){
            for(j=i;j<Dummy.size();j++){
                Dummy[j]=Dummy[j+1];
            }
            Dummy.pop_back();
            i=-1;
        }
    }
    for(i=0;i<Dummy.size();i++){
        cout<<Dummy[i]<<endl;
    }
}