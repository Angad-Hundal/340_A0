


public class Line extends Figure{

    Point lower_left_vertex;
    int angle;
    int length;

    Line(Point start_point, int line_angle, int line_length){
        lower_left_vertex = start_point;
        angle=line_angle;
        length=line_length;
    }

    @Override
    public void print() {
        System.out.printf("Line@ (%d,%d) with angle %d° and length %d) \n", lower_left_vertex.x, lower_left_vertex.y, angle, length);

    }

    @Override
    public void scale(int scale_factor) {
        length = length*scale_factor;
    }

    @Override
    public void xlate(int x_offset, int y_offset) {
        lower_left_vertex.x += x_offset;
        lower_left_vertex.y += y_offset;
    }

}
