#pragma once
#include <iostream>
#include "Amplifier.h"

class Amplifier;

//DVD �÷��̾�
class DvdPlayer
{
public:
	DvdPlayer();
	void on();		//�ѱ�
	void off();		//����	
	void eject();	//DVD ����
	void pause();	//�Ͻ� ����
	void play();	//DVD ����
	void setStereoAudio();	//����� ����� ���׷����� ����
	void setTwoChannelAudio();	//����� ����� ������� ����
	void stop();

private:
	Amplifier * amplifier;
};

