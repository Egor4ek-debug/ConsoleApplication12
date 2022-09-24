#include <iostream>
using namespace std;

int main()
{
    //int R,x,x0 = 0,y,y0 = 0 ;
    //cout << "Enter the radius of the circle \n";
    //cin >> R;
    //cout << "Enter the X \n";
    //cin >> x;
    //cout << "Enter the Y \n";
    //cin >> y; 

    //if (pow(x - x0, 2) + pow(y - y0, 2) <= pow(R, 2) ){
    //    cout << "The point lies inside";
    //}
    //else
    //{
    //    cout<<"The point does not lie inside";
    //}

    double x1,y1, x2,y2, x3,y3, tx, ty;
    cout << "Enter the vertices of the triangle \n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        cout << "Enter the vertices of the point \n";
        cin >> tx >> ty;
        if ((tx-x1)*(y1-y2)-(ty-y1)*(x1-x2)>=0 &&
            ((tx - x2) * (y2 - y3) - (ty - y2) * (x2 - x3) >= 0) &&
            ((tx - x3) * (y3 - y1) - (ty - y3) * (x3 - x1) >= 0) ||
            (tx - x1) * (y1 - y2) - (ty - y1) * (x1 - x2) <= 0 &&
            ((tx - x2) * (y2 - y3) - (ty - y2) * (x2 - x3) <= 0) &&
            ((tx - x3) * (y3 - y1) - (ty - y3) * (x3 - x1) <= 0))
        {
            cout << "The point lie inside";
        }
        else
        {
            cout << "The point does not lie inside";
        }
    return 0;
}
