using System;

namespace C_
{
    class Program
    {
        static void Main(string[] args)
        {
            Node A= new Node('a');
            Node B= new Node('b');
            Node C= new Node('c');
            Node D= new Node('d');
            Node E= new Node('e');
            Node F= new Node('f');

            A.left=B;
            A.right=C;
            B.left=D;
            B.right=A;
            C.right=F;
        }
    }

    class Node{
        public Node left, right;
        char data;

        public Node (char data){
            this.data=data;
        }

        public void insert (char value){
            if (value<=data){
                if (left==null){
                    left= new Node(value);
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

        public void depthFirtsTraversal(Node root){
            if (root==null){
                
            }
        }
    }

    class NodeInt{
        NodeInt left, right;
        int data;
        public NodeInt(int data){
            this.data=data;
        }
        public void insert(int data){
            if (data<=this.data){
                if (this.right==null){
                    this.right=new NodeInt(data);
                }else{
                    this.right.insert(data);
                }
            }else{
                if(this.left==null){
                    this.left=new NodeInt(data);
                }else{
                    this.left.insert(data);
                }
            }
        }

        public bool contains(int data){
            if (this.data==data){
                return true;
            }else if (this.data<data){
                if (this.left==null){
                    return false;
                }else{
                    return this.left.contains(data);
                }
            }else{
                if (this.right==null){
                    return false;
                }else{
                    return this.right.contains(data);
                }
            }
        }

        public void prinOrder (){
            if (this.left!=null){
                left.prinOrder();
            }
            Console.WriteLine(data);
            if (this.right!=null){
                right.prinOrder();
            }
        }


    }
}
