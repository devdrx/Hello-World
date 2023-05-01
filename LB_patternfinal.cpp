#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    int count = 1;
    while(i <= n)
    {
     int j = 1;
     while(j<=n-i)
     {
         cout << j << " ";
         j++;
     }
     j = 1;
     while(j <= i)
     {
         if(i==n)
         {
             break;
         }
         cout << "* * ";
         j++; 
     }
     j = 1;
     while(j<=n-i)
     {
         if(i==n)
         {
             break;
         }
         cout << n-i-j+1 << " ";
         j++;
     }
     cout << endl;
     i++;
    }
	return 0;
}
