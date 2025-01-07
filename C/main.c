#include <stdio.h>
#include "figure.h"
#include "transform_functions.c"

int main() {
    Figure figures[3];

    figures[0].type = CIRCLE;
    figures[0].circle.centre_x = 0;
    figures[0].circle.centre_y = 0;
    figures[0].circle.radius = 1;

    figures[1].type = RECTANGLE;
    figures[1].rectangle.lower_x = -3;
    figures[1].rectangle.lower_y = 2;
    figures[1].rectangle.upper_x = -1;
    figures[1].rectangle.upper_y = 3;

    figures[2].type = LINE;
    figures[2].line.start_x = 1;
    figures[2].line.start_y = -2;
    figures[2].line.line_angle = 45;
    figures[2].line.line_length = 1;

    for (int i = 0; i < 3; i++) {
        xlate(&figures[i], 2, 3); 
        scale(&figures[i], 2);    
    }

    for (int i = 0; i < 3; i++) {
        print(&figures[i]);
    }

    return 0;
}
