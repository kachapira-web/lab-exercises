//program will print conditional sentences using 'switch statements'
#include <iostream> //basic i/o
#include <cstdlib> //for rand and srand function
using namespace std;
//main function
int main()
{
    int Days_until_expiration = rand() % 10; //generates random numbers
    //now we sue 'switch statements' instead of 'if-statements'
    switch (Days_until_expiration)
    {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires in one day.Renew now and save 10%" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription will expire in " << Days_until_expiration << " days.\nRenew now and save 20%" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!!" << endl;
            break;
        default:
            cout << "You have an active subscription" << endl;
            break;
    }
    return 0;
}
/*using the break statements in this format allows use of multiple cases to produce one outcome
Unfortunately, code has higher affinity for '3'*/