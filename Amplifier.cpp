#include "Amplifier.h"



Amplifier::Amplifier()
{
}


void Amplifier::on()
{
	cout << "앰프 켭니다." << endl;
}

void Amplifier::off()
{
	cout << "앰프 꺼집니다." << endl;
}

void Amplifier::setDvd(DvdPlayer * dvdPlayer)
{
	this->dvdPlayer = dvdPlayer;
}

void Amplifier::setStereoSound()
{
	cout << "스테레오 모드로 전환합니다." << endl;
}

void Amplifier::setSurroundSound()
{
	cout << "서라운드 모드로 전환합니다." << endl;
}

void Amplifier::setTuner(Tuner * tuner)
{
	this->tuner = tuner;
}

void Amplifier::setVolume(int volume)
{
	cout << "볼륨 변경 : " << volume << endl;
}