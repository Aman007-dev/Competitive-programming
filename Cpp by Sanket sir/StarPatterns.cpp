#include <iostream>
using namespace std;
int main()
{
    /* Pattern 1 ->       *
                         ***
                        *****
                       *******  
    */
    int n = 4;
    for (int i = n; i >= 1; i--)
    {
        for(int k=n-1;k>=0;k--){
            for(int x=i;x<=n;x++){
                cout<<"*";
            }
        }
        if (i <= n - 1)
        {
            for (int j = i+1; j <= n; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
//Pattern printing must revise