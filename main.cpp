/* Project #: CSProject2
 * Author: Zach Oryszak-Ley
 * Due: 10/10/2011
 * Description
 *	Part 1: Nested if/else if
 * 	Part 2: Switch Statement
 * 	Part 3: Loops
 */

#include <iostream>
using namespace std;

int main() {
//Part 1: Nested if/else if w/ modifications for parts 2 and three
        int year;
        int century;
        int month;
        int day;
        int leapyear;
        
        
        //User input for date.
        //Step 3: added for loop
       for (int count = 1; count <=5; count ++){
        cout << endl << "Please enter a month, day, and year. (MM DD YYYY).\n";
        cin >> month >> day >> year;
       // Checking Leap Year Rules             
                    if ((year % 4) == 0){
                        if ((year % 100) != 0){
                                leapyear = true;
                        }else if ((year % 400) == 0){
                                leapyear = true;
                        }else{ 
                               leapyear = false;}
                    }else{ 
                               leapyear = false;}
  //Part 2: Switch Statement
        //Case statements and date validation.
        switch (month)
        {
        case 1: cout << "You have entered January" << endl;
                if (day < 0 || day > 31) cout << "Invalid day\n";
                else cout << "January " << day << " is a valid date\n";
                if (leapyear == 1){
                    if ( day > 0 && day <= 31){
                    cout << "January " << day << ", " << year; 
                    cout << " is a valid leap year\n";}}
                if (leapyear == 0){
                    if ( day > 0 && day <= 31){
                    cout << "January " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}}
        break;
        case 2: cout << "You have entered February" << endl;
                if (leapyear == 1){
                    if (day < 0 || day > 29) cout << "Invalid date\n";
                    if (day > 0 && day <= 29){ 
                        cout << "April " << day << " is a valid date\n";
                        cout << "April " << day << ", " << year;
                        cout << " is a valid leap year\n";}}
               if (leapyear == 0){
                    if (day < 0 || day > 28) cout << "Invalid date\n";
                    if (day > 0 && day <= 28){
                       {cout << "April " << day << ", " << year;
                    cout << " is a valid date, but not a leap year\n";}
                    }}
                if (leapyear = false) 
                   {cout << "April " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}        
        break;
        case 3: cout << "You have entered March" << endl;
                if (day < 0 || day > 31) cout << "Invalid day\n";
                else cout << "March " << day << " is a valid date\n";
                if (leapyear == 1){
                    if ( day > 0 && day <= 31){
                    cout << "March " << day << ", " << year; 
                    cout << " is a valid leap year\n";}}
                if (leapyear == 0){
                    if ( day > 0 && day <= 31){
                    cout << "March " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}}
        break;
        case 4: cout << "You have entered April" << endl;
                if (day < 0 || day > 30) cout << "Invalid day\n";
                else cout << "April " << day << " is a valid date\n";
                if (leapyear == 1){
                    if ( day > 0 && day <= 30){
                    cout << "April " << day << ", " << year; 
                    cout << " is a valid leap year\n";}}
                if (leapyear == 0){
                    if ( day > 0 && day <= 30){
                    cout << "April " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}}
        break;
        case 5: cout << "You have entered May" << endl;
                if (day < 0 || day > 31) cout << "Invalid day\n";
                else cout << "May " << day << " is a valid date\n";
                if (leapyear == 1){
                    if ( day > 0 && day <= 31){
                    cout << "May " << day << ", " << year; 
                    cout << " is a valid leap year\n";}}
                if (leapyear == 0){
                    if ( day > 0 && day <= 31){
                    cout << "May " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}}
        break;
        case 6: cout << "You have entered June" << endl;
                if (day < 0 || day > 30) cout << "Invalid day\n";
                else cout << "June " << day << " is a valid date\n";
                if (leapyear == 1){
                    if ( day > 0 && day <= 30){
                    cout << "June " << day << ", " << year; 
                    cout << " is a valid leap year\n";}}
                if (leapyear == 0){
                    if ( day > 0 && day <= 30){
                    cout << "June " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}}
        break;
        case 7: cout << "You have entered July" << endl;
                if (day < 0 || day > 31) cout << "Invalid day\n";
                else cout << "July " << day << " is a valid date\n";
                if (leapyear == 1){
                    if ( day > 0 && day <= 31){
                    cout << "July " << day << ", " << year; 
                    cout << " is a valid leap year\n";}}
                if (leapyear == 0){
                    if ( day > 0 && day <= 31){
                    cout << "July " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}}
        break;
        case 8: cout << "You have entered August" << endl;
                if (day < 0 || day > 31) cout << "Invalid day\n";
                else cout << "August " << day << " is a valid date\n";
                if (leapyear == 1){
                    if ( day > 0 && day <= 31){
                    cout << "August " << day << ", " << year; 
                    cout << " is a valid leap year\n";}}
                if (leapyear == 0){
                    if ( day > 0 && day <= 31){
                    cout << "August " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}}
        break;
        case 9: cout << "You have entered September" << endl;
                if (day < 0 || day > 30) cout << "Invalid day\n";
                else cout << "September " << day << " is a valid date\n";
                if (leapyear == 1){
                    if ( day > 0 && day <= 30){
                    cout << "September " << day << ", " << year; 
                    cout << " is a valid leap year\n";}}
                if (leapyear == 0){
                    if ( day > 0 && day <= 30){
                    cout << "September " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}}
        break;
        case 10: cout << "You have entered October" << endl;
                if (day < 0 || day > 31) cout << "Invalid day\n";
                else cout << "October " << day << " is a valid date\n";
                if (leapyear == 1){
                    if ( day > 0 && day <= 31){
                    cout << "October " << day << ", " << year; 
                    cout << " is a valid leap year\n";}}
                if (leapyear == 0){
                    if ( day > 0 && day <= 31){
                    cout << "October " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}}
        break;
        case 11: cout << "You have entered November" << endl;
                if (day < 0 || day > 30) cout << "Invalid day\n";
                else cout << "November " << day << " is a valid date\n";
                if (leapyear == 1){
                    if ( day > 0 && day <= 30){
                    cout << "November " << day << ", " << year; 
                    cout << " is a valid leap year\n";}}
                if (leapyear == 0){
                    if ( day > 0 && day <= 30){
                    cout << "November " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}}
        break;
        case 12: cout << "You have entered December" << endl;
                if (day < 0 || day > 31) cout << "Invalid day\n";
                else cout << "December " << day << " is a valid date\n";
                if (leapyear == 1){
                    if ( day > 0 && day <= 31){
                    cout << "December " << day << ", " << year; 
                    cout << " is a valid leap year\n";}}
                if (leapyear == 0){
                    if ( day > 0 && day <= 31){
                    cout << "December " << day << ", " << year; 
                    cout << " is a valid date, but not a leap year\n";}}
        break;
        default: cout << "You did not enter a valid month" << endl;
        break;
        }}
   
  //Part 3, added a for loop to parts 1 and 2 to perform five iterations.
    return 0;
}