#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;

map<char,vector<char>> buildGraph(vector<vector<char>> edges){
    map<char, vector<char>> graph;
    for (vector<char> edge:edges){
        if(!graph.count(edge[0])){
            cout<<"edge[0]"<<endl;
            graph[edge[0]]=vector<char>();
        } 
        if(!graph.count(edge[1])) {
            graph[edge[1]]=vector<char>();
             cout<<"edge[1]"<<endl;
        }
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }

    return graph;
};


bool hasPath(map<char,vector<char>> graph, char src, char dst){
    if (src==dst){
        return true; 
    }
    for (char neighbour:graph[src]){
        if ( hasPath(graph,neighbour, dst)==true){
            return true;
        }
    }
    return false;
};
int main(){
    vector<vector<char>> edges={
        {'i','j'},
        {'k','i'},
        {'m','k'},
        {'k','l'},
        {'o','n'}
    };
    map<char,vector<char>> graph=buildGraph(edges);
    
    return 0;
}