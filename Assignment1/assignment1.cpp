#include <iostream>

using namespace std;

struct Stats {
    float sumPos=0;
    float sumNeg=0;
    int countPos=0;
    int countNeg=0;
};

Stats sums(float arr[], int n);

int main()
{

    float arr[10];
    int count=0;

    while(count < 10) {
        float temp;
        cout << "Enter a number: ";
        cin >> temp;

        // if number = 0, stop reading.
        if(temp == 0) {
            // cout << "number 0 entered. stopping read-in." << endl;
            break;
        }

        // if not 0, store in array
        arr[count++] = temp;
    }

    // check array read-in
    // cout << count << endl;
    // for(int i=0; i<count; i++) {
    //     cout << arr[i] << endl;
    // }

    // call function and receive results as struct object
    Stats result = sums(arr, count);

    // calculate average values for each set
    float avgPos, avgNeg;
    avgPos = result.sumPos/result.countPos;
    avgNeg = result.sumNeg/result.countNeg;

    // print out all results
    cout << endl << "Here are some statistics for the numbers you entered." << endl;

    cout << "Positive numbers:" << endl;
    cout << "Sum = " << result.sumPos << endl;
    cout << "Count = " << result.countPos << endl;
    cout << "Average = " << avgPos << endl << endl;

    cout << "Negative numbers:" << endl;
    cout << "Sum = " << result.sumNeg << endl;
    cout << "Count = " << result.countNeg << endl;
    cout << "Average = " << avgNeg << endl;

    return 0;
}


Stats sums(float arr[], int n) {
    Stats stat;
    // loop through and check if number if positive or negative
    for(int i=0; i<n; i++) {
        if(arr[i] < 0) {
            // if positive, increase and add to corresponding count and sum variable
            ++stat.countNeg;
            stat.sumNeg+=arr[i];
        } else {
            // if negative, increase and add to corresponding count and sum variable
            ++stat.countPos;
            stat.sumPos+=arr[i];
        }
    }
    // return struct variable
    return stat;
}
