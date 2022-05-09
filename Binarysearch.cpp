//searching

#include <iostream>
using namespace std;

bool(binarysearch(int arr[], int n, int target))
{

    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        int midelement = arr[mid];
        if (midelement == target)
        {
            return true;
        }
        if (target < midelement)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return false;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 9, 11, 23};
    int n = 7;
    int target = 23;
    if (binarysearch(arr, n, target))
    {
        cout << "Element found "<< endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}

//first occurence

#include <iostream>
using namespace std;

int firstoccurence(int arr[], int n, int target)
{

    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        int midelement = arr[mid];
        if (midelement == target)
        {
            ans = mid;
            end = mid - 1;
        }
        if (target < midelement)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main(void)
{
    int nums[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int n = 10;
 
    int target = 5;
 
    int index = firstoccurence(nums, n, target);
 
    if (index != -1)
    {
        cout<<"The first occurrence of element is "<<target<< " located at index"<< index<<endl;
                
    }
    else {
     cout<<"Element not found in the array";
    }
 
    return 0;
}
