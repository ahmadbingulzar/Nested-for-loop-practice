#include <iostream>
using namespace std;
int main()
{
    int age;
do{ 
    
        cout << "Enter your age:";
        cin >> age;

        if (age > 14)
        {
            if (age >= 18 && age <= 150)
            {
                cout << "adult" << endl;
            }
            else if (age < 14)
                cout << "Teenager";

            else if (age > 150)
                cout << "you are lying" << endl;
            else if (age == 18)
            {
                cout << "have you applied for the id card[y/n]:";
                char choice;
                cin >> choice;
                if (choice == 'y')
                    cout << "awsome" << endl;
                else
                    cout << "Then go for it" << endl;
            }
        }

        else
        {
            if (age > 0)
            {
                cout << "child" << endl;
            }

            else
                cout << "something went wrong" << endl;
        }
    }
while(age!=-1);
}
