#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    double x, k;
    cin >> x >> k;

    // case 1
    auto r = k + 2 * k + 4 * k;
    if (r <= x) {
        cout << static_cast<int>(r * 1000);
        return 0;
    }

    // case 2
    r = k / 2 + k + 2 * k;
    if (r <= x) {
        cout << static_cast<int>(r * 1000);
        return 0;
    }

    // case 3
    r = k / 4 + k / 2 + k;
    if (r <= x) {
        cout << static_cast<int>(r * 1000);
        return 0;
    }

    // case 4
    cout << 0;

    return 0;
}