#include "Amplifier.h"



Amplifier::Amplifier()
{
}


void Amplifier::on()
{
	cout << "���� �մϴ�." << endl;
}

void Amplifier::off()
{
	cout << "���� �����ϴ�." << endl;
}

void Amplifier::setDvd(DvdPlayer * dvdPlayer)
{
	this->dvdPlayer = dvdPlayer;
}

void Amplifier::setStereoSound()
{
	cout << "���׷��� ���� ��ȯ�մϴ�." << endl;
}

void Amplifier::setSurroundSound()
{
	cout << "������ ���� ��ȯ�մϴ�." << endl;
}

void Amplifier::setTuner(Tuner * tuner)
{
	this->tuner = tuner;
}

void Amplifier::setVolume(int volume)
{
	cout << "���� ���� : " << volume << endl;
}