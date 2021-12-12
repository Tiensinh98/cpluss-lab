// problem 1: determine an artinary point is inside or outside a circle
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main() {
//	float Ox, Oy, R;
//	printf("Enter Radius of circle R= \n");
//	scanf_s("%f", &R);
//	printf("Enter coordinate of Origin Ox= \n");
//	scanf_s("%f", &Ox);
//	printf("Enter coordinate of Origin Oy= \n");
//	scanf_s("%f", &Oy);
//	if (R < 0) {
//		printf("Invalid value of radius");
//	return 0;
//	}
//	else {
//		float d, Ax, Ay;
//		printf("Enter coordinate of Origin Ax= \n");
//		scanf_s("%f", &Ax);
//		printf("Enter coordinate of Origin Ay= \n");
//		scanf_s("%f", &Ay);
//		d = sqrt((Ax - Ox)* (Ax - Ox) + (Ay - Oy)* (Ay - Oy));
//		if (d < R) {
//			printf("A is inside the circle\n");
//		}
//		if (d == R) {
//			printf("A is on the circle\n");
//		}
//		else {
//			printf("a is outside the circle\n");
//		}
//	}
//	system("pause");
//	return 0;
//}


// problem 2
//#include <iostream>
//using namespace std;
//int main() {
//	int year,tc,dc;
//	string thiencandiachi;
//	cout << "enter year: ";
//	cin >> year;
//	tc = year % 10;
//	dc = year % 12;
//	const char* thiencan[] = { "Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky" };
//	const char* diachi[] = { "Than","Dau","Tuat","Hoi","Ty","Suu","Dan","Mao","Thin","Ty","Ngo","Mui" };
//	thiencandiachi = string(thiencan[tc])+string(" ")+string(diachi[dc]);
//	cout << "Thien can cua nam " << year << " la: " << thiencandiachi <<endl;
//	system("pause");
//	return 0;
	//approach 2:
	/*int year;
	string thiencandiachi;
	cout << "enter year: ";*/
	//cin >> year;
	/*enum thiencan {canh=0,tan,nham,quy};
	enum diachi {than=0,dau,tuat,hoi,ty,suu};
	enum thiencan tc;
	enum diachi dc;
	scanf("%d", &tc);
	scanf("%d", &dc);
	switch (tc)
	{
	case canh: thiencandiachi = "canh"; break;
	case tan:  thiencandiachi = "dia"; break;
	case nham:  thiencandiachi = "nham"; break;
	case quy:  thiencandiachi = "quy"; break;
	default:
		break;
	}*/
	/*switch (dc)
	{
	case than: thiencandiachi = "than"; break;
	case dau:  thiencandiachi = "dau"; break;
	case tuat:  thiencandiachi = "tuat"; break;
	case hoi:  thiencandiachi = "hoi"; break;
	case ty:  thiencandiachi = "ty"; break;
	case suu:  thiencandiachi = "suu"; break;
	default:
		break;
	}*/
	//system("pause");
	
//}


//Problem 3 
//#include <iostream>
//#define EPSINLON 1.0E-4
//using namespace std;
//int main() {
//	double a, b, c;
//	int a_minus_b, b_minus_c, c_minus_a, bsq_add_csq, asq_add_bsq, csq_add_asq;
//	cout << "enter three dimention of triagle:" << endl;
//	cout << "a= "; cin >> a;
//	cout << "b= "; cin >> b;
//	cout << "c= "; cin >> c;
//	a_minus_b = int(abs(a - b) < EPSINLON);
//	b_minus_c = int(abs(b - c) < EPSINLON);
//	c_minus_a = int(abs(c - a) < EPSINLON);
//	asq_add_bsq = int(abs(a * a + b * b - c * c) < EPSINLON);
//	bsq_add_csq = int(abs(c * c + b * b - a * a) < EPSINLON);
//	csq_add_asq = int(abs(c * c + a * a - b * b) < EPSINLON);
//	int list_cond[3] = { a_minus_b,b_minus_c,c_minus_a };
//	int list_cond_1[3] = { c_minus_a,a_minus_b,b_minus_c, };
//	int sqare[3] = { asq_add_bsq ,bsq_add_csq,csq_add_asq };
//	const char* Angle[3] = { "A","B","C" };
//	if (a + b > c or a + c > b or c + b > a) {
//		for (int i = 0; i <3; i++) {
//			if (list_cond[i] == 1) {
//				if (list_cond_1[i] == 1) {
//					cout << "tam giac deu" << endl;
//					return 0;
//				}
//				else
//					if (sqare[i] == 1) {
//						cout << "tam giac vuong can tai " << Angle[i] << endl;
//						return 0;
//					}
//					else {
//						cout << "tam giac can tai " << Angle[i] << endl;
//						return 0;
//					}
//			}
//			else {
//				if (sqare[i] == 1) {
//					cout << "tam giac vuong tai " << Angle[i] << endl;
//					return 0;
//				}
//				else
//					if (i==2)
//						cout << "tam giac thuong"<< endl;
//					else {
//						continue;
//					}
//			}
//		}
//	}
//	else {
//		cout << a << b << c << "is not the 3 dimensions of a triagle"<< endl;
//	}
//	system("pause");
//	return 0;
//}

//Problem 
 //stringstreams
//#include <iostream> 
//#include <sstream> 
//#include <stdio.h> 
//#include <string.h> 
//
//using namespace std;
//
//int main()
//{
//	string mystr;
//	float price = 0;
//	int quantity = 0;
//
//	cout << "enter price: ";
//	getline(cin, mystr);
//	stringstream(mystr) >> price;
//	cout << "enter quantity: ";
//	getline(cin, mystr);
//	stringstream(mystr) >> quantity;
//	cout << "total price: " << price * quantity << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class MyClass {       // The class
//public:             // Access specifier
//	int myNum;        // Attribute (int variable)
//	int myNum1;
//	string myString;  // Attribute (string variable)
//};
//
//int main() {
//	MyClass myObj;  // Create an object of MyClass
//
//	// Access attributes and set values
//	myObj.myNum = 15;
//	myObj.myNum1 = myObj.myNum*2;
//	myObj.myString = "Some text";
//
//	// Print values
//	cout << myObj.myNum << "\n";
//	cout << myObj.myNum1 << "\n";
//	cout << myObj.myString;
//	cout << myObj::func
//	return 0;
//}
//int func() {
//	int a;
//	MyClass myObj;
//	a = myObj.myNum * 2;
//	return a;
//}


//Problem 4
 //stringstreams
//#include <iostream> 
//#include <sstream> 
//#include <stdio.h> 
//#include <string.h> 
//#include <sstream>
//using namespace std;
//
//int main()
//{
//	string ntn;
//	int dvalue,mvalue,yvalue;
//	int date, month, year, year_end;
//	const char* day1[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
//	bool namnhuan;
//	cout << "enter date/month/year:\n";
//	getline(cin, ntn);
//	stringstream(ntn.substr(0,2)) >> date;
//	stringstream(ntn.substr(3,5)) >> month;
//	stringstream(ntn.substr(6,10)) >> year;
//	stringstream(ntn.substr(8,10)) >> year_end;
//
//	if (year % 4 == 0 && year_end != 0 || year_end == 0 and year % 400 == 0) {
//		namnhuan = true;
//	}
//	else
//	{
//		namnhuan = false;
//	}
//
//	if (year >= 1900 && year <= 1999 || year >= 2300 && year<=2399)  {
//		yvalue = 0;
//
//	}
//	if (year >= 1800 && year <= 1899 || year >= 2200 && year <= 2299 || year >= 2600 && year <= 2699) {
//		yvalue = 2;
//	
//
//	}
//	if (year >= 1700 && year <= 1799 || year >= 2100 && year <= 2199 || year >= 2500 && year <= 2599) {
//		yvalue = 4;
//	}
//	if (year >= 2000 && year <= 2099 || year >= 2400 && year <= 2499) {
//		yvalue = 6;
//	}
//	if (month == 3 || month == 11) {
//		mvalue = 3;
//	}
//	if (month == 9 || month == 12) {
//		mvalue = 5;
//	}
//	if (month == 10) {
//		mvalue = 0;
//	}
//	if (month == 8) {
//		mvalue = 2;
//	}
//	if (month == 5) {
//		mvalue = 1;
//	}
//	if (month == 7 || month ==4) {
//		mvalue = 6;
//	}
//	if (month == 6) {
//		mvalue = 4;
//	}
//	if (month == 2) {
//		if (namnhuan = true) {
//			mvalue = 2;
//		}
//		else {
//			mvalue = 3;
//		}
//	}
//	if (month == 1) {
//		if (namnhuan =true) {
//			mvalue = 6;
//		}
//		else {
//			mvalue = 0;
//		}
//	}
//	dvalue = (yvalue + year_end + int(year_end / 4) + mvalue+date) % 7;
//	cout << ntn << " is " << day1[dvalue]<<"\n";
//	return 0;
//}

//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int main() {
//	int num;
//	cout << "Enter number of player: ";
//	cin >>num;
//	enum list_U23VN { BUI_TIEN_DUNG = 1, DOAN_VAN_HAU = 2, NGUYEN_CONG_PHUONG = 3, NGUYEN_QUANG_HAI = 4 };
//	switch (num)
//	{
//	case BUI_TIEN_DUNG: cout << "Date of birth: 29/12/1997, Position: Goalkeeper, Hometown: Thanh Hoa\n"; break;
//	case DOAN_VAN_HAU: cout << "Date of birth: 24/02/1997, Position: Defender, Hometown: Thai Binh\n"; break;
//	case NGUYEN_CONG_PHUONG: cout << "Date of birth: 23/01/1997, Position: Attacker, Hometown: Nghe An\n"; break;
//	case NGUYEN_QUANG_HAI: cout << "Date of birth: 12/04/1997, Position: Mid-fielder, Hometown: Ha Noi\n"; break;
//	default:
//		cout << "No player with this num in list\n";
//		break;
//	}
//	return 0;
//}

//#include <iostream> 
//#include <sstream> 
//#include <stdio.h> 
//#include <string.h> 
//#include <sstream>
//using namespace std;
//
//int main() {
//	string op,opt;
//	int first_value=1, last_value=2;
//	//getline(cin, opt);
//	int a;
//	cin >> a;
//	/*stringstream(opt.substr(2, 3)) >> op;
//	stringstream(opt.substr(0,2)) >> first_value;
//	stringstream(opt.substr(3,5)) >> last_value;*/
//	enum operators {ADD=1,MINUS=2,MULTIPLE=3,DIVIDE=4};
//	switch (a)
//	{
//	case ADD: cout << "Sum: " << first_value + last_value << "\n";
//	case MINUS: cout << "Sum: " << first_value - last_value << "\n";
//	case MULTIPLE: cout << "Sum: " << first_value * last_value << "\n";
//	case DIVIDE: cout << "Sum: " << first_value / last_value << "\n";
//	default:
//		break;
//	}
//	return 0;
//}

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main()
{
	//std::string s = "2030+23+40";
	/*std::string delim = "+";

	auto start = 0U;
	auto end = s.find(delim);
	while (end != std::string::npos)
	{
		std::cout << s.substr(start, end - start) << std::endl;
		start = end + delim.length();
		end = s.find(delim, start);
		std::cout << s.substr(start, end) << "\n";
	}*/

	std::string s = "19/12/2020";
	std::string delimiter = "/";
	size_t pos = 0;
	std::string token;
	int i = 0;
	while ((pos = s.find(delimiter)) != std::string::npos) {
		token = s.substr(0, pos);
		//std::cout << token << std::endl;
		s.erase(0, pos + delimiter.length());
		//std::cout <<s << std::endl;
		int arr[2] = {};
		arr[i] = atoi(token.c_str());
		i = i + 1;

		std::cout << "arrray=" << arr;
	}
}

