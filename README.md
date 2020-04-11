# COSC1430_Exercise4
Polymorphism - Abstract Class

Define an abstract class Figure that contains

    -A private variable center that is an object of Point
    -A constructor with two parameters with default values that can be used to initialize the x and y coordinates of the center
    -An accessor, Point location(), that returns the object center
    -A mutator, void move(Point), that sets the new center. This function will call a draw() function described next
    -A pure virtual function, void draw()
    -A pure virtual function, void rotate(double)
    
Define a concrete class Circle that is a descendant of Figure (using public inheritance) that contains

    -A private variable, double radius
    -A constructor that takes three parameters (double, double, double) as input, where the first two correspond to the x and y coordinates of the center and the third parameter sets the radius of the circle. This constructor should call the Figure constructor to properly initialize the center object.
    
    -A draw() function that outputs the following information of the circle object:
        
        A circle with center (<center_x>, <center_y>)
        and radius <radius_of_the_circle>
        
        #You can use the following example to implement the draw() function here

        cout << "A circle with center ";
        // call the print function of the Point class to print out the coordinates of the center here!!!
        cout << " and radius " << radius << endl;
        
    -A rotation(double) function that outputs the following
    
        no effects.
        
Define a concrete class Square that is a descendant of Figure (using public inheritance) that contains

    -Two private variables of double type, side and angle
    -A constructor that takes four parameters (double, double, double, double) as input, where the first two correspond to the x and y coordinates of the center and the third and fourth parameters set the size of the square and the angle of rotation, respectively. This constructor should call the Figure constructor to properly initialize the center object.
    -A function, named void vertices(), that computes the coordinates of its four corners and outputs the following:
    
        The vertices of the square are: 
        (upper_left_x, upper_left_y)  (upper_right_x, upper_right_y)
        (lower_left_x, lower_left_y)  (lower_right_x, lower_right_y)

        The following shows how to compute the coordinates of the lower left corner:

        lower_left_x = center.x - side/2;
        lower_left_y = center.y - side/2;
        
        You can derive the other three corners similarly.

    -A draw() function that outputs the following:
        
        A square with center (<center_x>, <center_y>)
        and side length <side>
        The angle between one side and the X-axis is <angle>
        
    -A rotate(double a) function that updates the angle information based on the input value (i.e., angle = angle + a) and outputs the following

        The angle between one side and the X-axis is <angle>
