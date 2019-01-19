#pragma once
#include <iostream>
#include "Amplifier.h"

class Amplifier;

//DVD 플레이어
class DvdPlayer
{
public:
	DvdPlayer();
	void on();		//켜기
	void off();		//끄기	
	void eject();	//DVD 꺼냄
	void pause();	//일시 정지
	void play();	//DVD 실행
	void setStereoAudio();	//오디오 출력을 스테레오로 설정
	void setTwoChannelAudio();	//오디오 출력을 서라운드로 설정
	void stop();

private:
	Amplifier * amplifier;
};

