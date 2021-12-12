// Problem 3: tinh so nam thang ngay tu so ngay cho truoc
//#include <iostream>
//#define Cal(num_day,num_year,num_week,num_day_du) num_year=int(num_day/365), num_week=int((num_day-num_year*365)/7), num_day_du=num_day-num_year*365-num_week*7;
//using namespace std;
//void main()
//{
//    int num_day,num_year,num_week,num_day_du;
//    cout << "nhap so ngay: " << endl;
//    cin >> num_day;
//    Cal(num_day, num_year, num_week, num_day_du);
//    printf("%d days= %d years + %d weeks + %d days\n",num_day,num_year,num_week,num_day_du );
//    system("pause");
//}

//tinh goc cua tam giac 3 canh a b c
#include <iostream>
#include <math.h>
#define Pi 3.14159265358979323846;
using namespace std;
void main()
{
    double a,b,c,GocA,GocB,GocC;
    cout << "a= " << endl;
    cin >>a;
    cout << "b= " << endl;
    cin >> b;
    cout << "c= " << endl;
    cin >> c;
    GocA = acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / Pi;
    GocB = acos((a * a + c * c - b * b) / (2 * a * c)) * 180 / Pi;
    GocC = acos((b * b + a * a - c * c) / (2 * a * b)) * 180 / Pi;
    printf("Goc A = %.20f \n",GocA);
    printf("Goc B = %.20f \n",GocB);
    printf("Goc C = %.20f \n",GocC);
    system("pause");
}

