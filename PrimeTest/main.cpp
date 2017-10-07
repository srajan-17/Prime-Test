/*
 Siddharth Rajan
 PrimeTest
 */

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main() {
    
    unsigned long int n;
    int test_num;
    
    cout << "Enter numbers below to see if they are prime or not. Press control+D to exit at any time." << endl;
    
    while (cin >> n) {
        
        if (n == 0 || n == 1) {
            cout << "Not Prime" << endl;
            continue;
        }
        
        else if (n % 2 == 0) {
            if (n == 2)
                cout << "Prime" << endl;
            else
                cout << "Not Prime" << endl;
        }
        
        else if (n % 2 != 0) {
            test_num = 3;
            while (test_num <= sqrt(n)) {
                if (n % test_num == 0) {
                    cout << "Not Prime" << endl;
                    break;
                }
                test_num = test_num + 2;
            }
            if ((n % test_num != 0) || (test_num > sqrt(n)))
                cout << "Prime" << endl;
        }
    }
    
    return 0;
}
