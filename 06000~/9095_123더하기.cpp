#include <iostream>
using namespace std;
#define MAX 100000
int D[MAX]; // D[i]: 
void initialize(){
    for(int i = 0; i < MAX; i++){
        D[i] = 0;
    }
    D[1] = 1;
    D[2] = 2;
    D[3] = 4;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        initialize();
        int n;
        cin >> n;
        for(int i = 4; i <= n; i++){
            D[i] = D[i-1] + D[i-2] + D[i-3];
        }
        cout << D[n] << endl;
    }
    

    return 0;
}