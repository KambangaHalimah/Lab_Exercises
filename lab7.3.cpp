#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // Default constructor
    ~Rectangle(); // Destructor (empty for now)

    // Accessor methods
    void setLength(float len);
    float getLength() const;

    void setWidth(float w);
    float getWidth() const;

    // Area calculation method
    float calculateArea() const;
};

#endif