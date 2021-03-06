#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void search1(int value, vector<int> v);
int  search2(int value, vector<int> v, int low, int high);

int binarysearchiterative()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(8);
    v.push_back(19);
    v.push_back(25);
    v.push_back(34);
    v.push_back(39);
    v.push_back(45);
    v.push_back(48);
    v.push_back(66);
    v.push_back(75);
    v.push_back(89);
    v.push_back(95);

    search1(89, v);
    search1(34, v);
    search1(22, v);
    return 0;
}

void search1(int value, vector<int> v)
{
    cout << endl << "Searching for " << value << endl;

    int index = search2(value, v, 0, v.size());
    if (index >= 0)
    {
        cout << "Value " << value << " found at index " << index << endl;
    }
    else
    {
        cout << "Value " << value << " not found" << endl;
    }
}

#define DEBUG

int search2(int value, vector<int> v, int low, int high)
{
    while (low <= high) {
        int mid = (low + high)/2;

#ifdef DEBUG
        cout << " low " << setw(2) << low << " mid " << setw(2) << mid
             << " high " << setw(2) << high << endl;
#endif

        if (value == v[mid]) {
            return mid;
        }
        else if (value < v[mid]) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }

    return -1;
}
