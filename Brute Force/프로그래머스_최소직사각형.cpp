#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {

    for ( int i = 0; i < sizes.size(); i++) {
        if (sizes[i][0] > sizes[i][1]) { // 1. 모든 명함이 가로<세로 되도록 맞추기
            int tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }
    }

    int width_max = 0;
    int height_max = 0;

    for (int i = 0; i < sizes.size(); i++) { // 2. 가로 세로 최댓값 찾기
        if (sizes[i][0] > width_max)width_max = sizes[i][0];
        if (sizes[i][1] > height_max)height_max = sizes[i][1];
    }

    int answer = width_max * height_max;
    return answer;
}