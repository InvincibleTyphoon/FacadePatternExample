#pragma once
#include <iostream>
#include "Amplifier.h"

using namespace std;

class Amplifier;

//튜너(라디오)
class Tuner
{
public:
	Tuner(Amplifier * amplifier);

	void on();		//켜기
	void off();		//끄기
	void setAm();	//라디오를 AM 채널로 맞춤
	void setFm();	//라디오를 FM 채널로 맞춤
	void setFrequency(float frequency);	//주파수 설정
	
private:
	Amplifier * amplifiler;
};

