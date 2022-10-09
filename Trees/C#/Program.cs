using System;

namespace Trees
{
    class Program
    {
        static void Main(string[] args)
        {
                  //   10
                  //   / \
                  //  /   \
                  // 5     15
                  //  \
                  //   \
                  //    8

            Node tree=new Node(10);

            tree.insert(5);
            tree.insert(15);
            tree.insert(8);

            tree.printPreOrder();
        }
    }
}
