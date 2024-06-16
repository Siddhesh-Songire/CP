//* 733. Flood Fill (Matrix problem)
// https://leetcode.com/problems/flood-fill/

/* Replace the color of all of the aforementioned pixels with color.
Return the modified image after performing the flood fill.
*/

#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>>& image, int initialColor, int newColor){
    int n = image.size();
    int m = image[0].size();

    if(i < 0 || j  < 0 ) return;
    if(i >= n || j >= m) return;
    if(image[i][j] != initialColor) return;

    image[i][j] = newColor;
    
    dfs(i-1, j, image, initialColor, newColor);
    dfs(i+1, j, image, initialColor, newColor);
    dfs(i, j-1, image, initialColor, newColor);
    dfs(i, j+1, image, initialColor, newColor);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int initialColor = image[sr][sc];
    int newColor = color;

    if(initialColor != newColor)
        dfs(sr,sc, image, initialColor, newColor);
        
    return image;
}


int main(){

}