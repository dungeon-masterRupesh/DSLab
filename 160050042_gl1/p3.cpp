#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if (a%b == 0) return b;
	else return gcd(b,a%b);
}
int main(){
	int arSize;
	cin>>arSize;
	int myArr[arSize];
//	bool oneExist = false;
	for (int i = 0; i < arSize; ++i)
	{
		cin>>myArr[i];
	//	if (myArr[i]==1)oneExist=true;
	}
//if(oneExist){cout<<1<<" "<<arSize-1<<"\n"<<1<<"\n";}
//else{                          //on2 done
	int maxlength = 0;
	int occurence = 0;
	int finlist[arSize];
	for (int i = 0; i < arSize; ++i)
	{
		/* code */
		int localmax = 0;
		int l=i;
		bool leftside = true;
		bool rightside = true;
		for (int j = 1; (leftside || rightside); j++)
		{
			/* code */
			if ((i - j)<0)rightside=false;
			if (rightside) {
				if (myArr[i-j]%myArr[i]==0){l--;localmax++;}
				else rightside = false;				 
			}
			if ((i+j)>=arSize) leftside = false;
			if(leftside){
				if (myArr[i+j]%myArr[i]!=0) leftside = false;
				else localmax++;
			}
		}
		if(localmax>maxlength){
			maxlength = localmax;//cout<<localmax<<" "<<i<<endl;
			occurence = 1;
			finlist[0]=l;
		}
		else if (localmax == maxlength){
			occurence++;
			finlist[occurence-1]=l;
		}
	}
	cout<<occurence<<" "<<maxlength<<endl;
	for (int i = 0; i < occurence; ++i)
	{
		/* code */
		cout<<finlist[i]+1<<" ";
	}
	cout<<endl;

//}
/*
ideation for o(n)


*/

}
