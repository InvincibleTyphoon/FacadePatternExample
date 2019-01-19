#pragma once
#include <iostream>
#include "DvdPlayer.h"

using namespace std;

//빔 프로젝터
class Projector
{
public:
	Projector();
	void on();			//켜기
	void off();			//끄기
	void tvMode();		//TV모드로 전환
	void wideScreenMode();	//와이드 스크린 모드로 전환

private:
	DvdPlayer * dvdPlayer;
};

