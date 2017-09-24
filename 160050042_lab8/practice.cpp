#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
	priority_queue<int> pq;
	int siz;
	cin>>siz;
	for (int i = 0; i < siz; ++i)
	{
		int numb;
		cin >> numb;
		pq.push(-1*numb);
	}
	int rep;
	cin>>rep;
	for (int i = 0; i < rep; ++i)
	{
		int a = pq.top();
		pq.pop();
		cout<<-1*a<<endl;
		pq.push(2*a);

	}


	return 0;
}