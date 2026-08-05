#include <bits/stdc++.h>
using namespace std;

struct Flight {
    long long flightNumber;
    int departureTime;
    string destination;
};

bool compareFlights(const Flight &a, const Flight &b) {
    if (a.departureTime != b.departureTime) {
        return a.departureTime < b.departureTime;
    }
    return a.flightNumber < b.flightNumber;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<Flight> flights(n);
    for (int i = 0; i < n; i++) {
        cin >> flights[i].flightNumber >> flights[i].departureTime >> flights[i].destination;
    }

    sort(flights.begin(), flights.end(), compareFlights);

    for (int i = 0; i < n; i++) {
        cout << flights[i].flightNumber << " " 
             << flights[i].departureTime << " " 
             << flights[i].destination << "\n";
    }

    return 0;
}