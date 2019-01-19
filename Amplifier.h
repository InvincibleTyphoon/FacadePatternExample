#pragma once
#include <iostream>
#include "Tuner.h"
#include "DvdPlayer.h"

using namespace std;

class DvdPlayer;
class Tuner;

//���� �����
class Amplifier
{
public:
	Amplifier();
	void on();	//�ѱ�
	void off();	//����
	void setDvd(DvdPlayer * dvdPlayer);	//DVD �÷��̾� ����
	void setStereoSound();			//�Ҹ� ����� ���׷����� ����
	void setSurroundSound();		//�Ҹ� ����� ������� ����
	void setTuner(Tuner * tuner);	//Ʃ��(����) ����
	void setVolume(int volume);		//���� ����
private:
	Tuner * tuner;				//����� Ʃ��(����)
	DvdPlayer * dvdPlayer;		//����� DVD �÷��̾�
};

