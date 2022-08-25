using System;

namespace main
{
    class Program
    {

        static void Diplay (MyArray arr){
            Console.WriteLine("Elements ar: ");
            for(int i=0; i<arr.length; i++){
                Console.WriteLine(arr.A[i]);
            }
        }

        static void swap(int x, int y){
            int temp;
            temp=x;
            x=y;
            y=temp;
        }


        static void Rearrange(MyArray arr){
            int i,j;
            i=0;
            j=arr.length-1;
            while(i<j){
                while(arr.A[i]<0)i++;
                while(arr.A[i]>=0)j--;
                if (i<j) swap(arr.A[i],arr.A[j]);
            }
        }

        static void Main(string[] args)
        {
            MyArray arr = new MyArray();
            arr.A= new int [] {2,-3,25,10,-15,-7};
            arr.size=10;
            arr.length=5;
            //Rearrange(arr);
            Console.WriteLine("Hello World!");
        }
    }


    public struct MyArray {
        public int [] A;
        public int size;
        public int length;
    }
}
