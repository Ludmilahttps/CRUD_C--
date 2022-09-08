#include <iostream>
using namespace std;

int main()
{
    int varwhile = 1, menu;

    while (varwhile)
    {
        int menu;

        cout << "-----------UFxC String Store V.0--------------" << endl
             << "1. Insert string" << endl
             << "2. Print index and string" << endl
             << "3. Search string (literal)" << endl
             << "4. Search substrings" << endl
             << "5. Remove string (by index)" << endl
             << "6. Remove by substrings (all occurrences)" << endl
             << "0. Quit" << endl
             << "----------------------------------------------" << endl;
        cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "1. Insert string" << endl;
            break;

        case 2:
            cout << "2. Print index and string" << endl;
            break;

        case 3:
            cout << "3. Search string (literal)" << endl;
            break;

        case 4:
            cout << "4. Search substrings" << endl;
            break;

        case 5:
            cout << "5. Remove string (by index)" << endl;
            break;

        case 6:
            cout << "6. Remove by substrings (all occurrences)" << endl;
            break;

        default:
            cout << "Quit" << endl;
            varwhile = 0;
        }
    }

    return 0;
}