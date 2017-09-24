#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n;
	cin>>n;
	int answer = 0;
	stack<int> a;
	int cur;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		answer++;
		cin>>cur;
		while(!a.empty() && a.top() < cur){
			a.pop();
			answer++;
		}
		if (a.empty())answer--;
		a.push(cur);
		//cout<<cur<<"  "<<answer<<endl;

		// a.push(cur);
		// a.pop();
	}
	cout<<answer<<endl;
}