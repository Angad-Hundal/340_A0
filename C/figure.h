#ifndef FIGURE_H
#define FIGURE_H


typedef struct {
    int centre_x, centre_y; 
    int radius;
} Circle;


typedef struct {
    int lower_x, lower_y;  
    int upper_x, upper_y; 
} Rectangle;


typedef struct {
    int start_x, start_y;  
    int line_angle; 
    int line_length; 
} Line;

typedef enum { CIRCLE, RECTANGLE, LINE } FigureType;


typedef struct {
    FigureType type;
    union {
        Circle circle;
        Rectangle rectangle;
        Line line;
    };
} Figure;


void scale(Figure *figure, int scale_factor);
void xlate(Figure *figure, int x_offset, int y_offset);
void print(Figure *figure);

#endif
