#include <iostream>
using namespace std;

int main() {
    int n, add, div, mod, res, res2;

    cout << "Enter a 4-digit number: ";
    cin >> n;

    add = n+8;
    div = add/3;
    mod = div%5;
    res = mod*5;

    n += 8;
    n /= 3;
    res2 = n % 5;
    res2 *= 5;

    cout << "Normal result: " << res << endl;
    cout << "Assignment Operators result: " << res2 << endl;

    return 0;
}
