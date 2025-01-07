
#include <stdio.h>
#include "figure.h"

void scale(Figure *figure, int factor) {
    switch (figure->type) {
        case CIRCLE:
            figure->circle.radius *= factor;
            break;
        case RECTANGLE:
            figure->rectangle.upper_x = figure->rectangle.lower_x + (figure->rectangle.upper_x - figure->rectangle.lower_x) * factor;
            figure->rectangle.upper_y = figure->rectangle.lower_y + (figure->rectangle.upper_y - figure->rectangle.lower_y) * factor;
            break;
        case LINE:
            figure->line.line_length *= factor;
            break;
    }
}

void xlate(Figure *figure, int dx, int dy) {
    switch (figure->type) {
        case CIRCLE:
            figure->circle.centre_x += dx;
            figure->circle.centre_y += dy;
            break;
        case RECTANGLE:
            figure->rectangle.lower_x += dx;
            figure->rectangle.lower_y += dy;
            figure->rectangle.upper_x += dx;
            figure->rectangle.upper_y += dy;
            break;
        case LINE:
            figure->line.start_x += dx;
            figure->line.start_y += dy;
            break;
    }
}


void print(Figure *figure) {
    switch (figure->type) {
        case CIRCLE:
            printf("Circle@ (%d, %d) with radius %d\n", figure->circle.centre_x, figure->circle.centre_y, figure->circle.radius);
            break;
        case RECTANGLE:
            printf("Rectangle@ (%d, %d)*(%d, %d)\n", figure->rectangle.lower_x, figure->rectangle.lower_y, figure->rectangle.upper_x, figure->rectangle.upper_y);
            break;
        case LINE:
            printf("Line@ (%d, %d) with angle %d and length %d\n", figure->line.start_x, figure->line.start_y, figure->line.line_angle, figure->line.line_length);
            break;
    }
}