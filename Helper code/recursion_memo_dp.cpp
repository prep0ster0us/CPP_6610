#include <iostream>
#include <chrono>
#include <vector>
#include <iomanip>

using namespace std;
using namespace std::chrono;

#define w 20
#define ww 45

#define num 40

typedef high_resolution_clock Clock;
typedef Clock::time_point ClockTime;

vector<int> dp(int n);
int bottomUp(int n);
int recurr(int n);
int memoRecur(int n, vector<int> &memo);
void printExecutionTime(ClockTime start_time, ClockTime end_time);

int main() {

    int n = 13;
    string s1= "Fibonacci series (with recursion)";
    cout<< left
        << setw(ww)
        << s1 << ": ";
    for(int i=0; i<n; i++) {
        cout << recurr(i) << " ";
    }
    cout << endl;

    string s2= "Fibonacci series (with memo and recursion)";
    vector<int> memo(num, -1);
    cout << setw(ww)
         << s2 << ": ";
    for(int i=0; i<n; i++) {
        cout << memoRecur(i, memo) << " ";
    }
    cout << endl;

    string s3= "Fibonacci series (with dynamic programming";
    cout << setw(ww)
         << s3 << ": ";
    vector<int> fib;
    fib = dp(n);
    for(int i: fib) {
        cout << i << " ";
    }
    cout << endl;

    string s4= "Fibonacci series (with bottom-up DP)";
    cout << setw(ww)
         << s4 << ": ";
    bottomUp(n);
    cout << endl;

    memo.clear();
    // measure execution time
    cout << endl;
    cout << "Measure execution time for " << num << "th Fibonacci number >" << endl;

    // I - Recursion
    ClockTime start_time = Clock::now();
    recurr(num);
    ClockTime end_time = Clock::now();

    string method = "RECURSION";
    cout<< left
        << setw(w)
        << method;
    printExecutionTime(start_time, end_time);

    // II - Recursion with memoization
    start_time = Clock::now();
    for(int &i : memo) i=-1;
    memoRecur(num, memo);
    end_time = Clock::now();

    method = "RECURSION WITH MEMO";
    cout<< left
        << setw(w)
        << method;
    printExecutionTime(start_time, end_time);


    // III - DYNAMIC PROGRAMMING
    start_time = Clock::now();
    dp(num);
    end_time = Clock::now();

    method = "DYNAMIC PROGRAMMING";
    cout<< left
        << setw(w)
        << method;
    printExecutionTime(start_time, end_time);

    // III - BOTTOM-UP DYNAMIC PROGRAMMING (CONSTANT SPACE)
    start_time = Clock::now();
    // bottom-up DP logic
    int n1=0, n2=1;
    for(int i=2; i<num+1; i++) {
        int temp = n1;
        n1 = n2;
        n2 += temp;
    }
    end_time = Clock::now();

    method = "BOTTOM-UP DP";
    cout<< left
        << setw(w)
        << method;
    printExecutionTime(start_time, end_time);

    return 0;
}

vector<int> dp(int n) {
    vector<int> dp(n, 0);
    dp[1]=1;
    for(int i=2; i<n; i++) {
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp;
}

int bottomUp(int n) {
    int n1=0, n2=1;
    if(n==n1 || n==n2) return n;
    cout << n1 << " " << n2 << " ";
    for(int i=2; i<n; i++) {
        int temp = n1;
        n1 = n2;
        n2 += temp;
        cout << n2 << " ";
    }
    cout << endl;
    return n2;
}

int recurr(int n) {
    if(n==0 || n==1) return n;
    return recurr(n-1) + recurr(n-2);
}

int memoRecur(int n, vector<int> &memo) {
    if(n==0 || n==1) return n;
    else if(memo[n] !=-1) return memo[n];
    else return memoRecur(n-1, memo) + memoRecur(n-2, memo);
}

void printExecutionTime(ClockTime start_time, ClockTime end_time) {
    auto execution_time_ns = duration_cast<nanoseconds>(end_time - start_time).count();
    auto execution_time_ms = duration_cast<microseconds>(end_time - start_time).count();
    auto execution_time_sec = duration_cast<seconds>(end_time - start_time).count();
    auto execution_time_min = duration_cast<minutes>(end_time - start_time).count();
    auto execution_time_hour = duration_cast<hours>(end_time - start_time).count();

    cout << " Execution Time: ";
    if(execution_time_hour > 0)
        cout << "" << execution_time_hour << " Hours, ";
    if(execution_time_min > 0)
        cout << "" << execution_time_min % 60 << " Minutes, ";
    if(execution_time_sec > 0)
        cout << "" << execution_time_sec % 60 << " Seconds, ";
    if(execution_time_ms > 0)
        cout << "" << execution_time_ms % long(1E+3) << " MicroSeconds, ";
    if(execution_time_ns > 0)
        cout << "" << execution_time_ns % long(1E+6) << " NanoSeconds";
    cout << endl;
}