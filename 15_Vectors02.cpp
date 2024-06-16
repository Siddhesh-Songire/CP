//* NEsting in vectors 
// Vectors of pair ->  vector<pair<int,int>> v 
// Arrays of vector -> vector<int> v[N]
// Vector of vector -> vector<vector<int>> v
#include <iostream>
#include<vector>
using namespace std;

void printVecofPair(vector<pair<int,int>> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}

void printArrayofVector(vector<int> v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }    
    cout<<endl;
}

int main()
{
//*---------Vectors of pair----------------------------
vector<pair<int,int>> v1 ={{1,2}, {2,3}, {5,6}};

// Taking input from user
vector<pair<int,int>> v1 ;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x, y;
    cin>> x >> y;
    v1.push_back({x,y});
}
printVecofPair(v1);

//*-----------------Array of vectors-------------- 
int N;
cin>>N;

vector<int> va[N];
for (int i = 0; i < N; i++)
{
    int n; 
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        va[i].push_back(x);
    }    
}

for (int i = 0; i < N; i++)
{
    printArrayofVector(va[i]);
}

//*------Vector of Vector-------
/* Array of vector was like 2d array whose rows were fixed but no of columns were dynamic
Therefore vector of vec will be having both rows and columns dynamic
*/
vector<vector<int>> vv;
for (int i = 0; i < N; i++)
{
    int n;
    cin>>n;
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        temp.push_back(x);
    }
    vv.push_back(temp);

}
for (int i = 0; i < vv.size(); i++)
{
    printArrayofVector(vv[i]);
}



    return 0;
}