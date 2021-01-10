#include <iostream>
#include <queue>

#define MAX 1001

using namespace std;

int n, m, v;
int adjMat[MAX][MAX];
bool visitedDFS[MAX];
bool visitedBFS[MAX];
queue<int> q;
// 행렬을 출력하기 위해 임시로 만든 함수.
void printMat() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
}
// 초기화 과정.
void initialize() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adjMat[i][j] = 0;
        }
        visitedDFS[i] = false;
        visitedBFS[i] = false;
    }
}
void dfs(int v) {
    visitedDFS[v] = true;
    cout << v << " ";
    for (int i = 1; i <= n; i++) {
        if (adjMat[v][i] == 1 && visitedDFS[i] == false)
            dfs(i);
    }
}
void bfs(int v) {
    q.push(v);
    while (!q.empty()) {
        int Q;
        Q = q.front();
        visitedBFS[Q] = true;
        cout << Q << " ";
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (adjMat[Q][i] == 1 && visitedBFS[i] == false) {
                visitedBFS[i] = true;
                q.push(i);
            }
        }
    }

}
int main(void) {
    cout.sync_with_stdio(false);
    initialize();
    cin >> n >> m >> v;
    for (int i = 1; i <= m; i++) {
        int start, end;
        cin >> start >> end;
        adjMat[start][end] = adjMat[end][start] = 1;
    }
    //printMat();
    dfs(v); cout << endl;
    bfs(v);
    return 0;
}