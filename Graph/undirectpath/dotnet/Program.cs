using System;
using System.Collections.Generic;
using Newtonsoft.Json;
namespace dotnet
{
    class Program
    {
        static void Main(string[] args)
        {
              List<List<char>> edges= new List<List<char>>{
                new List<char>{'i','j'},
                new List<char>{'k','i'},
                new List<char>{'m','k'},
                new List<char>{'k','l'},
                new List<char>{'o','n'}
                };

                 Dictionary<char, List<char>> graph=buildGraph(edges);
                 string output = JsonConvert.SerializeObject(graph);
                 Console.WriteLine(output);
                 //HashSet<char> visited= new HashSet<char>();
                 Console.WriteLine(hasPath(graph,'i','n',new HashSet<char>()));
        }

        static bool hasPath (Dictionary<char, List<char>> graph, char src, char dst, HashSet<char> visited){
            if (src==dst) return true;
            if (visited.Contains(src))return false;
            visited.Add(src);
            foreach(var neightbour in graph[src]){
                if (hasPath(graph,neightbour,dst, visited)==true) return true;
            }
            return false;
        }

        static  Dictionary<char, List<char>> buildGraph(List<List<char>> edges){
            Dictionary<char,List<char>> graph=new Dictionary<char, List<char>>();
            foreach( var edge in edges){
                if (!(graph.ContainsKey(edge[0]))){
                    graph.Add(edge[0],new List<char>());
                }
                if (!(graph.ContainsKey(edge[1]))){
                    graph.Add(edge[1],new List<char>());
                }

                graph[edge[0]].Add(edge[1]);
                graph[edge[1]].Add(edge[0]); 
            }  
            return graph;
        }

       
    }
}
