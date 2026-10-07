// лаба 4.6
// варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double K, i, t, S;

    // method 1
    K = 1;
    while(K <= 20) {
        t = 0;
        i = K;
        while(i <= 40-K) {
            t += i*i;
            i++;
        }
        S += (1+sqrt(t))/(K*K);
        K++;
    }
    cout << S << endl;

    // method 2
    K = 1;
    S = 0;
    do {
        t = 0;
        i = K;
        do {
            t += i*i;
            i++;
        } while(i <= 40-K);
        S += (1+sqrt(t))/(K*K);
        K++;
    } while(K <= 20);
    cout << S << endl;

    // method 3
    K = 1;
    S = 0;
    for(K = 1; K <= 20; K++) {
        t = 0;
        for(i = K; i <= 40-K; i++) {
            t += i*i;
        }
        S += (1+sqrt(t))/(K*K);
    }
    cout << S << endl;

    // method 4
    K = 1;
    S = 0;
    for(K = 20; K >= 1; K--) {
        t = 0;
        for(i = 40-K; i >= K; i--) {
            t += i*i;
        }
        S += (1+sqrt(t))/(K*K);
    }
    cout << S << endl;


    cin.get();
    return 0;
}