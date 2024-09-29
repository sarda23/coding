/*
#include <iostream>
#include <vector>
using namespace std;
 
// Below arrays detail all eight possible movements
int row[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int col[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
 
// check whether cell (x, y) is valid or not
bool isValid(int x, int y, int M, int N) {
    return (x >= 0 && x < M && y >= 0 && y < N);
}
 
// Find the length of the longest path in matrix `mat[][]` with consecutive characters.
// The path should continue from the previous character.
// Here, (i, j) denotes the coordinates of the current cell.
int findMaxLen(vector<vector<char>> const &mat, int x, int y, char previous)
{
    // `M × N` matrix
    int M = mat.size();
    int N = mat[0].size();
 
    // base case: return length 0 if the current cell (x, y) is invalid or
    // the current character is not consecutive to the previous character
    if (!isValid(x, y, M, N) || previous + 1 != mat[x][y]) {
        return 0;
    }
 
    // stores length of the longest path
    int max_length = 0;
 
    // recur for all eight adjacent cells from the current cell
    for (int k = 0; k < 8; k++)
    {
        // visit position (x + row[k], y + col[k]) and find the
        // maximum length from that path
        int len = findMaxLen(mat, x + row[k], y + col[k], mat[x][y]);
 
        // update the length of the longest path if required
        max_length = max(max_length, 1 + len);
    }
 
    return max_length;
}
 
int findMaxLength(vector<vector<char>> const &mat, char ch)
{
    // base case
    if (mat.size() == 0) {
        return 0;
    }
 
    // `M × N` matrix
    int M = mat.size();
    int N = mat[0].size();
 
    // stores length of the longest path
    int max_length = 0;
 
    // traverse the matrix
    for (int x = 0; x < M; x++)
    {
        for (int y = 0; y < N; y++)
        {
            // start from the current cell if its value matches with
            // the given character
            if (mat[x][y] == ch)
            {
                // recur for all eight adjacent cells from the current cell
                for (int k = 0; k < 8; k++)
                {
                    // visit position (x + row[k], y + col[k]) and find the
                    // maximum length from that path
                    int len = findMaxLen(mat, x + row[k], y + col[k], ch);
 
                    // update the length of the longest path if required
                    max_length = max(max_length, 1 + len);
                }
            }
        }
    }
 
    return max_length;
}
 
int main()
{
    // input matrix
    vector<vector<char>> mat =
    {
        { 'D', 'E', 'H', 'X', 'B' },
        { 'A', 'O', 'G', 'P', 'E' },
        { 'D', 'D', 'C', 'F', 'D' },
        { 'E', 'B', 'E', 'A', 'S' },
        { 'C', 'D', 'Y', 'E', 'N' }
    };
 
    // starting character
    char ch = 'C';
 
    cout << "The length of the longest path with consecutive characters "
         << "starting from character " << ch << " is "
         << findMaxLength(mat, ch) << endl;
 
    return 0;
}
*/
/*
#include<bits/stdc++.h>
#define R 3
#define C 3
using namespace std;
 
// tool matrices to recur for adjacent cells.
int x[] = {0, 1, 1, -1, 1, 0, -1, -1};
int y[] = {1, 0, 1, 1, -1, -1, 0, -1};
 
// dp[i][j] Stores length of longest consecutive path
// starting at arr[i][j].
int dp[R][C];
 
// check whether mat[i][j] is a valid cell or not.
bool isvalid(int i, int j)
{
    if (i < 0 || j < 0 || i >= R || j >= C)
      return false;
    return true;
}
 
// Check whether current character is adjacent to previous
// character (character processed in parent call) or not.
bool isadjacent(char prev, char curr)
{
    return ((curr - prev) == 1);
}
 
// i, j are the indices of the current cell and prev is the
// character processed in the parent call.. also mat[i][j]
// is our current character.
int getLenUtil(char mat[R][C], int i, int j, char prev)
{
     // If this cell is not valid or current character is not
     // adjacent to previous one (e.g. d is not adjacent to b )
     // or if this cell is already included in the path than return 0.
    if (!isvalid(i, j) || !isadjacent(prev, mat[i][j]))
         return 0;
 
    // If this subproblem is already solved , return the answer
    if (dp[i][j] != -1)
        return dp[i][j];
 
    int ans = 0;  // Initialize answer
 
    // recur for paths with different adjacent cells and store
    // the length of longest path.
    for (int k=0; k<8; k++)
      ans = max(ans, 1 + getLenUtil(mat, i + x[k],
                                   j + y[k], mat[i][j]));
 
    // save the answer and return
    return dp[i][j] = ans;
}
 
// Returns length of the longest path with all characters consecutive
// to each other.  This function first initializes dp array that
// is used to store results of subproblems, then it calls
// recursive DFS based function getLenUtil() to find max length path
int getLen(char mat[R][C], char s)
{
    memset(dp, -1, sizeof dp);
    int ans = 0;
 
    for (int i=0; i<R; i++)
    {
        for (int j=0; j<C; j++)
        {
            // check for each possible starting point
            if (mat[i][j] == s) {
 
                // recur for all eight adjacent cells
                for (int k=0; k<8; k++)
                  ans = max(ans, 1 + getLenUtil(mat,
                                    i + x[k], j + y[k], s));
            }
        }
    }
    return ans;
}
 
// Driver program
int main() {
 
    char mat[R][C] = { {'a','c','d'},
                     { 'h','b','a'},
                     { 'i','g','f'}};
 
    cout << getLen(mat, 'a') << endl;
    cout << getLen(mat, 'e') << endl;
    cout << getLen(mat, 'b') << endl;
    cout << getLen(mat, 'f') << endl;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> row={-1,-1,-1,0,0,1,1,1};
vector<int>col={-1,0,1,-1,1,-1,0,1};

bool isvalid(int x,int y,int n,int m){
    return x>=0 and y>=0 and x<n and y<m;
}
int maxlen(vector<vector<char>>&mat,int x,int y,char previous){
    int n=mat.size(),m=mat[0].size();

    if(!isvalid(x,y,n,m) or previous+1!=mat[x][y])
        return 0;

    int mx=0;

    for(int k=0;k<8;k++){
        int len=maxlen(mat,x+row[k],y+col[k],mat[x][y]);
        mx=max(mx,1+len);
    }

    return mx;

}
int findmaxlength(vector<vector<char>>&mat,char ch){

    if(mat.size()==0)
        return 0;

    int n=mat.size(),m=mat[0].size();

    int maxlength=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==ch){
                for(int k=0;k<8;k++){
                    int len=maxlen(mat,i+row[k],j+col[k],ch);
                    maxlength=max(maxlength,1+len);
                }
            }
        }
    }
    return maxlength;
}
int main(){
    vector<vector<char>> mat =
    {
        { 'D', 'E', 'H', 'X', 'B' },
        { 'A', 'O', 'G', 'P', 'E' },
        { 'D', 'D', 'C', 'F', 'D' },
        { 'E', 'B', 'E', 'A', 'S' },
        { 'C', 'D', 'Y', 'E', 'N' }
    };
    char ch='C';

    cout<<findmaxlength(mat,ch);
}