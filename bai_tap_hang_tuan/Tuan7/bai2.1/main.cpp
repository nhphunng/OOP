#include "rectangle.h"
#include "square.h"

int main()
{
    Rectangle *rec = new Rectangle(2, 3);
    Rectangle *sq = new Square(2);

    rec->display();
    sq->display();
    return 0; 
}