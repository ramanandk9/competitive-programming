#include<bits/stdc++.h>
using namespace std;
int main(){
	long long sum=0;
	int f1=1;
	int f2=1;
	while(f2<=4000000){
		f2=f2+f1;
		f1=f2-f1;
		if(f2%2==0) sum+=f2;
	}
	cout<<sum;
}