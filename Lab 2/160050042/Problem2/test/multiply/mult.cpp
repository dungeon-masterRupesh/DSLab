#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
        cin>>n>>m;
        int a[n][m];
        for (int i = 0; i < n; ++i)
        {
                /* code */
                for (int j = 0; j < m; ++j)
                {
                        /* code */
                        cin>>a[i][j];
                }
        }
        int o,p;
        cin>>o>>p;
        int b[o][p];
        for (int i = 0; i < o; ++i)
        {
                /* code */
                for (int j = 0; j < p; ++j)
                {
                        /* code */
                        cin>>b[i][j];
                }
        }
        cout<<n<<" " <<p<<endl;
       
////CHECKS FOR 6 COMBO
        int c[n][p];
         for (int j = 0; j < p; ++j)
                {
        for (int i = 0; i < n; ++i)
        {
                /* code */
                        /* code */
                        c[i][j] = 0;}}
                        for (int r = 0; r < o; ++r)
                        {
        for (int i = 0; i < n; ++i)
        {
                for (int j = 0; j < p; ++j)
                {
                /* code */
                        /* code */
                       // c[i][j] = 0;
                                /* code */
                                c[i][j] += a[i][r]*b[r][j];
                        }
                       
                }
               
        }

}
