#include <iostream>


using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        string num1, num2, num3;
        num1 = "STAIR";
        num2 = "PEAK";
        num3 = "NONE";
        if (a < b && b < c)
        {
            cout << num1 << endl;
        }
        else if (a < b && b > c)
        {
            cout << num2 << endl;
        }
        else 
        {
            cout << num3 << endl;
        }
    }
    return 0;
}