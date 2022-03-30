#include<iostream>
#include<cmath>

struct Point
{
    int x;
    int y;
};

struct Rect
{
    Point bottomLeft;
    Point topRight;
};

int main()
{   
    Rect H1,H2;
    std::cin>>H1.bottomLeft.x>>H1.bottomLeft.y>>H1.topRight.x>>H1.topRight.y;
    std::cin>>H2.bottomLeft.x>>H2.bottomLeft.y>>H2.topRight.x>>H2.topRight.y;
    //Quy ??c ?i?m bottomleft hinh 1 th?p h?n ?i?m bottomleft hinh hai
    if(H1.bottomLeft.y>H2.bottomLeft.y)
    {
        Rect temp = H2;
        H2 = H1;
        H1 = temp;
    }
    int X,Y;
    if(H2.bottomLeft.x>H1.bottomLeft.x)
    {
        if(H2.topRight.y<H1.topRight.y)
    {
       if(H2.topRight.x<H1.topRight.x)
       {
           X = H1.topRight.x-H1.bottomLeft.x;
           Y = H1.topRight.y - H1.bottomLeft.y;
       }
       else
       {
           X = H2.topRight.x - H1.bottomLeft.x;
           Y = H1.topRight.y-H1.bottomLeft.y;
       }
    }
    else
    {
        if(H2.topRight.x<H1.topRight.x)
        {
            X = H1.topRight.x-H1.bottomLeft.x;
            Y = H2.topRight.y - H1.bottomLeft.y;
        }
        else
        {
            X  = H2.topRight.x - H1.bottomLeft.x;
            Y = H2.topRight.y - H1.bottomLeft.y;
        }
      }
    }
    else
    {
        if(H2.topRight.y<H1.topRight.y)
        {
            X = H1.topRight.x - H2.bottomLeft.x;
            Y = H1.topRight.y - H1.bottomLeft.y;
        }
        else
        {
            X = H1.topRight.x - H2.bottomLeft.x;
            Y = H2.topRight.y - H1.bottomLeft.y;
        }
    }
    if(X<Y) std::cout<<Y*Y;
    else std::cout<<X*X;
    return 0;
}


