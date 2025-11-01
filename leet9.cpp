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
        if (k > n / 2) 
        {
            cout << "no\n";
        } 
        else
         {
            cout << "yes\n";

            for (int i = 0; i < k; ++i)
                cout << "1 1 ";

            for (int i = 0; i < n - 2 * k; ++i)
                cout << "1000 ";

            cout << "\n";
        }
    }
}
