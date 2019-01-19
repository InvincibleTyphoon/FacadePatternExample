#include "Tuner.h"



Tuner::Tuner(Amplifier * amplifier)
{
	this->amplifiler = amplifier;
}

void Tuner::on()
{
	cout << "Æ©³Ê ÄÕ´Ï´Ù" << endl;

}

void Tuner::off()
{
	cout << "Æ©³Ê ²ü´Ï´Ù." << endl;
}

void Tuner::setAm()
{
	cout << "Æ©³Ê AM Ã¤³Î¿¡ ¸ÂÃä´Ï´Ù." << endl;
}

void Tuner::setFm()
{
	cout << "Æ©³Ê Fm Ã¤³Î¿¡ ¸ÂÃä´Ï´Ù." << endl;
}

void Tuner::setFrequency(float frequency)
{
	cout << "ÁÖÆÄ¼ö : " << frequency << endl;
}