#include <iostream>
#include "Vector3D.h"

int main()
{
    Vector3D a, b, c, d, f, e;

    a.Init(1, 2, 3);
    a.Display();
    b.Init(4, 5, 6);
    b.Display();

    c = c.Add(a, b);
    cout << "\nAdd(a + b): ";
    c.Display();

    d = d.Subtruct(a, b);
    cout << "\nSubtruct(a - b): ";
    d.Display();

    cout << "\nScalar(a and b): " << f.Scalar(a, b) << endl;

    e = e.Add(c, d);
    cout << "\nAdd(c + d): ";
    cout << e.toString();

    return 0;
}
