#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<i<<' '<<(n-i+1)*(n-i+1);
		cout<<endl;
	}
}