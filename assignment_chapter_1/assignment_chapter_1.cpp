// calculate factorial N
//#include <iostream>
//using namespace std;
//void main() {
//	int N, giai_thua;
//	cout << "Enter integer number N= ";
//	cin >> N;
//	giai_thua = 1;
//	for (int i = 1; i <= N; i=i+1)
//	{
//		giai_thua = giai_thua * i;
//	}
//	printf("%d!= %d", N,giai_thua);
//	//cout << "N!= "<< giai_thua <<endl;
//	system("pause");
//}


// check if 3 parameters is 3 dimensions of a rectangle

//#include <iostream>
//using namespace std;
//void main() {
//	float a,b,c;
//	cout << "a= ";
//	cin >> a;
//	cout << "b= ";
//	cin >> b;
//	cout << "c= ";
//	cin >> c;
//	if (a * a + b * b == c * c or c * c + a * a == b * b)
//	{
//		cout << "tam giac vuong";
//	}
//	else if (b * b + c * c == a * a)
//	{
//		cout << "tam giac vuong co canh huyen a"<<endl;
//	}
//
//	else
//		cout << "tam giac khong vuong"<<endl;
//	system("pause");
//}

//#include <iostream>
//using namespace std;
//void main() {
//	float a, b, c;
//	cout << "a= ";
//	cin >> a;
//	cout << "b= ";
//	cin >> b;
//	cout << "c= ";
//	cin >> c;
//	if (a * a + b * b == c * c or c * c + a * a == b * b)
//	{
//		cout << "tam giac vuong";
//	}
//	else if (b * b + c * c == a * a)
//	{
//		cout << "tam giac vuong co canh huyen a" << endl;
//	}
//
//	else
//		cout << "tam giac khong vuong" << endl;
//	system("pause");
//}
// tim uoc chung lon nhat cua 2 so

//#include <iostream>
//using namespace std;
//void main() {
//	int a, b,max;
//	cout << "a= ";
//	cin >> a;
//	cout << "b= ";
//	cin >> b;
//	for (int i = 1; i <= min(a, b); ++i) {
//		if (a % i == 0 and b % i == 0) {
//			max = i;
//		}
//	}
//	printf("uoc chung lon nhat la cua %d va %d la %d\n: ", a, b, max);
//	system("pause");
//}

//tim boi chung nho nhat cua 2 so a b
#include <iostream>
using namespace std;
void main() {
	int a, b, bc_min;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	for (int i = a * b; i >= max(a, b); --i) {
		if (i %a == 0 and i % b == 0) {
			bc_min = i;
		}
	}
	printf("boi chung nho nhat la cua %d va %d la %d\n: ", a, b, bc_min);
	system("pause");
}