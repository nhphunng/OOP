class Point
{
    private:
        double x; 
        double y; 
    public: 
        Point();
        Point(double xx);
        Point(double xx, double yy);
        static Point input();
        void displayPoint();
        double calDistance(Point other);
};