#include<bits/stdc++.h>
using namespace std;
int main(){
	ofstream fout;
	fout.open("test_case_file.txt");
	for(int i=0;i<100;i++){
		fout<<1500<<endl;
		for(int j=0;j<1500;j++) fout<<100<<' ';
		fout<<endl;
	}
	fout.close();
}