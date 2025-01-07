

public class Main {
    public static void main(String[] args) {

        final int ORIGIN_X = 0;
        final int ORIGIN_Y = 0;

        Circle origin_circle = new Circle(new Point(ORIGIN_X,ORIGIN_Y), 1);
        Rectangle rectangle_example = new Rectangle(new Point(-3,2), new Point(-1,3));
        Line line_example = new Line(new Point(1,-2),45,1);

        Figure[] figures = {origin_circle, rectangle_example, line_example};


        for (Figure figure: figures){
            figure.xlate(2,3);
            figure.scale(2);
            figure.print();
        }


    }
}