#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string answer1 = "";
    vector<int> answer2;
    string ten [10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
    string temp[1];
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            int a = s[i]-48;
            answer2.push_back(a);
        }
        else
        {
            temp[0] += s[i];
        }
        for (int j = 0; j < 10; j++)
        {
            if (temp[0] == ten[j])
            {
                answer2.push_back(j);
                //템프 초기화
                temp[0] = {};
            }
        }
    }
    //백터에 들어간 숫자를 문자열에 합치기
    for (int k = 0; k < answer2.size(); k++)
    {
        answer1 += to_string(answer2[k]);
    }

    //문자를 숫자로 형변환
    answer = stoi(answer1);
    return answer;
}

int main()
{
    solution("23four5six7");
}