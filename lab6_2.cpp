#include <iostream>
#include <cmath>   
#include <iomanip> 
using namespace std;

const double PI = 3.14159265358979323846;

double deg2rad(double deg) {
    return deg * (PI / 180.0);
}

double rad2deg(double rad) {
    return rad * (180.0 / PI);
}

double findXComponent(double length1, double length2, double rad1, double rad2) {
    return (length1 * cos(rad1)) + (length2 * cos(rad2));
}

double findYComponent(double length1, double length2, double rad1, double rad2) {
    return (length1 * sin(rad1)) + (length2 * sin(rad2));
}

double pythagoras(double XComponent, double YComponent) {
    return sqrt(XComponent * XComponent + YComponent * YComponent);
}

void showResult(double resultLength, double resultDirectionDeg) {
    
    
    
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << resultLength << "\n";
    cout << "Direction of the resultant vector (deg) = " << resultDirectionDeg << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);

    return 0;
}