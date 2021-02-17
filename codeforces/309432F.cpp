#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n,k;
	int count=0;
	int temp;
	bool flag=true;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			cin>>temp;
			arr[i]+=temp;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]*2>k) {
			flag=false;
			break;
		}
	}
	if(flag) cout<<"YES";
	else cout<<"NO";
}
