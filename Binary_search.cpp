// program to implement recursive Binary Search
#include <bits/stdc++.h>
#include<time.h>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array if it is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left sub array
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right sub array
		return binarySearch(arr, mid + 1, r, x);
	}

	//when element is not present in array
	return -1;
}

int main(void)
{
	int arr[20], i, x, n, result;
	char choice;

    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter array elements(in sorted order):\n";

    //Loop for taking array elements from the user
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    do{
    cout<<"\nEnter the element you want to search:";
    cin>>x;
    clock_t t;
    t = clock();

	result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;

    cout<<"\n\nDo you want to search more? (y/n) : ";
    cin>>choice;
    }while(choice=='y');
    //do-while loop ends

	return 0;
}
