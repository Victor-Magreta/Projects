#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    private:
        float length;
        float width;
        
    public:
        //Overloaded constructor
        Rectangle(){
            length = 0;
            width = 0;
        }
        ~Rectangle();
        void setValues(float, float);
        float getLength();
        float getWidth();
        float getArea();
};
#endif 