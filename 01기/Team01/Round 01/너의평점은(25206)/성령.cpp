// 백준 25206 너의 평점은
// 전공평점 3.3 이상이여야 졸업가능
// 전공평점 = (학점x과목평점) 합을 학점의 총합으로 나눈 것 
// p는 계산에서 제외!!!

#include <iostream>
#include <string>
using namespace std;


int main() {
	string subject;
	float grade, major; // grade 학점, major 전공평점
	float score = 0; // score 과목 숫자평점
	float gradesum = 0; // gradesum 학점(grade)의 총합
	float allsum = 0; // (학점x과목평점)의 합
	string ave; // 과목 영어평점

	//ProblemSolving 4.0 P
	for (int i = 0; i < 20; i++) {
		cin >> subject >> grade >> ave;
		if (ave == "P")
			grade = 0;

		gradesum += grade; // 학점의 총합

		if (ave == "A+")
			score = 4.5;
		else if (ave == "A0")
			score = 4.0;
		else if (ave == "B+")
			score = 3.5;
		else if (ave == "B0")
			score = 3.0;
		else if (ave == "C+")
			score = 2.5;
		else if (ave == "C0")
			score = 2.0;
		else if (ave == "D+")
			score = 1.5;
		else if (ave == "D0")
			score = 1.0;
		else if (ave == "F")
			score = 0.0;

		allsum += (grade * score); //(학점x과목평점)의 합
	}
	major = allsum / gradesum; // 전공평점 = (학점x과목평점) 합을 학점의 총합으로 나눈 것 
	std::cout << major;

	return 0;
}
