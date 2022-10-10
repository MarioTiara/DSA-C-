using System;
using System.Collections.Generic;
namespace Trees
{
    public class Node
    {   
        int data;
        char value;
        public Node right, left;

        public Node (int data){
            this.data=data;
        }

        public Node(char value){
            this.value=value;
        }

        public void insert(int value){
            if (value<=data){
                if (left==null){
                    left=new Node(value);
                }else{
                    left.insert(value);
                }
            }else{
                if (right==null){
                    right=new Node(value);
                }else{
                    right.insert(value);
                }
            }
        }

        public void printInorder(){
            if (left!=null){
               left.printInorder();
            }
            Console.WriteLine(data);
            if (right!=null){
               right.printInorder();
            }   
        }

        public void printPreOrder(){
            Console.WriteLine(data);
            if (left!=null){
               left.printPreOrder();
            }
            if (right!=null){
               right.printPreOrder();
            }
        }

        public void printPostOrder(){
            if (left!=null){
               left.printPostOrder();
            }
            if (right!=null){
               right.printPostOrder();
            }
            Console.WriteLine(data);
        }

        public void depthFirst(Node root){
            Stack<Node> stack= new Stack<Node>();
            stack.Push(root);
            while(stack.Count>0){
                Node current= stack.Pop();
                Console.WriteLine(current.value);
                 if (current.right!=null){
                    stack.Push(current.right);
                }
                if (current.left!=null){
                    stack.Push(current.left);
                }
               
            }
        }

        static private Stack<Node> stack = new Stack<Node>();

        public void RdepthFirst(Node root){
             stack.Push(root);
             if (stack.Count<0) return;
             else{
                Node current =stack.Pop();
                Console.WriteLine(current.value);
                if (current.left!=null){
                    RdepthFirst(current.left);
                }
                if (current.right!=null){
                    RdepthFirst(current.right);
                }
                
             }
        }
        
    }
}