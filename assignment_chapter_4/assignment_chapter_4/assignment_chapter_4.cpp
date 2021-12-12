//# include <iostream>
//using namespace std;
//
//int main()
//{
//	float num, average, sum = 0.0;
//	int i, n;
//
//	cout << "Maximum number of inputs: ";
//	cin >> n;
//
//	for (i = 1; i <= n; ++i)
//	{
//		cout << "Enter n" << i << ": ";
//		cin >> num;
//
//		if (num < 0.0)
//		{
//			 Control of the program move to jump:
//			goto jump;
//		}
//		sum += num;
//	}
//
//jump:
//	average = sum / (i - 1);
//	cout << "\nAverage = " << average;
//	return 0;
//}

//# include <iostream>
//using namespace std;
////int sum_tt(int a,int b) {
////	int sum;
////	sum = a + b;
////	return sum;
////}
////int main()
////{
////	int a = 2, b = 3,g;
////	g = sum_tt(a, b);
////	cout << g;
////}
//int main() {
//    int a[] = { 5,1,3,2,8,0 };
//    int N = 6;
//    for (int i = 1; i < N; ++i) { // O(N)
//        int X = a[i]; // X is the item to be inserted
//        int j = i - 1;
//        for (; j >= 0 && a[j] > X; --j) // can be fast or slow
//            a[j + 1] = a[j]; // make a place for X
//        a[j + 1] = X; // index j+1 is the insertion point
//        //cout << a[0];
//        //cout << a[1];
//        //cout << a[2];
//        //cout << a[3];
//        //cout << a[4];
//        //cout << a[5]<<endl;
//    }
//    
//}


/*----------------------------------------------------------------------------------------------*/
//#include <iostream> 
//using namespace std; 
//int main() 
//{ 
//    char upper_c[] = { 'A','B','C','D','E','F', 'G','H'};
//    char lowwer_c[] = { 'a','b','c','d','e','f', 'g','h'};
//    char number[] = { '0','1','2','3','4','5', '6','7','8','9' };
//    for (int i = 0; i < 5 ; i++) {
//        cout << "The ASCII value of " << upper_c[i] << " is " << int(upper_c[i])<<endl;
//        cout << "The ASCII value of " << lowwer_c[i] << " is " << int(lowwer_c[i])<<endl;
//    }
//    for (int i = 0; i <10; i++) {
//        cout << "The ASCII value of " << number[i] << " is " << int(number[i]) << endl;
//    }
//    
//    return 0; 
//} 
//#include <iostream>
//using namespace std;
//int main()
//{
//    unsigned long N;
//    unsigned long long Sum = 0;
//    cout << " Enter unsigned integer number N= ";
//    cin >> N;
//    while (int(N) <= 0 | cin.fail()==false) {
//        cout << "Entered-number is not unsigned integer number. Enter again!";
//        cin >> N;
//    }
//    for (int i = 1; i <= N; i++) {
//        Sum += i ^ 2;
//    }
//    cout <<"Sum of square number from 1 to "<<N<<" is: "<<Sum;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//    float N;
//    int previous =0;
//    int current =1;
//    int next;
//    cout << " Enter unsigned integer number N= ";
//    cin >> N;
//    while (N <= 0 || abs(N)>abs(int(N))) {
//        cout << "Entered-number is not unsigned integer number. Enter again!";
//        cin >> N;
//        }
//    for (int i = 1; i <= N; i++) {
//        next = current + previous;
//        previous = current;
//        current = next;
//    }
//    cout << "Fib(N) = " << current;
//    //cout << typeid(current).name() << endl;
//    return 0;
//}

//clude <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int factorial(int n)
//{
//    long i, gt = 1;
//    for (i = 1; i <= n; i++)
//        gt = gt * i;
//    return gt;
//}
//int main()
//{
//    double x;
//    cout << "Enter angle in degreee: ";
//    cin >> x;
//    double radi;
//    radi = x * 3.14 / 180;
//    double Sum = 0;
//    int N = 0;
//    double epsilon = 1e-10;
//    double temp;
//    temp = pow(-1, N) / factorial(2 * N + 1) * pow(radi, 2 * N + 1);
//    while (abs(temp) >= epsilon) {
//        Sum = Sum + temp;
//        N += 1;
//        temp = pow(-1, N) / factorial(2 * N + 1) * pow(radi, 2 * N + 1);
//    }
//    cout << "Sum = " <<setiosflags(ios::fixed) << setprecision(15) << Sum;
//    return 0;
//}

//#include <time.h>
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    double x, y;
//    long N;
//    int Sum;
//    double pi;
//    Sum = 0;
//    cout<<"Enter number of sample point N: "<<endl;
//    cin >> N;
//    srand((unsigned)time(NULL));
//    for (int i = 1; i <= N; i++) {
//        x = (double)rand() / RAND_MAX;
//        y = (double)rand() / RAND_MAX;
//        if ( pow(x,2) + pow(y,2) < 1) {
//            Sum += 1;
//        }
//    }
//    pi = (double)4 * Sum / N;
//    cout << "Pi = " << setiosflags(ios::fixed) << setprecision(15)<< pi << endl;
//    return 0;
//}


//#include <time.h>
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//#define FUNC(side_demension, demension) side_demension = (double)sqrt(2 - sqrt(4 - demension * demension));
//#define FUNC_1(Pi, side_demension, i) Pi = (double) side_demension * 6 * pow(2, i) / 2;
//using namespace std;
//int main()
//{
//    long Num_dividers;
//    double demension;
//    double side_demension = 1.0;
//    double Pi;
//    cout << "Enter number of dividers: " << endl;
//    cin >> Num_dividers;
//    for (int i = 0; i <= Num_dividers; i++) {
//        if (i>0) {
//            FUNC(side_demension, demension);
//        }
//        FUNC_1(Pi, side_demension, i);
//        cout << "The " << i << " time divided, is " << setiosflags(ios::fixed) << setprecision(0) << 6 * pow(2, i) << " edges triangle, PI = ";
//        cout<< setiosflags(ios::fixed) << setprecision(15) << Pi << endl;
//        demension = side_demension;
//    }
//    return 0;
//}


//#include <time.h>
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    double Pi = 2.0;
//    long N;
//    double mau = (double) sqrt(2);
//    cout << "Enter number of dividers: " << endl;
//    cin >> N;
//    for (int i = 0; i <= N; i++) {
//        Pi *= 2 / mau;
//        mau = (double) sqrt(2 + mau);
//    }
//    cout <<"Pi= "<< setiosflags(ios::fixed) << setprecision(15) << Pi << endl;
//    return 0;
//}


//#include <time.h>
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    double Pi = (double) 1 / 3 + 1;
//    long N;
//    double temp = (double) 1/3;
//    cout << "Enter number of dividers: " << endl;
//    cin >> N;
//    for (int i = 2; i <= N; i++) {
//        int delta = i + 1;
//        double temp_1 = (double)temp * i / (i + delta);
//        Pi += temp_1;
//        temp = temp_1;
//    }
//    cout <<"Pi= "<< setiosflags(ios::fixed) << setprecision(15) << 2 * Pi << endl;
//    return 0;
//}


//#include <time.h>
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    double Pi_div_2 = 1.0;
//    long N;
//    cout << "Enter number of dividers: " << endl;
//    cin >> N;
//    for (int i = 2; i <= N; i += 2) {
//        double temp = (double)pow(i, 2) / (pow(i, 2) - 1);
//        Pi_div_2 = (double)Pi_div_2 * temp;
//    }
//    cout << "Pi= " << setiosflags(ios::fixed) << setprecision(15) << 2 * Pi_div_2 << endl;
//    return 0;
//}


#include <time.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    bool status = true;
    while (status == true) {
        
    }

    //cout << "Pi= " << setiosflags(ios::fixed) << setprecision(15) << 2 * Pi_div_2 << endl;
    return 0;
}