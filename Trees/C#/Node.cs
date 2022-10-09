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
                if (right==null){
                    right=new Node(value);
                }else{
                    right.insert(value);
                }
            }else{
                if (left==null){
                    left=new Node(value);
                }else{
                    left.insert(value);
                }
            }
        }

        
        
    }
}