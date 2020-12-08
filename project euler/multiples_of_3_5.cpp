#include<bits/stdc++.h>
using namespace std;
int main(){
	long long sum=0;
	int n;
	cin>>n;
	for(int i=3;i<n;i+=3){
		sum+=i;
	}
	for(int i=5;i<n;i+=5){
		sum+=i;
	}
	for(int i=15;i<n;i+=15){
		sum-=i;
	}
	cout<<sum;
}