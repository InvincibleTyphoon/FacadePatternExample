#pragma once
#include <iostream>
#include "Tuner.h"
#include "DvdPlayer.h"

using namespace std;

class DvdPlayer;
class Tuner;

//앰프 오디오
class Amplifier
{
public:
	Amplifier();
	void on();	//켜기
	void off();	//끄기
	void setDvd(DvdPlayer * dvdPlayer);	//DVD 플레이어 연결
	void setStereoSound();			//소리 출력을 스테레오로 설정
	void setSurroundSound();		//소리 출력을 서라운드로 설정
	void setTuner(Tuner * tuner);	//튜너(라디오) 연결
	void setVolume(int volume);		//음량 설정
private:
	Tuner * tuner;				//연결된 튜너(라디오)
	DvdPlayer * dvdPlayer;		//연결된 DVD 플레이어
};

