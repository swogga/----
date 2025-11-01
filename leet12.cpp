#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        const int z=100;
        int a[z];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int x = (a[0] == a[1] || a[0] == a[2]) ? a[0] : a[1];

        for (int i = 0; i < n; ++i)
            if (a[i] != x)
                cout << ++i << "\n";
    }
}
