#include "Rectangle.h"

Rectangle::Rectangle() : length(0.0f), width(0.0f) {}

Rectangle::~Rectangle() {}

void Rectangle::setLength(float len) {
    length = len;
}

float Rectangle::getLength() const {
    return length;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getWidth() const {
    return width;
}

float Rectangle::calculateArea() const {
    return length * width;
}