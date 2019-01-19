#pragma once
#include <iostream>
#include "Amplifier.h"

using namespace std;

class Amplifier;

//Ʃ��(����)
class Tuner
{
public:
	Tuner(Amplifier * amplifier);

	void on();		//�ѱ�
	void off();		//����
	void setAm();	//������ AM ä�η� ����
	void setFm();	//������ FM ä�η� ����
	void setFrequency(float frequency);	//���ļ� ����
	
private:
	Amplifier * amplifiler;
};

