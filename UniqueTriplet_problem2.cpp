#include<bits/stdc++.h>
using namespace std;

void uniqueTriplet(int arr[], int n)
{
    bool check = false;
    sort(arr, arr+n);

    for (int i=0; i<n-1; i++)
    {
        int left = i + 1;
        int right = n - 1;
        int currentElement = arr[i];
        while (left < right)
        {
            if (currentElement + arr[left] + arr[right] == 0)
            {
                cout<< currentElement <<" " <<arr[left] <<" " << arr[right] <<endl;
                left++;
                right--;
                check = true;
                  break;
            }
            else if (currentElement + arr[left] + arr[right] < 0)
                left++;

            else{
                right--;
            }
        }
    }

    if (check == false)
        cout << " There is no triplet" << endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    uniqueTriplet(arr, n);
    return 0;

}
