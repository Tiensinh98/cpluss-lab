//#include <iostream>
//#include <climits>
//using namespace std;
//int a = 3;
//int main()
//{
    //printf("sizeof(bool)=%3d\n\n", sizeof(bool));
    //printf("char:\n");
    //printf("sizeof(float)= %3d\n",sizeof(float));
    //printf("sizeof(double)= %3d\n",sizeof(double));
    //printf("sizeof(char)= %3d\n",sizeof(char));
    //printf("sizeof(int)= %3d\n",sizeof(int));
    //printf("sizeof(unsigned char)= %3d\n",sizeof(unsigned char));
    //printf("sizeof(short)= %3d\n",sizeof(short));
    //printf("sizeof(long)= %3d\n",sizeof(long));
    //printf("sizeof(long long)= %3d\n",sizeof(long long));
    //float a = 1.1;
    //if (a == 1.1) {
    //    printf("a is equal to 1.1\n");
    //}
    //else {
    //    printf("a is not equal to 1.1\n");
    //}
    //bool x = true;
    //bool y = 5;
    //bool z = 0;
    //printf("x=%s\n", x ? "true" : "false");
    //cout << boolalpha << "x(cout)= "<<x << endl;
    //cout << noboolalpha << "y(cout)= "<<y << endl;
    //cout << "y(cout)= "<<y << endl;
    //printf("y=%s\n", y ? "true" : "false");
    //printf("z=%s\n", z ? "true" : "false");
    //printf("y=%d\n", y);
    //printf("z=%d\n", z); //0 is false 1 is true
    /*cout << "Min of Int " << INT_MIN << endl;
    cout << "Max of Int " << INT_MAX << endl;
    cout << "Max of UnsignedInt " << UINT_MAX << endl;
    cout << "Max of Short " << USHRT_MAX << endl;
    cout << "Max of UChar " << UCHAR_MAX << endl;
    cout << "Max of Long " << ULLONG_MAX << endl;*/
    //int a = 2;
    //int i = 3;
    /*if (i > 0 || a>0) {
        a = 6;
    }*/
    /*cout << "kq" << a*::a << endl;*/
//    int b = a<<2;
//    a=2;
//    cout << "kq " <<b << endl;
//    system("pause");
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int main() {
    const char r[] = "sinh";
    enum sinh {deptrai=3, hocgioi=4, dabanhhay=5};
    sinh b = deptrai, c = hocgioi, d = dabanhhay;
    printf("b = %d\n ", deptrai);
    printf("c = %s\n ", r);
    printf("d = %.2f\n ", 10.9);
    double x=double(3 / 2);
    double y = (double)3 / 2;
    printf("x=%4.2g\n", x);
    printf("y=%4.2g\n", y);


    system("pause");
    return 0;
}
