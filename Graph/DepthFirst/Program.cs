using System;
using System.Collections.Generic;
namespace DepthFirst
{
    class Program
    {
        static void Main(string[] args)
        {
            IDictionary<char, List<char>> graph= new Dictionary<char, List<char>>(){
                {'a',new List<char>{'c','b'}},
                {'b', new List<char>{'d'}},
                {'c', new List<char>{'e'}},
                {'d', new List<char>{'f'}},
                {'e', new List<char>()},
                {'f',new List<char>()}
            };

            RDepthFirstPrint(graph,'a');
        }

         static void DepthFirstPrint(IDictionary<char, List<char>> graph,char source){
            Stack<char> stack= new Stack<char>();
            stack.Push(source);
            while(stack.Count>0){
                char current=stack.Pop();
                Console.WriteLine(current);
                foreach(var neightbour in graph[current]){
                    stack.Push(neightbour);
                }
            }
        }

        static void RDepthFirstPrint(IDictionary<char, List<char>> graph,char source){
            Console.WriteLine(source);
            foreach(var neightbour in graph[source]){
                RDepthFirstPrint(graph, neightbour);
            }
        }


       

    }
}
