#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long countRightAngleTriangles(const vector<pair<long long, long long>>& points) {
    unordered_map<long long, long long> count_x;
    unordered_map<long long, long long> count_y;
    
    for (const auto& point : points) {
        count_x[point.first]++;
        count_y[point.second]++;
    }
    long long total_triangles = 0;
    for (const auto& point : points) {
        long long x = point.first;
        long long y = point.second;
        if(x==0||y==0){
            continue;
        }
        total_triangles += (count_x[x] - 1) * (count_y[y] - 1);
    }

    return total_triangles;
}

int main() {
    long long N;
    cin >> N;
    vector<pair<long long, long long>> points(N);
    for (long long i = 0; i < N; ++i) {
        cin >> points[i].first >> points[i].second;
    }
    cout <<countRightAngleTriangles(points) << endl;

    return 0;
}