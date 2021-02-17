#include<bits/stdc++.h>
#include <windows.h>
#include <stdio.h>
using namespace std;

void run(int args,char** argv){
	// accessing the log file...
	if(args==2){
		// from log file
		cout<<"from log file";
	}
	else{
		// init run platform file
		cout<<"from platform";
	}
}

void print(){
	cout<<endl;
	cout<<"   ******************************************"<<endl;
	cout<<"\tlc: LEETCODE"<<endl;
	cout<<"\tcc: CODEFORCES"<<endl;
	cout<<"\tcf: CODECHEF"<<endl;
	cout<<"\tpe: PROJECT EULER"<<endl;
	cout<<"\tac: ATCODER"<<endl;
	cout<<"\the: HACKER EARTH"<<endl;
	cout<<"\thr: HACKER RANK"<<endl;
	cout<<endl;
	cout<<"\tinit cf [t/n] file_name"<<endl;
	cout<<"\tinit run"<<endl;
	cout<<"\tinit run platform"<<endl;
	cout<<"\tinit run platform file_name"<<endl;
	cout<<endl;
	cout<<"   ******************************************"<<endl;
}

int main(int args,char ** argv)
{
	HANDLE h;

	if (!OpenClipboard(NULL))
	{
	  cout<<"can not open clipboard";
	  return -1;
	}

	//h = GetClipboardData(CF_TEXT);
	if(args==1) {
		print();
		return -1;
	}
	string action(argv[1]);
	if(action=="run") {
		run(args,argv);
	}
	else{
		string folder,folder_=argv[1],file_name=argv[3],type=argv[2];
		file_name+=".cpp";
		if(folder_=="cf"){
			folder="codeforces";
		}
		else if(folder_=="cc"){
			folder="codechef";
		}
		else if(folder_=="lc"){
			folder="leetcode";
		}
		else if(folder_=="pe"){
			folder="project euler";
		}
		else if(folder_=="he"){
			folder="hacker earth";
		}
		else if(folder_=="hr"){
			folder="hacker rank";
		}
		else if(folder_=="ac"){
			folder="atcoder";
		}
		else{
			cout<<"platform not recognised....";
			return -1;
		}
		string raw_file_name((char *)h);
		string template_file="C:\\Users\\RAMANAND\\Desktop\\competitive-programming/template.cpp";
		if(type=="n"){
			template_file="C:\\Users\\RAMANAND\\Desktop\\competitive-programming/template2.cpp";
		}
		string file_path="C:\\Users\\RAMANAND\\Desktop\\competitive-programming/"+folder;
		string target=file_path+'/'+file_name;
		cout<<"*** CREATING FILE NAME:-> {  "<<file_name<<"  }"<<endl;
		string editor="notepad++ "+target;
		//****************** creating file streams ********************************//
		ifstream fin;
		ofstream fout;
		fin.open(&template_file[0]);
		fout.open(&target[0]);
		string line;
		while(fin){
			getline(fin,line);
			if(!fin) break;
			fout<<line<<endl;
		}
		fin.close();
		fout.close();
		system(&editor[0]);
		//CloseClipboard();
	}
	return 0;
}