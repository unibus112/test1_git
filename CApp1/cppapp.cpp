// cppapp1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "CApp1.h"

using namespace std;
struct SHuman
{
    char name[12];
    int age;

};

void IntroHuman(SHuman who) 
{
    printf("이름 = %s,나이 = %d", who.name, who.age);

}
void main1() 
{
    SHuman kim = { "김서울",29 };
}