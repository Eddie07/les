#include <iostream>

using namespace std;

int main()
{
    int num, degree, c = 1;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter exponential: ";
    cin >> degree;
    cout << "Result:" << num << "^" << degree;
    do {
        c = c * num;
        --degree;
    } while (degree > 0);
    cout << "=" << c;
    return 0;
}
