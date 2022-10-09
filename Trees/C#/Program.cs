using System;

namespace Trees
{
    class Program
    {
        static void Main(string[] args)
        {
            Node tree=new Node(10);

            tree.insert(5);
            tree.insert(15);
            tree.insert(8);

            tree.printInorder();
        }
    }
}
