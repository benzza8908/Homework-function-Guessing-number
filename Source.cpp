#include <iostream>
#include <time.h>       /* time */
using namespace std;
int Guess(int);
int main()
{
    
    int num,Round;
    
    srand(time(NULL));
    num = rand() % 5 + 1;

    cout<<"###Welcome to guessing number game###"<<endl;
    cout << "Secret number has been chosen :"<<num<<endl;
   
    Round = Guess(num);
    
    
    cout << ("Congratultions!")<<endl;
    cout << "The secret number is " << (num) << endl;
    cout << "You made " <<Round << "guesses"<<endl;
    
    return 0;
}
int Guess(int iSecret)
{
  
    int input, Round = 0;
    do {
        cout << ("Guess the number (1 to 5): ");
        cin >> input;
        if (input < iSecret) cout << ("The secret number is lower")<<endl;
        else if (input > iSecret) cout << ("The secret number is higher")<<endl;
        Round++;
    } while (input != iSecret);
    return Round;
}
