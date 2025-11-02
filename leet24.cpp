#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int minx = min(min(a, b), c);
        int maxx = max(max(a, b), c);

        if (a != minx && a != maxx)
            cout << a << endl;
        else if (b != minx && b != maxx)
            cout << b << endl;
        else
            cout << c << endl;
    }
    return 0;
}
