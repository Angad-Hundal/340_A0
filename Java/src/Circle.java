

public class Circle extends Figure{

    Point centre;
    int radius;


    Circle(Point centre_point, int radius){
        this.centre = centre_point;
        this.radius = radius;
    }

    @Override
    public void print() {
        System.out.printf("Circle@ (%d,%d) with radius %d \n", centre.x, centre.y, radius);
    }

    @Override
    public void scale(int scale_factor) {
        this.radius = scale_factor*radius;
    }

    @Override
    public void xlate(int x_offset, int y_offset) {
        centre.x += x_offset;
        centre.y += y_offset;
    }

}
