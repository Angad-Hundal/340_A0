

public class Main {
    public static void main(String[] args) {


        Circle circle_example = new Circle(0,0,5);
        circle_example.print();

        circle_example.scale(2);
        circle_example.print();


        circle_example.xlate(2,7);
        circle_example.print();
    }
}