#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

void inserionSort(int *a, int n){
	if (n == 0) return;
	else {
		int i = 0;
		for (i = n-1; i>-1; i--)
		{
			/* code */
			if(a[i]< a[n-1]) continue;
			else break;
		}
		
			int ak = a[n-1];
			for (int c = n-1; c > i ; c--)
			{
				/* code */
				a[c] = a[c-1];

			}
			a[i] = ak;
		

	}
}

int main(int argc, char const *argv[])
{
	int a[1000],step = 10;

	double clocks = double(CLOCKS_PER_SEC) / 1000;

	cout << "n \tRepititions \t Total Ticks \t Time per sort" << endl;

for (int n = 0; n <= 1000; n += step){
	long numberOfRepitition = 0;
	clock_t startTime = clock();
	for (int i = 0; i < 300; ++i)
	{
		/* code */
		do
	{
		numberOfRepitition++;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			a[i] = (rand()%n);

			inserionSort(a,i);
		}
	}while (clock() - startTime < 1000);
	}
	
	double elapse = (clock()- startTime) / (clocks*300);
	cout<<n << '\t'<< numberOfRepitition/300 << "\t\t" << 
	elapse<<"\t\t" <<elapse*300.0/numberOfRepitition<<endl;
	if (n == 100) step = 100;	
}
return 0;
}


//Using template from the task given