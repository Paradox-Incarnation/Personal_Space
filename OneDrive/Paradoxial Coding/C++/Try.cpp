#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll x,y,k;
        cin>>x>>y>>k;
        while(k>0){
            ll diff=(x/y + 1)*y-x;
            if(diff==0){
                x++;
            }
            if(k<diff) {
                x+=k;
                break;
            }
            if(k>=diff){
                k-=diff;
                x+=diff;
                ll low=0,hi=30;
                ll ans;
                while(low<=hi){
                    ll mid=low+(hi-low)/2;
                    ll s=(ll)pow(y,mid);
                    if(x%s==0){
                        ans=x/s;
                        low=mid+1;
                    }
                    else hi=mid-1;
                }
                x=ans;
            }
        }
        cout<<x<<endl;
    }
}
