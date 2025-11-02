#include <iostream>


using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        if (A == B && B == C && C == D)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }


    return 0;
}