using System;

namespace Trees
{
    class Program
    {
        static void Main(string[] args)
        {
            //    Node A=new Node('a');
            //    Node B= new Node('b');
            //    Node C= new Node('c');
            //    Node D = new Node('d');
            //    Node E = new Node('e');
            //    Node F = new Node('f');


               Node A=new Node(3);
               Node B= new Node(11);
               Node C= new Node(4);
               Node D = new Node(-2);
               Node E = new Node(4);
               Node F = new Node(1);

               A.left=B;
               A.right=C;
               B.left=D;
               B.right=E;
               C.right=F;

               Console.WriteLine(A.maxPathSum(A));


        }
    }
}
