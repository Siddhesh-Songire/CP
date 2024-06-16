// https://www.youtube.com/watch?v=F3PNsWE6_hM&ab_channel=Luv
// https://www.youtube.com/watch?v=PATgNiuTP20&list=PLgUwDviBIf0oE3gA41TKO2H5bHpPd7fzn&index=33&t=634s&ab_channel=takeUforward

//& https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implementing-dijkstra-set-1-adjacency-matrix

//* Implementing Dijkstra Algorithm
/*
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        set<pair<int, int>> st;
        vector<int> dist(V, 1e9);
        
        st.insert({0,S});
        dist[S] = 0;
        
        while(st.size() != 0){
            auto it = *(st.begin());
            int node = it.second;
            int dis = it.first;
            st.erase(it);
            
            for(auto it : adj[node]){
                ^ input is in vector of vector
                int adj_dis = it[1];
                int adj_node = it[0];
                if(dis + adj_dis < dist[adj_node]){
                    
                    ^erase if already visited
                    if(dist[adj_node] != 1e9){
                        st.erase({dist[adj_node], adj_node});
                    }
                    dist[adj_node] = dis + adj_dis;
                    st.insert({dist[adj_node],adj_node});  //^ insert into set if dist is smaller
                }
            }
        }
        
        return dist;
    }
};*/