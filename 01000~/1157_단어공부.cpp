// https://www.acmicpc.net/problem/1157
#include <iostream>
#include <string>
#define MAX 26
using namespace std;

int main(){

    int alphabet[26];
    for(int i = 0; i < MAX; ++i){
        alphabet[i] = 0;
    }
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); ++i){
        char character = s[i];
        if(character >= 'a' && character <= 'z') alphabet[character - 'a']++;
        else if(character >= 'A' && character <= 'Z') alphabet[character - 'A']++;
    
    }
    char maxChar;
    int max = -1;
    int maxCnt = 0;
    for(int i = 0; i < MAX; ++i){
        if(alphabet[i] > max){
            maxChar = 'A' + i;
            max = alphabet[i];
        }
    }
    for(int i = 0; i < MAX; i++){
        if(alphabet[i] == max) maxCnt++;
    }
    if(maxCnt > 1) cout << "?" << endl;
    else {
        cout << maxChar << endl;
    }

    return 0;
}