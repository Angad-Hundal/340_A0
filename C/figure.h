#ifndef FIGURES_H
#define FIGURES_H


typedef struct {
    int centre_x, centre_y; 
    int radius;
} Circle;


typedef struct {
    int lower_x, lower_y;  
    int upper_x, upper_y; 
} Rectangle;


typedef struct {
    int start_x, starty;  
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

#endif
