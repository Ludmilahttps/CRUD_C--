#include <iostream>
#include <vector>

using namespace std;

int menu();
int print(vector<string> &list);
int search_string(vector<string> &list);
int search_substring(vector<string> &list);
int remove_string(vector<string> &list);
int remove_substring(vector<string> &list);

int main()
{
    int varwhile = 1;
    vector<string> list;
    int option;

    do
    {
        option = menu();

        if (option == 1)
        {
            string aux;
            cout << "1. Insert string" << endl
                 << "Enter string:" << endl;
            cin >> aux;
            list.push_back(aux);
            continue;
        }
        if (option == 2)
        {
            cout << "2. Print index and string" << endl;
            print(list);
            continue;
        }
        if (option == 3)
        {
            cout << "3. Search string (literal)" << endl;
            search_string(list);
            continue;
        }
        if (option == 4)
        {
            cout << "4. Search substrings" << endl;
            search_substring(list);
            continue;
        }
        if (option == 5)
        {
            cout << "5. Remove string (by index)" << endl;
            remove_string(list);
            continue;
        }
        if (option == 6)
        {
            cout << "6. Remove by substrings (all occurrences)" << endl;
            remove_substring(list);
            break;
        }
        if (option == 0)
        {
            cout << "Quit" << endl;
            varwhile = 0;
        }
    } while (option != 0);
    return 0;
}

int menu()
{
    int opc;
    cout << "-----------UFxC String Store V.0--------------" << endl
         << "1. Insert string" << endl
         << "2. Print index and string" << endl
         << "3. Search string (literal)" << endl
         << "4. Search substrings" << endl
         << "5. Remove string (by index)" << endl
         << "6. Remove by substrings (all occurrences)" << endl
         << "0. Quit" << endl
         << "----------------------------------------------" << endl;
    cin >> opc;

    return opc;
}

int print(vector<string> &list)
{
    cout << "list:" << endl;
    for (size_t i = 0; i < list.size(); i++)
    {
        cout << "string " << i << " - " << list.at(i) << endl;
    }
}

int search_string(vector<string> &list)
{
    string search;
    int find = 0;

    cout << "Enter string to search" << endl;
    cin >> search;

    for (size_t i = 0; i < list.size(); i++)
    {
        if (list.at(i) == search)
        {
            find++;
            cout << "string " << search << " is found in position " << i << endl;
        }
    }
    if (find == 0)
    {
        cout << "string not found" << endl;
    }
}

int search_substring(vector<string> &list)
{
    string subsearch;
    int find = 0;

    cout << "Enter substring to search" << endl;
    cin >> subsearch;

    for (size_t i = 0; i < list.size(); i++)
    {
        if (list.at(i) == subsearch)
        {
            find++;
            cout << subsearch << endl;
        }
    }
    if (find == 0)
    {
        cout << "string not found" << endl;
    }
}

int remove_string(vector<string> &list)
{
    int remove;
    bool find = false;

    cout << "Enter index string to remove" << endl;
    cin >> remove;

    for (size_t i = 0; i < list.size(); i++)
    {
        if (list.at(i) == list.at(remove))
        {
            list.erase(list.begin() + i);
            find = true;
        }
    }

    if (find == false)
    {
        cout << "String not found" << endl;
    }
}

int remove_substring(vector<string> &list)
{
    string subremove;

    cout << "Enter substring to remove" << endl;
    cin >> subremove;
}