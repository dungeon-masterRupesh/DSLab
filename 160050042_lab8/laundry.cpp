#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		/* code */
		int l,n,m,d;
		cin>>l>>n>>m>>d;
		priority_queue<int> pq;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int k;
			cin>>k;
			for(int c=1;c<=l;c++){
				pq.push(-1*c*k);
			}
		}
		int last[l];
		for (int i = 0; i < l; ++i)
		{
		last[i] = -1*pq.top();
		pq.pop();
		}
		for (int i = 0; i < l; ++i)
		{
			if (i < m)
			{last[i]=last[i]+d;
				//cout<<last[i]<<"  ";
			}
			else{
				last[i]=last [i] + d + max(0,last[i-m]-last[i]);
				//cout<<last[i] << "  ";
			}

		}
		cout<<last[l-1]<<endl;
		


	}
}
