#include <iostream>
#include <string>


class Women 
{
    public:
        int age;

        Women()
        {}

        Women(const std::string &n, int a, bool p = true)
            : name(n), age(a), pured(p)
        {}

        Women(Women &other)
            : name(other.name), age(other.age), pured(other.pured)
        {
            std::cout<< "copy" <<std::endl;
        }

        ~Women()
        {
            std::cout << "Delete " << name << std::endl;
        }

        virtual std::string playType()
        {
            std::cout<< "O.O.O!\n";
            return "O.O.O";
        }

        void makeUp()
        {}

        void fix()
        {
            pured = age < 25 ? true :false;
        }

        void showCurrentStatus()
        {
            std::cout << name << " " << (pured ? "is":  "isn't") << " Pured!"<< std::endl;
        }

    protected:
        std::string name;
        bool pured;
};


class WellBehavedWomen : public Women
{
    public:
        WellBehavedWomen(const std::string &n, int a, bool p = true)
            : Women(n, a, p)
        {}

        void doHouseWork()
        {
            std::cout << name << " " << "is doing housework!" << std::endl;
        }
};


class PoorBehavedWomen : public Women
{
    public:
        PoorBehavedWomen(const std::string &n, int a, bool p = false)
            : Women(n, a, p)
        {}

        void goToClub()
        {
            std::cout<< name << " " << "is going to the club!" << std::endl;
        }

        std::string playType()
        {
            std::cout<< "U.U.U!\n";
            return name + " U.U.U!";
        }
};


int main()
{
    WellBehavedWomen *thuy_arr[5];
    int length = sizeof(thuy_arr)/ sizeof(thuy_arr[0]);
    for (int i=0; i <length; i++)
    {
        WellBehavedWomen *wm = new WellBehavedWomen("Thuy " + std::to_string(i), 22 + i, i%2 ? true: false);
        thuy_arr[i] = wm;
        std::cout<< "Age: " << thuy_arr[i]->age <<std::endl;
        thuy_arr[i]->doHouseWork();
        thuy_arr[i]->showCurrentStatus();
    }
}