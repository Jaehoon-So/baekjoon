#include <iostream>
#include <algorithm>
#include <string>
#define WORD_MAX 1000001 // 단어길이의 최대 + '\0'
//char sentence[WORD_MAX];
using namespace std;
int words = 0;
int findword(string s){
    if(string(" ") == s) return 0;
    for(int i = 0; i < s.length(); i++){
        //cout << s.length() << endl;
        if((i == 0 && s[i] == ' ') || i == (s.length()-1) && 
            s[s.length()-1] == ' ') continue;
        if(s[i] == ' '){
            words++;
        }   
    }
    return words+1;
}
int main(){
    
    string sentence;
    getline(cin, sentence);

    cout << findword(sentence) << endl;

}