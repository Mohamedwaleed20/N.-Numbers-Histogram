#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    char x ;
    cin >> x ;
    int  t ;
    cin >> t ;
    if (t<1 || t>50)
    {
        cout << "err" ;
    }
    while (t--)
    {
        int n ;
        cin >> n ;
        for (int i =1 ; i <=n ;i++)
        {
            cout << x ;
        }
        cout << "" << endl ;
    }
    return 0;
}
