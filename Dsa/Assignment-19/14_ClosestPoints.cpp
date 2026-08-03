#include <bits/stdc++.h>
using namespace std;

struct Point {
    long long x, y;
    long long dist_sq;
};

bool comparePoints(const Point& p1, const Point& p2) {
    if (p1.dist_sq != p2.dist_sq) {
        return p1.dist_sq < p2.dist_sq;
    }
    if (p1.x != p2.x) {
        return p1.x < p2.x;
    }
    return p1.y < p2.y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long a, b;
    if (!(cin >> n >> a >> b)) return 0;

    vector<Point> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i].x >> points[i].y;
        long long dx = points[i].x - a;
        long long dy = points[i].y - b;
        points[i].dist_sq = dx * dx + dy * dy;
    }

    sort(points.begin(), points.end(), comparePoints);

    for (int i = 0; i < n; ++i) {
        cout << points[i].x << " " << points[i].y << "\n";
    }

    return 0;
}