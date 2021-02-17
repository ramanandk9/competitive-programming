#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> array;
typedef vector<vector<ll> > grid;
typedef vector<pair<ll,ll> > parray;
typedef map<ll,ll> dict;
ll min_=LLONG_MAX;
ll max_=LLONG_MIN;
#define FASTIO {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define vin(a,n,temp) for(int i=0;i<n;i++){ cin>>temp;arr.push_back(temp);}
#define vinp(a,n,a1,b1) for(int i=0;i<n;i++){cin>>a1>>b1; arr.push_back(make_pair(a1,b1));}
#define sort(a) sort(a.begin(),a.end());
#define rsort(a) sort(a.rbegin(),a.rend());
#define grid(a) vector<vector<int> > a;
ll gcd(ll a,ll b){if(b==0) return a;return gcd(b,a%b);}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
//************ functions

int main(){
	FASTIO;
	cin>>n;
	grid arr;
	array tmp(5,1);
	for(int i=0;i<n;i++){
		arr.push_back(tmp);
	}
	for(int i=0;i<5;i++){
		arr[0][i]=i+1;
	}
	for(int i=1;i<n;i++){
		arr[i][0]=1;
		for(int j=1;j<5;j++){
			arr[i][j]=arr[i-1][j]+arr[i][j-1];
		}
	}
	cout<<arr[n-1][4];

}
