public class Main {
    public static void main(String[] args) {

        Node node = new Node(10);
        node.insert(5);
        node.insert(15);
        node.insert(8);

        node.printOrder();
        System.out.println(node.contains(8));

    }
}