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
		vector<int> arr,freq(2*n+5,0);
		int temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			arr.push_back(temp);
			freq[temp]++;
		}
		int count=0;
		count++;
		freq[arr[n-1]+1]=1;
		freq[arr[n-1]]--;
		arr[n-1]++;
		for(int i=n-2;i>=0;i--){
			if(freq[arr[i]+1]==0){
				count++;
				freq[arr[i]+1]=1;
				freq[arr[i]]--;
				arr[i]++;
			}
			else if(arr[i]!=arr[i+1]) count++;
		}
		cout<<count<<endl;
	}
}
