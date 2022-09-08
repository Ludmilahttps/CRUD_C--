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
             << "----------------------------------------------";
        cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "1. Insert string" << endl;
            break;

        default:
            break;
        }
    }

    return 0;
}