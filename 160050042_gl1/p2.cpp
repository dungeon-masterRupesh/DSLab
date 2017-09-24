#include<bits/stdc++.h>
using namespace std;
int main(){
	int noPump;
	cin>>noPump;
	/*long long store[noPump][2];
	for (int i = 0; i < noPump; ++i)
	{
		
		
		cin>>store[i][0]>>store[i][1];

	}*/
	//On2
	/*for(int i = 0 ; i < noPump ; i++){
		long long sumO = 0;
		long long sumD = 0;
		bool poss = true;
		for(int j = 0; (j < noPump) && poss ; j++){
			sumO = sumO + store[(i+j)%noPump][0];
			sumD = sumD + store[(i+j)%noPump][1];
			//cout<<sumO<<"  "<<sumD<<endl;
			if (sumD > sumO) poss = false;
		}
		if (poss){
			cout<<i<<endl;
			break;
		}
	}*/
	//not on2
	long long now[noPump];
	for (int i = 0; i < noPump; ++i)
	{
		/* code */
		int o,p;
		cin>>o>>p;
		//now[i]=store[i][0]-store[i][1];
		now[i]=o-p;
	}
	long long sumNow=0;
	long long iexp=0;
	for(int i = 0;i<noPump;i++){
		sumNow = sumNow + now[i];
		//cout<<sumNow<<endl;
		if(sumNow < 0){
			sumNow = 0;
			iexp = i+1;
		}
	}
	cout<<iexp<<endl;


}
