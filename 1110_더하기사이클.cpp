#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cycle = 0;
    int num = n;
    int a, b, c, d;
    do{
        a = n/10; b = n%10;
        c = (a+b)/10; d = (a+b)%10;
        n = b*10 + d;
        ++cycle;
    }while(n != num);
    cout << cycle <<endl;

    return 0;
}