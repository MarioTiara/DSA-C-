using System;
using System.Linq;
using System.Collections.Generic;
namespace Search
{
    class Program
    {
        static void Main(string[] args)
        {
            int min=MinimumInsertTobePalindrome("geeks");
            Console.WriteLine(min);
        }


        public static int MinimumInsertTobePalindrome(string input){
            HashSet<char> already= new HashSet<char>();
            int minNumber=0;
            foreach(var chr in input){  
                if (!already.Contains(chr)){
                    already.Add(chr);
                    char [] charinArry= input.Where(c=>c==chr).ToArray();
                     if ((charinArry.Count()%2)!=0){
                            minNumber+=1;
                    } 
                }
               
            }
            if (input.Length%2!=0) return minNumber-1;

            return minNumber;
        }

        
    }
}
