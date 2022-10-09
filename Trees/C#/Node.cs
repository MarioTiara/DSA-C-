using System;
namespace Trees
{
    public class Node
    {   
        int data;
        Node right, left;

        public Node (int value){
            data=value;
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
        
    }
}