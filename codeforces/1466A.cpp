#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FASTIO {ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main(){
	FASTIO;
	//sieve();
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<int> arr;
		int temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			arr.push_back(temp);
		}
		set<int> s;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				s.insert(arr[j]-arr[i]);
			}
		}
		cout<<s.size()<<endl;
	}
}
