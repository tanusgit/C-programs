
	

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends








/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
// this is the function,, read here.
vector <int> dfs(vector<int> g[], int N)
{
    
    stack<int>s;
    int visited[N]={0};
    s.push(0);
    vector<int>result;
    result.push_back(0);
    visited[0]=1;
    int i;
    int count=0;
    while(!s.empty())
    {
        count=0;
        int a=s.top();
        int n=g[a].size();
        if(n==0)
        {
            s.pop();
        }
        else if(n!=0)
        {
            for(i=0;i<n;i++)
            {
                if(visited[g[a][i]]!=1)
                {
                    s.push(g[a][i]);
                    visited[g[a][i]]=1;
                    result.push_back(g[a][i]);
                    break;
                }
                else
                {
                    count=count+1;
                }
            }
            if(count==n)
            {
                s.pop();
            }
        }
       
    }
    return result;


}



// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
}  //
