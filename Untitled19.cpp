#include <iostream>
using namespace std;

double sum(int x1, int x2) {
    return sum(x1 + x2);
}

int main(){
    cout << sum(10, 2) << endl;
    return 0;
}

