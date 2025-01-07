

public class Circle extends Figure{

    int centre_x;
    int centre_y;
    int radius;


    Circle(int x_coordinate, int y_coordinate, int radius){
        centre_x = x_coordinate;
        centre_y = y_coordinate;
        this.radius = radius;
    }

    @Override
    public void print() {
        System.out.printf("Circle@ (%d,%d) with radius %d \n", centre_x, centre_y, radius);
    }

    @Override
    public void scale(int scale_factor) {
        this.radius = scale_factor*radius;
    }

    @Override
    public void xlate(int x_offset, int y_offset) {
        centre_x += x_offset;
        centre_y += y_offset;
    }

}
