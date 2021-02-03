#include <iostream>
#include <cmath>
#include <string>

#define MAX 26

using namespace std;
int n;
int town[MAX][MAX];
int house[MAX][MAX];
bool visited[MAX][MAX];
int numOfTown[MAX];
int rootNode[2] = {0, 0};
int townNum = 1;
void findTown(int i, int j){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            numOfTown[town[i][j]]++;
        }
    }
}
void DFS(int i, int j){
    if(house[i][j] == 0 || visited[i][j] == true){
        if(j <= n) DFS(i, j+1);
        else DFS(i+1, 1);

        return; 
    }
    else {
        rootNode[0] = i; rootNode[1] = j;
        visited[i][j] = true;
        town[i][j] = townNum;
        DFS(i+1, j); DFS(i, j+1); DFS(i-1, j); DFS(i, j-1); // 네 방향탐색
        if(i == rootNode[0] && j == rootNode[1]){
            rootNode[0] = 0; rootNode[1] = 0;
            townNum++;
        }
        return;
    }
}
void printMat(){
for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << house[i][j];
        }
        cout <<endl;
    }
    cout <<endl;
}
void initialize(){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            house[i][j] = 0;
            town[i][j] = 0;
            visited[i][j] = false;
        }
        numOfTown[i] = 0;
    }

}
int main(){
    initialize();
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int a;
            scanf("%1d", &a);
            house[i][j] = a;
        }
    }
    DFS(1, 1);
    findTown(1, 1);
    cout << townNum - 1 << endl;
    for(int i = 1; i <= townNum - 1; ++i){
        cout << numOfTown[i] << endl;
    }

    printMat();


}