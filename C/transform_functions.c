
#include <stdio.h>
#include "figure.h"

void scale(Figure *figure, int scale_factor) {
    switch (figure->type) {
        case CIRCLE:
            figure->circle.radius *= scale_factor;
            break;
        case RECTANGLE:
            figure->rectangle.upper_x = figure->rectangle.lower_x + (figure->rectangle.upper_x - figure->rectangle.lower_x) * scale_factor;
            figure->rectangle.upper_y = figure->rectangle.lower_y + (figure->rectangle.upper_y - figure->rectangle.lower_y) * scale_factor;
            break;
        case LINE:
            figure->line.line_length *= scale_factor;
            break;
    }
}

void xlate(Figure *figure, int x_offset, int y_offset) {
    switch (figure->type) {
        case CIRCLE:
            figure->circle.centre_x += x_offset;
            figure->circle.centre_y += y_offset;
            break;
        case RECTANGLE:
            figure->rectangle.lower_x += x_offset;
            figure->rectangle.lower_y += y_offset;
            figure->rectangle.upper_x += x_offset;
            figure->rectangle.upper_y += y_offset;
            break;
        case LINE:
            figure->line.start_x += x_offset;
            figure->line.start_y += y_offset;
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