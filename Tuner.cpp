#include "Tuner.h"



Tuner::Tuner(Amplifier * amplifier)
{
	this->amplifiler = amplifier;
}

void Tuner::on()
{
	cout << "Ʃ�� �մϴ�" << endl;

}

void Tuner::off()
{
	cout << "Ʃ�� ���ϴ�." << endl;
}

void Tuner::setAm()
{
	cout << "Ʃ�� AM ä�ο� ����ϴ�." << endl;
}

void Tuner::setFm()
{
	cout << "Ʃ�� Fm ä�ο� ����ϴ�." << endl;
}

void Tuner::setFrequency(float frequency)
{
	cout << "���ļ� : " << frequency << endl;
}