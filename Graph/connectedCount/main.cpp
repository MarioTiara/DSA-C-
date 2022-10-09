#include <iostream>
#include<map>
#include<vector>

using namespace std;

int coutConnectedComponents(map<int,vector<int>> graph, int src){
    
};



int main(){
     map<int,vector<int>> graph;
     graph[0]=vector<int>{8,1,5};
     graph[1]=vector<int>{0};
     graph[5]=vector<int>{0,8};
     graph[8]=vector<int>{0,5};
     graph[2]=vector<int>{3,4};
     graph[3]=vector<int>{2,4};
     graph[4]=vector<int>{3,3};

    
    return 0;
}

