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

        public void RdepthFirst_Preorder(Node root){
             stack.Push(root);
             if (stack.Count<0) return;
             else{
                Node current =stack.Pop();
                Console.WriteLine(current.value);
                if (current.left!=null){
                    RdepthFirst_Preorder(current.left);
                }
                if (current.right!=null){
                    RdepthFirst_Preorder(current.right);
                }
                
             }
        }

        public void RdepthFirst_Postorder(Node root){
             stack.Push(root);
             if (stack.Count<0) return;
             else{
                Node current =stack.Pop();
               
                if (current.left!=null){
                    RdepthFirst_Postorder(current.left);
                }
                if (current.right!=null){
                    RdepthFirst_Postorder(current.right);
                }

                 Console.WriteLine(current.value);
                
             }
        }

        public void RdepthFirst_Inorder(Node root){
             stack.Push(root);
             if (stack.Count<0) return;
             else{
                Node current =stack.Pop();
               
                if (current.left!=null){
                    RdepthFirst_Inorder(current.left);
                }
                Console.WriteLine(current.value);
                if (current.right!=null){
                    RdepthFirst_Inorder(current.right);
                }

                 
                
             }
        }


        public void BreadtFirstTravers(Node start){
            Queue<Node> queue= new Queue<Node>();
            queue.Enqueue(start);
            while(queue.Count>0){
                Node current=queue.Dequeue();
                Console.WriteLine(current.value);
                if (current.left!=null){
                    queue.Enqueue(current.left);
                }
                if (current.right!=null){
                    queue.Enqueue(current.right);
                }
            }
        }

     
        public Queue<Node> queue= new Queue<Node>();
        public void RBreadtFirstTravers(Node start){
            queue.Enqueue(start);
            if (queue.Count<=0){
                return;
            }
            else{
                Node current = queue.Dequeue();
                Console.WriteLine(current.value);
                if (current.left!=null){
                    RBreadtFirstTravers(current.left);
                }
                if (current.right!=null){
                    RBreadtFirstTravers(current.right);
                }
            }
        }


        public bool Include (Node root, Char target){
            Queue<Node> queue = new Queue<Node>();
            queue.Enqueue(root);
            while(queue.Count>0){
                Node current = queue.Dequeue();
                if (current.value==target){
                    return true;
                }
                if (current.left!=null) queue.Enqueue(current.left);
                if (current.right!=null) queue.Enqueue(current.right);
            }
            
            return false;
        }

        public bool RIncludes(Node root, Char target){
            if (root==null) return false;
            if (root.value==target) return true;
            return RIncludes(root.left, target) || RIncludes(root.right, target);
        }

        public int Sum (Node root){
            int sum=0;
            Stack<Node> stack = new Stack<Node>();
            stack.Push(root);
            while(stack.Count>0){
                Node current = stack.Pop();
                sum+=current.data;
                if (current.left!=null) stack.Push(current.left);
                if (current.right!=null) stack.Push(current.right);
            }

            return sum;
        }

        public int RSum (Node root){
            if (root ==null) return 0;
            return root.data + RSum(root.left) + RSum(root.right);
        }

        public int Minvalue(Node root){
            int min=int.MaxValue;
            Stack<Node> stack = new Stack<Node>();
            stack.Push(root);
            while(stack.Count>0){
                Node current = stack.Pop();
                if (current.data<min) min=current.data;
                if (current.left!=null) stack.Push(current.left);
                if (current.right!=null) stack.Push(current.right);
            }
            return min;
        }


        public int RMinvalue(Node root){
            if (root ==null) return int.MaxValue;
            int leftMin= RMinvalue(root.left);
            int rigtMin= RMinvalue(root.right);
            return Math.Min(root.data, Math.Min(leftMin,rigtMin));
        }


         public int RMaxvalue(Node root){
            if (root ==null) return int.MinValue;
            int leftMin= RMaxvalue(root.left);
            int rigtMin= RMaxvalue(root.right);
            return Math.Max(root.data, Math.Max(leftMin,rigtMin));
        }

        public int Maxvalue(Node root){
            Stack<Node> stack = new Stack<Node>();
            stack.Push(root);
            int Maxvalue = int.MinValue;
            while(stack.Count>0){
                Node current = stack.Pop();
                Maxvalue=Math.Max(Maxvalue,current.data);
                if (current.left!=null) stack.Push(current.left);
                if (current.right!=null) stack.Push(current.right);
            }

            return Maxvalue;
        }

        public int maxPathSum (Node root){
            if (root==null) return int.MinValue;
            if (root.left==null && root.right==null) return root.data;
            int maxChildPathSum= Math.Max(maxPathSum(root.left), maxPathSum(root.right));
            return root.data + maxChildPathSum;
        }


    }
}