using System;

namespace Trees
{
    class Program
    {
        static void Main(string[] args)
        {
               Node A=new Node('a');
               Node B= new Node('b');
               Node C= new Node('c');
               Node D = new Node('d');
               Node E = new Node('e');
               Node F = new Node('f');

               A.left=B;
               A.right=C;
               B.left=D;
               B.right=E;
               C.right=F;

               A.depthFirst(A);


        }
    }
}
