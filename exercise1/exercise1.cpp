#include <iostream>
using namespace std;

double rerata(double a, double b)
{
    return (a + b)/2;
}
string status(double m)
{
    if (m > 60)
        return "lulus";
    else
        return "gagal";
}
string status2(double rata2, double mtk) {
    if (rata2 >= 70 && mtk > 80) {
        return "diterima";
    }
    else {
        return "tidak diterima";
    }
}

int main()
{
    double nilM, nilB;

    cout << "masukkan nilai mtk : ";
    cin >> nilM;
    cout << "masukkan niali bahasa inggris : ";
    cin >> nilB;
    // rerata = (nilM + nilB) / 2;
        // rata = rerata(nilM,nilai B);
        // st = status(rata);
        // st = status(rerata(nilM,nilB));
    cout << "status kelulusannya" << status(rerata(nilM, nilB));
    cout << "status kelulusannya 2" << status2(rerata(nilM, nilB), nilM);
        int main();
        string nama[20] = { "Asroni","Lia","Joko","Dian","Fahri","Budi","Eko","Dodo","Indra","Joni","Kris","Ana","Rudi","Satria","Kiki","Reza","Riska","Salsa","Nur","Bila" };
        int rata_rata[20] = { 80,75,60,90,85,55,85,75,55,95,80,45,90,85,40,80,70,60,90,95 };
        int mtk[20] = { 90,80,75,80,65,75,70,90,55,60,90,85,80,75,80,85,90,95,65,60 };
       
        int main(){
        display(nama, rerata, mtk);
        return 0;
    }