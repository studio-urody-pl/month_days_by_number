//program returns number of month days according to given month number

#include <iostream>
#include <stdlib.h>

using namespace std;
int month_no;

int main()
    {
        cout << "Insert month number: " ;
        if (!(cin >> month_no))
        {
            cerr<<"This is not a number!";
            exit(0);
        }

        switch (month_no)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout <<"This month is 31 days long";
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                cout <<"This month is 30 days long";
                break;
            case 2:         // leap year check
                {
                    int year;
                    cout <<"Insert year: " << endl;
                    cin >> year;

                    if ((year%4 == 0 && year % 100 != 0) || year % 400 == 0)
                        cout << "In " << year <<" february is 29 days long";
                    else cout << "In " << year <<" february is 28 days long";

                    break;

                    default: cout << "You entered wrong month number";

                }

        }
        return 0;
    }
