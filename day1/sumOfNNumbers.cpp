#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Sum of all prime numbers from 1 to n is: ";
    int n=12;
    for(int i = 2; i <= n; i++) {
        bool isPrime = true;
        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}