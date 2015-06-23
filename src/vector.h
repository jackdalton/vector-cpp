#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <math.h>

using namespace std;

class Vector2 {
public:
    Vector2(double inx, double iny) {
        x = inx;
        y = iny;
    }
    double x;
    double y;
    double distanceTo(Vector2 pos) {
        return sqrt((pos.y - y) * (pos.y - y) + (pos.x - x) * (pos.x - x));
    }
};
class Vector3 {
public:
    Vector3(double inx, double iny, double inz) {
        x = inx;
        y = iny;
        z = inz;
    }
    double x;
    double y;
    double z;
    double distanceTo(Vector3 pos) {
        return sqrt((pos.y - y) * (pos.y - y) + (pos.x - x) * (pos.x - x) + (pos.z - z) * (pos.z - z));
    }
};
