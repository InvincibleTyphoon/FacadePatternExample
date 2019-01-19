#include "Projector.h"

Projector::Projector()
{
}

void Projector::on()
{
	cout << "프로젝터 켭니다." << endl;
}

void Projector::off()
{
	cout << "프로젝터 끕니다." << endl;
}

void Projector::tvMode()
{
	cout << "TV 모드로 전환합니다." << endl;
}

void Projector::wideScreenMode()
{
	cout << "와이드 스크린 모드로 전환합니다." << endl;
}