#include <iostream>
using namespace std;

int main() {
    int n, n2, result, result2;

    cout << "Enter a 4-digit number: ";
    cin >> n;

    n += 8;
    n /= 3;
    result = n % 5;
    result *= 5;

    cout << "Final result: " << result << endl;

    return 0;
}
