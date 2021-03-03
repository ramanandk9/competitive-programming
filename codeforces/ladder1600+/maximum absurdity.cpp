#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> arr,prefix(n,0),idx(n,0);
    ll temp=-1,sum=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        sum=sum+temp;
        if(i>=k){
             sum-=arr[i-k];
             if(sum>prefix[i-1]) idx[i]=i;
             else idx[i]=idx[i-1];
        }
        if(i>=k) prefix[i]=max(prefix[i-1],sum);
        else prefix[i]=sum;
        
    }
    ll a,b;
    for(int i=2*k-1;i<n;i++){
        if(prefix[i]+prefix[i-k]>temp){
            b=idx[i];
            a=idx[i-k];
        }
        
    }
    cout<<b-k<<' '<<b;
}