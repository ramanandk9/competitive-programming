#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FASTIO {ios_base::sync_with_stdio(false);cin.tie(NULL);}

int sub(vector<int> a){
	int sum=0,temp=0;
	for(int i=0;i<a.size();i++){
		temp+=a[i];
		if(temp<0) temp=0;
		sum=max(sum,temp);
	}
	return sum;
}

int main(){
	FASTIO;
	//sieve();
	int t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n;
		vector<int> a,b;
		int temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			a.push_back(temp);
		}
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>temp;
			b.push_back(temp);
		}
		cout<<sub(a)+sub(b)<<endl;
	}
}
