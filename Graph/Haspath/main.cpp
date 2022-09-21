#include<iostream>
#include<stack>
#include<map>
#include<vector>
#include <queue>

using namespace std;

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

bool RhasPath(map<char,vector<char>> graph, char src, char dst){
    queue<char> Queue;
    Queue.push(src);
    while(!Queue.empty()){
        char current =Queue.front();
        Queue.pop();
        if (current==dst){
            return true;
        }
        for (char c:graph[current]){
            Queue.push(c);
        }
    }

    return false;
}

int main(){
    map<char,vector<char>> graph;
    graph['f']=vector<char>{'g','i'};
    graph['g']=vector<char>{'h'};
    graph['h']=vector<char>();
    graph['i']=vector<char>{'g','k'};
    graph['j']=vector<char>{'i'};
    graph['k']=vector<char>();

    bool resutl=RhasPath(graph,'f','k');
    cout<<resutl<<endl;
    return 0;
}