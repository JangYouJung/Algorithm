string solution(vector<string> participant, vector<string> completion) { //hash 사용한 풀이
    string answer = "";
    unordered_map <string,int> marathon;

    for (string player : participant) {
        if (marathon.count(player)) {
            marathon[player]++;
        }
        else {
            marathon.insert({ player,1 });
        }
    }

    for (string player : completion) {
        marathon[player]--;
    }

    for (string player : participant) {
        if (marathon[player] == 1) {
            answer = player;
            break;
        }
    }
    return answer;
}
