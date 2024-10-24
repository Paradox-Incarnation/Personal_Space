#include <iostream>
using namespace std;

int main()
{       
        long int y=0;
        long int x=1929;
        if (x<0){
            return false;
        }
        int digit;
        while (x!=0){
            digit=x%10;
            y=y*10+digit;
        }
        if (x==y)
        {
            return true;
        }
        else{
            return false;
        }

}
    


