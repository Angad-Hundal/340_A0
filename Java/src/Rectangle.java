


public class Rectangle extends Figure{

    Point lower_left;
    Point upper_right;

    Rectangle(Point lower_left_point, Point upper_right_point){
        lower_left = lower_left_point;
        upper_right = upper_right_point;
    }

    @Override
    public void print() {
        System.out.printf("Rectangle@ (%d,%d)*(%d,%d) \n", lower_left.x, lower_left.y, upper_right.x, upper_right.y);

    }

    @Override
    public void scale(int scale_factor) {

        int scaled_hor_length = Math.abs(upper_right.x- lower_left.x)*scale_factor;
        int scaled_ver_length = Math.abs(upper_right.y- lower_left.y)*scale_factor;

        upper_right.x = lower_left.x + scaled_hor_length;
        upper_right.y = lower_left.y + scaled_ver_length;
    }

    @Override
    public void xlate(int x_offset, int y_offset) {

        lower_left.x += x_offset;
        upper_right.x += x_offset;
        lower_left.y += y_offset;
        upper_right.y += y_offset;

    }
}
