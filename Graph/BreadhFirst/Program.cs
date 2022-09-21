using System;
using System.Collections.Generic;
namespace BreadhFirst
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

            BreadhFirst(graph,'a');
        }

        static void BreadhFirst(IDictionary<char, List<char>> graph, char source){
            Queue<char> queue= new Queue<char>();
            queue.Enqueue(source);
            while(queue.Count>0){
                char current=queue.Dequeue();
                 Console.WriteLine(current);
                foreach( var neightbour in graph[current]){
                    queue.Enqueue(neightbour);
                }
            }
        }

        static void RBreadhFirst(IDictionary<char, List<char>> graph, char source){
            
        }


    }
}
