#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int score = 0; int cnt = 0;
        string OX;
        cin >> OX;
        int index = 0;
        while(OX[index] != '\0'){
            if(OX[index] == 'O'){
                cnt++;
                score += cnt;
            }
             else if(OX[index] == 'X'){
              cnt = 0;
            }
            index++;
        }
        cout << score << endl;
    }


    return 0;
}