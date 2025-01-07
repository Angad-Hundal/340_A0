

public class Main {
    public static void main(String[] args) {

        Point centre_point = new Point(0,0);
//        Circle circle_example = new Circle(centre_point,5);
//        circle_example.print();
//
//        circle_example.scale(2);
//        circle_example.print();
//
//
//        circle_example.xlate(2,7);
//        circle_example.print();
//
//
//        circle_example.scale(0);
//        circle_example.print();


        Point upper_right = new Point(3,7);
//        Rectangle rectangle_example_one = new Rectangle(centre_point, upper_right);
//        rectangle_example_one.print();
//
//
//        rectangle_example_one.scale(2);
//        rectangle_example_one.print();
//
//
//        rectangle_example_one.xlate(-5,4);
//        rectangle_example_one.print();


        Line line_example_one = new Line(centre_point, 45, 7);
        line_example_one.print();


        line_example_one.scale(3);
        line_example_one.print();

        line_example_one.xlate(7,9);
        line_example_one.print();


    }
}