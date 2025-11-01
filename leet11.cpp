#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    int x = 0; 
    int y = 0;
    int g = 0; 

    for (int i = 0; i < a; ++i) 
    {
        int t;
        cin >> t;

        if (x == 0 && y < c) 
        {
            x = b;
            --y;
        }

        if (t == 1)
         {
            if (x > 0) 
            {
                --x;
                --g;
            }
        } 
        else 
        {
            x = 0;
        }
    }

    cout << g << endl;
}
