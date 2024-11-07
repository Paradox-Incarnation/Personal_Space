#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> Dummy {1,2,3,4,5,6};
    int i,j;
    int k=3;
    for(i=0;i<Dummy.size();i++){
        for(j=i+1;j<Dummy.size();j++){
            if(((Dummy.at(i)-Dummy.at(j)==k) || (Dummy.at(j)-Dummy.at(i))==k)){
                cout<<i<<j<<endl;

            }
        }

    }

}