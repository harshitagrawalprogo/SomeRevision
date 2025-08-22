#include <iostream>
#include <vector>
using namespace std;

int countRepeatingDigits(int num) {
    vector<int> v(10, 0);  // vector of size 10, all initialized to 0

    while (num > 0) {
        v[num % 10] += 1;  // count digit
        num /= 10;         // remove last digit
    }

    int count = 0;
    for (int i = 0; i < 10; i++) {  // must be < 10, not <= 10
        if (v[i] > 1) {
            count += 1;
        }
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Number of repeating digits: " << countRepeatingDigits(num) << endl;
    return 0;
}
