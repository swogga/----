#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        while (k--) {
            // Попробуем обратить шаг Коллатца
            if ((x - 1) % 3 == 0) {
                int prev = (x - 1) / 3;
                // Проверим, что это действительно обратный шаг от нечетного числа
                if (prev % 2 == 1) {
                    x = prev;
                    continue;
                }
            }
            // Иначе считаем, что x пришло из четного числа
            x *= 2;
        }
        cout << x << endl;
    }
    return 0;
}