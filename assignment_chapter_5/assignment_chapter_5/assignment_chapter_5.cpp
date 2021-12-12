//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int c[6] = { 10, 20, 30, 40, 50, 60 };
//	int id = 0;
//	/*write to element*/
//	c[3] = 99;
//	c[id + 1] = 100;
//	/*read and print element*/
//	*(c + 3) = 99;
//	*(&c[0] + (id + 1)) = 100;
//	/*read and print element*/
//	printf("c[%1d] = %3d\n", 3, *(c + 3));
//	printf("c[%1d] = %3d\n", id + 1, *(c + (id + 1)));
//	printf("c[%1d] = %3d\n", 3, c[3]);
//	printf("c[%1d] = %3d\n", id + 1, c[id + 1]);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_SIZE 100
//
//int main() {
//	int arr[MAX_SIZE];
//	int cur_size = 5; //use 5 items only
//	/*Initialize array*/
//	for (int i = 0; i < cur_size; i++) {
//		arr[i] = i * i;
//	}
//	/*Print array*/
//	for (int i = 0; i < cur_size; i++) {
//		printf("%3d", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Student {
//	char id[5];
//	char name[50];
//	float gpa;
//}; Student;
//
//int main() {
//	Student s1;
//	Student s2 = { "001", "Nguyen Van An"};
//	Student s3 = { "001", "Nguyen Van An", 4.6f};
//	printf("ID: \t %-50s\n", s3.id);
//	printf("NAME: \t %-50s\n", s3.name);
//	printf("GPA: \t %-4.2f\n", s3.gpa);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define NUM_STUDENT 5
//
//typedef struct Student {
//	char student_id[5];
//	char student_name[50];
//	float math , english, physics;
//}; Student;
//
//int main() {
//	Student list[NUM_STUDENT];
//	time_t t;
//	srand((unsigned)time(&t));
//	for (int i = 0; i < NUM_STUDENT; i++) {
//		list[i].math = ((float)rand() / RAND_MAX) * 10;
//		list[i].physics = ((float)rand() / RAND_MAX) * 10;
//		list[i].english = ((float)rand() / RAND_MAX) * 10;
//	}
//	float gpa_max = -1.0f;
//	float gpa_min = 11.0f;
//	float gpa;
//	for (int i = 0; i < NUM_STUDENT; i++) {
//		gpa = (list[i].math + list[i].english + list[i].physics) / 3;
//		if (gpa_max < gpa) gpa_max = gpa;
//		if (gpa_min > gpa) gpa_min = gpa;
//	}
//	/*Print scoreboard, max gpa, and min gpa*/
//	printf("|%8s|%8s|%8s|%8s|\n",
//		"MATH",
//		"ENGLISH",
//		"PHYSICS",
//		"GPA");
//	printf("|-----------------------------------|\n");
//	for (int i = 0; i < NUM_STUDENT; i++) {
//		gpa = (list[i].math + list[i].english + list[i].physics) / 3;
//		printf("|%8.1f|%8.1f|%8.1f|%8.1f|\n",
//			list[i].math,
//			list[i].english,
//			list[i].physics,
//			gpa);
//	}
//	printf("%-20s%4.1f\n", "MAX GPA:", gpa_max);
//	printf("%-20s%4.1f\n", "MIN GPA:", gpa_min);
//}



//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	const int ROWS = 3, COLS = 4;
//	int a[ROWS][COLS];
//	int row, col;
//	/*Initialize array*/
//	for (row = 0; row < ROWS; row++) {
//		for (col = 0; col < COLS; col++) {
//			a[row][col] = (row + 1) * (col + 1);
//		}
//	}
//	/*Print array*/
//	for (row = 0; row < ROWS; row++) {
//		for (col = 0; col < COLS; col++) {
//			printf("%3d", a[row][col]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int main() {
//    const int max_len = 50;
//    char str[max_len], ch = '\0';
//    int i = 0;
//    printf("Enter a string, %d chars max:", max_len);
//    while (ch != '\n') {
//        ch = getchar();
//        str[i] = ch;
//        i++;
//    }
//    str[i] = '\0'; //ending string
//    printf("line: %4d", strlen(str));
//    return 0;
//}


/*--------------------------------------------------------------------------------------------------------*/

// problem 1:
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <string>
//#define MAX_LEN 100
//
//struct Computer {
//	std::string name;
//	float resolution[2];
//};
//
//struct Subject {
//	std::string name;
//	float GPA;
//};
//
//int main() {
//	Computer computer_arr[MAX_LEN];
//	Subject subject_arr[MAX_LEN];
//	for (int i = 0; i < MAX_LEN; i++) {
//		Computer computer = {"HP " + std::to_string(i), {i * 1080, i * 792} };
//		computer_arr[i] = computer;
//		Subject subject = { "math", 7.82 * i / MAX_LEN };
//		subject_arr[i] = subject;
//	}
//	Computer* pc = nullptr;
//	for (pc = computer_arr; pc < computer_arr + MAX_LEN; pc++) {
//		//printf("Computer name: %-10s \t Computers resolution: (%-4.2f, %-4.2f)\n", computer_arr[i].name, computer_arr[i].resolution[0], computer_arr[i].resolution[1]);
//		std::cout << "Computer name: " << pc->name << "\t" << "resolution: (" << pc->resolution[0] << "," << pc->resolution[1] <<")" <<std::endl;
//	}
//
//}



// problem 2
//#include <iostream>
//#include <string>
//using namespace std;
//#define MAX_DIMENSION  50
//#define PI  3.14
//#define DEG  180
//
//struct Vector {
//	float value[MAX_DIMENSION];
//	int dimension;
//};
//
//int main() {
//	string str;
//	cout << "Enter data: " << endl;
//	cin >> str;
//	getline(cin, str);
//	cout << str;
//}

// test

//#include<iostream>
//#include<string>
//#include<vector>
//
//
//struct People
//{	
//	People(int d, std::string nme, float ag, float ht, std::string sx)
//	{
//		id = d;
//		name = nme;
//		age = ag;
//		height = ht;
//		sex = sx;
//		skinColor = "Yellow";
//	}
//
//	int id;
//	std::string name;
//	float age;
//	float height;
//	std::string sex;
//	std::string skinColor;
//
//	virtual std::string getSkinColor()
//	{
//		return skinColor;
//	}
//
//	virtual void setSkinColor(std::string color)
//	{
//		skinColor = color;
//	}
//
//};
//
//
//struct EuropeanPeople : public People
//{
//	EuropeanPeople(int d, std::string nme, float ag, float ht, std::string sx)
//		:People(d, nme, ag, ht, sx)
//	{
//		setSkinColor("White");
//	}
//};
//
//
//struct AfricanPeople : public People
//{
//	AfricanPeople(int d, std::string nme, float ag, float ht, std::string sx)
//		:People(d, nme, ag, ht, sx)
//	{
//		setSkinColor("Black");
//	}
//};
//
//
//int factorials(int n)
//{
//	int result = 1;
//	for (int i =n; i>0; i--)
//	{
//		result *= i;
//	}
//	return result;
//}
//
//
//int main()
//{
//	People africans[5] =
//	{
//		EuropeanPeople(0, "A", 20, 1.65, "Male"),
//		AfricanPeople(0, "B", 20, 1.66, "Female"),
//		AfricanPeople(0, "C", 20, 1.67, "Female"),
//		EuropeanPeople(0, "D", 20, 1.68, "Male"),
//		AfricanPeople(0, "E", 20, 1.69, "Female"),
//	};
//
//	People *people = nullptr;
//
//	for (people=africans; people < africans + 5; people++)
//	{
//		std::cout <<"This is a "<< people->sex<< " with height "<<(people->height > 1.67 ? "> " : "< ")<<"1.67 (" <<people->skinColor <<")"<< std::endl;
//	}
//	
//	for (int i = 5; i < 10; i++) 
//	{
//		std::cout << "Factorials of " << i << " is: " << factorials(i) << std::endl;
//	}
//
//	return 0;
//}


// problem 2


//#include<iostream>
//#include<string>
//#include <math.h>
//
//
//#define PI 3.14
//#define DEG 180
//
//
//struct Vector
//{
//	Vector(double _x, double _y, double _z)
//	{
//		x = _x;
//		y = _y;
//		z = _z;
//	};
//
//	double x;
//	double y;
//	double z;
//
//	double sumSquare()
//	{
//		return pow(x, 2) + pow(y, 2) + pow(z, 2);
//	};
//
//	double length()
//	{
//		return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
//	};
//};
//
//
//struct VectorTools
//{
//	VectorTools(Vector v1 = Vector(0, 0, 0), Vector v2 = Vector(0, 0, 0))
//	{
//		vector_1 = v1;
//		vector_2 = v2;
//	};
//
//	Vector vector_1 = Vector(0, 0, 0);
//	Vector vector_2 = Vector(0, 0, 0);
//
//	double crossProduct()
//	{
//		return vector_1.x * vector_2.x + vector_1.y * vector_2.y + vector_1.z * vector_2.z;
//	};
//
//	Vector directionalProduct()
//	{
//		double x = vector_1.y * vector_2.z - vector_2.y * vector_1.z;
//		double y = vector_1.x * vector_2.z - vector_2.x * vector_1.z;
//		double z = vector_1.x * vector_2.y - vector_2.x * vector_1.y;
//		return Vector(x, y, z);
//	};
//
//	double angle()
//	{
//		return acos(crossProduct() / (vector_1.length() * vector_2.length())) * DEG/PI;
//	};
//
//	double perpendicularProjectionofAOnB()
//	{
//		return crossProduct() / vector_2.length();
//	};
//
//	double perpendicularProjectionofBOnA()
//	{
//		return crossProduct() / vector_1.length();
//	};
//
//};
//
//
//int main()
//{
//	int a = 1;
//	Vector vector_1 = Vector(1, 0, 1);
//	Vector vector_2 = Vector(5, 1, 3);
//	double penOfVector1Vector2 = VectorTools(vector_1, vector_2).perpendicularProjectionofAOnB();
//	std::cout << "The pependicular projection of vector 1 on vector 2 is:" << penOfVector1Vector2 << std::endl;
//	Vector crossVector = VectorTools(vector_1, vector_2).directionalProduct();
//	std::cout << "The directional product of vector 1 and vector 2 is:\n("<< crossVector.x << ","<< crossVector.y<<","<< crossVector.z <<")"<< std::endl;
//};


//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string name;
//
//	std::cout << "Please, enter your full name: ";
//	std::getline(std::cin, name);
//	std::cout << "Hello, " << name << "!\n";
//
//	return 0;
//};



// problem 3

#include <iostream>
#include <iomanip>
#include <math.h>

#define MAX_SIZE 10


void coutArray(double arr[])
{
	for (int i = 0; i < sizeof(arr); i++)
	{
		std::cout << arr[i] << " ";
	}
}


int main()
{
	double n = 0.0;
	int len = 0;
	double arr[MAX_SIZE];

	while (n>=0 && len <MAX_SIZE)
	{
		std::cout << "Enter integers: " << std::endl;
		std::cin >> n;
		arr[len] = n;
		len += 1;

	}

	double total = 0.0;
	double sumSigma = 0.0;
	len -= 1;
	for (int i=0; i<len; i++)
	{
		total += arr[i];
	}
	std::cout << "Average value of the array is :" << total / len <<std::endl;
	for (int i = 0; i < len; i++)
	{
		sumSigma += pow(arr[i] - (total / len), 2);
	}
	double g = 1 / (double(len) - 1);
	double tol = sqrt(g * sumSigma);
	std::cout << "Tolerence value of the array is :" <<std::setiosflags(std::ios::hex)<< tol << std::endl;
	if (!len%2)
	{
		for (int i = 0; i < int(len / 2) -1; i++)
		{
			double right_elem = arr[len - 1 - i];
			arr[len - 1] = arr[i];
			arr[i] = right_elem;
		}
	}
	else
	{
		for (int i = 0; i < int(len / 2); i++)
		{
			double right_elem = arr[len - 1 - i];
			arr[len - 1] = arr[i];
			arr[i] = right_elem;
		}
	}
	
	coutArray(arr);
}
