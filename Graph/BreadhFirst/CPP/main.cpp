#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;


void BreadhFirst(map<char,vector<char>> &graph, char source){
    queue<char> Queue;
    Queue.push(source);
    while(!Queue.empty()){
        char current=Queue.front();
        cout<<current<<endl;
        Queue.pop();
        for(char c:graph[current]){
            Queue.push(c);
        }
    }
};

int main(){
    map<char,vector<char>> graph;
    graph['a']=vector<char>{'c','b'};
    graph['b']=vector<char>{'d'};
    graph['c']=vector<char>{'e'};
    graph['d']=vector<char>{'f'};
    graph['e']=vector<char>();
    graph['f']=vector<char>();

    BreadhFirst(graph,'a');
     return 0;
}


   
