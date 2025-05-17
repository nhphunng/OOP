class Point
{
    private:
        int x,y; 
    public: 
        Point();
        Point(double xx);
        Point(double xx, double yy);
        void input();
        void displayPoint();
        double calDistance( Point other);
};
class Rectangle
{
    private: 
        Point p[4];
    public:
        Rectangle();
        bool checkRegtangle();
        void displayRegtangle(); 
        double calParimeterRectangle();
        double calAreaRectangle();
};