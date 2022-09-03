#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

bool die(const string & msg);

int main(){
   srand(static_cast<unsigned>(time(0)));
   unsigned num1 = 0, num = 0, sum = 0;
   bool userTurn = true;
   cout << "Welcome to the Odds and Evens game!";
   num = rand() % 10 + 1;

   while (num){
      if (userTurn){
         cout << " Your # in [1,10] is ";
         cin >> num1;
      }
      else {
         cout << "My number is " << num;
         sum = num1 + num;

         if (sum % 2 == 0){
            cout << " I win!";
         }
         else {
            cout << " You win!";
         }
      }
      userTurn = !userTurn;
   }

}

bool die(const string & msg){
   cout << "Fatal error: " << msg << endl;
   exit(EXIT_FAILURE);
}
