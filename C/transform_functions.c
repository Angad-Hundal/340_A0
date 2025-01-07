
#include <stdio.h>
#include "figure.h"

void scale(Figure *figure, int factor) {
    switch (figure->type) {
        case CIRCLE:
            figure->circle.radius *= factor;
            break;
        case RECTANGLE:
            fig->rectangle.x2 = fig->rectangle.x1 + (fig->rectangle.x2 - fig->rectangle.x1) * factor;
            fig->rectangle.y2 = fig->rectangle.y1 + (fig->rectangle.y2 - fig->rectangle.y1) * factor;
            break;
        case LINE:
            figure->line.line_length *= factor;
            break;
    }
}