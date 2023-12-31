#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

#define num 50
typedef high_resolution_clock Clock;
typedef Clock::time_point ClockTime;

int fibonacci(int n);
void printExecutionTime(ClockTime start_time, ClockTime end_time);

int main() {
    ClockTime start_time = Clock::now();
    fibonacci(25);
    ClockTime end_time = Clock::now();

    cout << "Calculating the " << num << "th fibonacci element >";
    printExecutionTime(start_time, end_time);
}

int fibonacci(int n) {
    if (n<=1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

void printExecutionTime(ClockTime start_time, ClockTime end_time) {
    auto execution_time_ns = duration_cast<nanoseconds>(end_time - start_time).count();
    auto execution_time_ms = duration_cast<microseconds>(end_time - start_time).count();
    auto execution_time_sec = duration_cast<seconds>(end_time - start_time).count();
    auto execution_time_min = duration_cast<minutes>(end_time - start_time).count();
    auto execution_time_hour = duration_cast<hours>(end_time - start_time).count();

    cout << endl << "Execution Time: ";
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
}