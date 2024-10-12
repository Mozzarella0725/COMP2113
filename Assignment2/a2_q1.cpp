#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14;

double circle_area(double r){
    return (PI * r * r);
}

double circle_perimeter(double r){
    return (2 * PI * r);
}

double rectangle_area(double w, double h){
    return (w * h);
}

double rectangle_perimeter(double w, double h){
    return (2 * (w + h));
}

int main(){

    int num;
    char type;
    double r, w, h;
    double area, perimeter, total_area = 0, total_perimeter = 0;

    cout << fixed << setprecision(2);
    cin >> num;

    for (int i = 0; i < num; i++) {

        if (!(cin >> type)) {
        break;
        }

        if (type == 'C') {
            cin >> r;
            area = circle_area(r);
            perimeter = circle_perimeter(r);
        } 
        else if (type == 'R'){
            cin >> w >> h;
            area = rectangle_area(w, h);
            perimeter = rectangle_perimeter(w, h);
        }

        total_area += area;
        total_perimeter += perimeter;

        cout << area << endl;
        cout << perimeter << endl;
    }

    cout << total_area << endl;
    cout << total_perimeter << endl;
    
    return 0;
}