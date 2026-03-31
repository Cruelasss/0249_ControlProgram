#include <iostream>
using namespace std;

float Rata_rata (float a, float b) {
    return (a + b ) / 2;

}

string status (float r ){
    if (r >= 60) {
        return "Lulus";
    } else {
        return "Gagal";
    }
}
