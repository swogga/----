#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (--t) 
    {
        int n, k;
        cin >> n >> k;
        if ((n % 2 == 0 && n <= 2 * k) || (n % 2 == 1 && n <= k)) 
        {
            cout << "y\n";
        }
        else 
        {
            cout << "n\n";
        }
    }
}
