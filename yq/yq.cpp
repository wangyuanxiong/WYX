#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
using namespace std;
struct shenfen{
	string shen;
	string shi;
	string shu;
}str[256];
int main()
{
	int i=0,cnt=0;
	string flag="";
	ifstream infile;
	infile.open("yq_in.txt");
	if(!infile)
	{
		cout<<"open failed"<<endl;
		exit(1);
	}
	while(!infile.eof())
	{
		infile>>str[i].shen>>str[i].shi>>str[i].shu;
		i++;
	}
	infile.close();

	ofstream outfile;
	outfile.open("yq_out.txt");
	for(int j=0;j<i;j++)
	{
	if(str[j].shen !=flag)
	{
		if(cnt >0) 
		outfile<<endl<<endl;
		outfile<<str[j].shen;
		flag=str[j].shen;
		cnt++;
		
	}
	if(str[j].shu !="0")
	{
		outfile<<endl;
		outfile<<str[j].shi<<'\t'<<str[j].shu;
	}
	}
	outfile.close();
	system("pause");
	return 0;
}