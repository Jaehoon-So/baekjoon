#include <iostream>
#include <vector>
#define MAX 999

using namespace std;

int n, m;
int maze[MAX][MAX];

void printMaze(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
}
void initialize(){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            maze[i][j] = 0;
        }
    }
}
void makeMaze(){
    for(int i = 1; i <= n; i++){
        string path;
        for(int j = 1; j <= m; j++){
            cin >> path;
        }
        for(int k = 1; k <= m; k++){
            maze[i][k] = path[k-1];
        }
    }
}
int main(void){
    cout.sync_with_stdio(false);
    initialize();
    cin >> n >> m;
    makeMaze();
    printMaze();

    return 0;
}