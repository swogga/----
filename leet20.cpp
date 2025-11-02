#include <iostream>


using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int div1 = 1, div2= 2, div3= 3, div4= 4;
        int rating;
        cin >> rating;
        if (rating >= 5000 && rating <= -5000)
            cout << "Неверно!\n";
        else
        {
            if (1900 <= rating)
            {
                cout << "Division " << div1 << endl;
            }
            else if (rating>=1600 && rating <= 1899)
            {
                cout << "Division " << div2 << endl;
            }
            else if (rating >= 1400 && rating <= 1599)
            {
                cout << "Division " << div3 << endl;
            }
            else if (rating <= 1399)
            {
                cout << "Division " << div4 << endl;
            }

        }
    }
    return 0;
}