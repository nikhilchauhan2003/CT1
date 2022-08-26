
//Name - Nikhil chauhan
//roll no -2010990493
//set 3
#include <iostream>
#include <algorithm>
using namespace std;
 
void findPair(int temp[], int n, int point)
{
   
    sort(temp, temp + n);
 

    int low = 0;
    int high = n - 1;
 
  
    while (low < high)
    {
        // sum found
        if (temp[low] + temp[high] == point)
        {
            cout << "Pair found (" << temp[low] << ", " << temp[high] << ")\n";
            return;
        }
 
        (temp[low] + temp[high] < point)? low++: high--;
    }
 
    // we reach here if the pair is not found
    cout << "Pair not found";
}
 
int main()
{
    int temp[] = { 8, 7, 2, 5, 3, 1 };
    int point = 10;
 
    int n = sizeof(temp)/sizeof(temp[0]);
 
    findPair(temp, n,point);
 
    return 0;
}
