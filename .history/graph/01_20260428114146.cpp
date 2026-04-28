/*
A graph G = (V,E) consist of : 

V -> Set of Vertices(nodes) -> An individual object in Graph
E -> Set of edges connecting pairs of vertices

-- Directed Graph    -> edges have direction
-- Undirected Graph  -> edges have no direction
-- Weighted Graph    -> edges have values(weight/cost/distance)
-- Unweighted Graph

* Path -> A sequence of vertices connected edges

* Cycle -> A path that start and end at the same vertices

* Degree -> In undirected graph -> number of edge connected to the vertex

In directed graph ->
                -- In degree  -> incoming edges
                -- Out degree -> outgoing edges
*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;


vector<vector<int>> adjList(5);

void dfs(int source , vector<bool> visit){
    if(visit[source]) return;

    visit[source]= true;
    cout<<source<<" ";

    for(int i=0;i<adjList[source].size();i++){
        int v = 
    }
}

int main(){
    int n ,m;
    cout<<"Enter no of vertices : ";
    cin>>n;
    cout<<"Enter no of edges : ";
    cin>>m;

    for(int i=0;i<m;i++){ 
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // for undirected graph
    }

    cout<<"Adjacency List : "<<endl;

    for(int i=0;i<n;i++){
        cout<<i<<" -> ";
        for(int j=0;j<adjList[i].size();j++){
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<bool> visited(n,false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    cout<<"BFS Traversal : ";

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";

        for(int i=0; i < adjList[curr].size(); i++){
            int v = adjList[curr][i];
            if(!visited[v]){
                visited[v]=true;
                q.push(v);
            }
        }
    }
    cout<<endl;
    vector<bool> visit(5,false);
    dfs(4,visit);
}

/*

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct node{
    int data;
    node * next;
};

vector<node*> head(5);

node* addnode(int data){
    node* newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void addedge(int u , int v){
    if(head[u]==NULL){
        head[u]=addnode(v);
    }
    else{
        node* curr = head[u];
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = addnode(v);
    }
}







int main(){
    for(int i=0;i<5;i++){
        head[i]=NULL;
    }

    addedge(0,1);
    addedge(1,0);
}

*/



