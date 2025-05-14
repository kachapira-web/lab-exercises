#include <cstdlib> //for rand and srand functions
#include <iostream> //for i/o operations
using namespace std;
//main function
int main()
{
    int days_until_expiration = rand() % 10; //function generates random numbers
    
    //now we use if-statements
    if(days_until_expiration == 0)
    {
        cout << "Your subscription has expired." << endl;
    }else if(days_until_expiration == 1){
        cout << "Your subscription expires within a day.\nRenew now and save 20%" << endl;
    }else if(days_until_expiration <= 5){
        cout << "Your subscription expires in " << days_until_expiration << " days."
        << "\nRenew now and save 10%" << endl;
    }else if(days_until_expiration <= 10){
        cout << "Your subscription will expire soon. Renew now!!" <<endl;
    }else{
        cout << "You have an active subscription." << endl;
    }
    return 0;
}