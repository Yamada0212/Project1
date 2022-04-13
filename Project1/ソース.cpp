#include<iostream>
using namespace std;

int main() {
    int crane = 0;	//’ß
    int turtle = 0;	//‹T
    int heads = 0;	//“ª
    int legs = 0;	//‹r
    cout << "“ª‚Ì”‚ÍF";
    cin >> heads;
    cout << "‹r‚Ì”‚ÍF";
    cin >> legs;
    //‚±‚±‚Å’ß‚Æ‹T‚Ì”‚ğcrane‚Æturtle‚É‘ã“ü
    crane = (heads * 4 - legs) / 2;
    turtle = heads - crane;
    cout << "’ß‚Í" << crane << "‹T‚Í" << turtle << endl;
    return 0;
}