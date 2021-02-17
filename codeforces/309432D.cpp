#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin>>n;
	int prev;
	int count=1;
	cin>>prev;
	int temp;
	int max_=1;
	for(int i=1;i<n;i++){
		cin>>temp;
		if(temp<2*prev) {
			count++;
		}
		else {
			max_=max(max_,count);
			count=1;
		}
		prev=temp;
	}
	max_=max(max_,count);
	cout<<max_;
}
