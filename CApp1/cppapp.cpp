// cppapp1.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
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
    printf("�̸� = %s,���� = %d", who.name, who.age);

}
void main1() 
{
    SHuman kim = { "�輭��",29 };
}