#include <iostream>


using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string word1, word2, word3;
        cin >> word1 >> word2 >> word3;
        if (word1.length() > 10  word2.length() > 10  word3.length() > 10)
        {
            cout << "Слишком длинное!\n";
            continue;
        }
        char firstLetter1 = word1[0];
        char firstLetter2 = word2[0];
        char firstLetter3 = word3[0];
        cout << firstLetter1 << firstLetter2 << firstLetter3 << endl;

    }

    return 0;
}