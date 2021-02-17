#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	int n;
	cin>>n;
	int even=0,odd=0,sum=0;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp%2==0) even++;
		else odd++;
		sum+=temp;
	}
	if(sum%2==0) cout<<odd;
	else cout<<even;
}