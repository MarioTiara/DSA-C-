using System;

namespace Inorder
{


    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
        }
    }

    class Node{
        int data;
        Node right, left;

        public Node (int key){
            this.data=key;
        }

        public void insert (int key){
            if (key<=data){
                if (right==null){
                    right=new Node(key);
                }else{
                    right.insert(key);
                }
            }else{
                if (left==null){
                    left=new Node(key);
                }else{
                    left.insert(key);
                }
            }
        }
    }
}
