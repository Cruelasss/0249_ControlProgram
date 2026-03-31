#include <iostream>
using namespace std;

float Rata_rata (float a, float b) {
    return (a + b ) / 2;

}

string status_lulus (float r ){
    if (r >= 60) {
        return "Lulus";
    } else {
        return "Gagal";
    }
}

int main () {
    float nilBI,nilMT,rerata;
    string status;

    cout << "Masukkan Nilai Bahasa Indonesia : ";
    cin >> nilBI;
    cout << "Masukkan Nilai Matematika : ";
    cin >> nilMT;
 
    //rerata = (nilBI + nilMT) / 2;
    //if (rerata >= 60) {
    //    status = "Lulus";
    //} else {
      //  status = "Gagal";
    //}

    rerata = Rata_rata(nilBI,nilMT);

   // status = status_lulus(rerata);

    cout << "Status Kelulusan : " <<status_lulus(rerata) <<" , dengan nilai rerata = "<<rerata<< endl;
}
