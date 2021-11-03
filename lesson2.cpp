#include <iostream>
using namespace std;
int main()
{
    int a,b,c=1;
    cout << "Enter number: ";
    cin >> a;
    cout << "Enter exponential: ";
    cin >> b;
	cout << "Result:"<< a << "^" << b ;
    do {
        c=c*a;
        --b;
    }
    while (b>0);
    cout << "=" << c; 
    return 0;
	
	
}
	