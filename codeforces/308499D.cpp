#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(int n,vector<int> arr,int x){
	vector<int> a;
	a.push_back(x);
	for(int i=1;i<n;i++){
		a.push_back(a[i-1]+arr[i-1]);
		if(a[i]>n) return 1;
		if(a[i]<n) return -1;
	}
	return 0;
}

int main(){
	int n;
	cin>>n;
	vector<int> arr;
	int temp;
	for(int i=0;i<n-1;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	int l=1,r=n,mid;
	while(l<=r){
		mid=(l+r)/2;
		temp=check(n,arr,mid);
		if(temp==0) break;
		if(temp=-1) r=mid-1;
		else l=mid+1;
	}
	cout<<mid<<' ';
	vector<int> a;
	a.push_back(mid);
	for(int i=1;i<n;i++){
		a.push_back(a[i-1]+arr[i-1]);
		cout<<a[i]<<' ';
	}
}
