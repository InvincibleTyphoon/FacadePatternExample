#pragma once
#include <iostream>
#include "DvdPlayer.h"

using namespace std;

//�� ��������
class Projector
{
public:
	Projector();
	void on();			//�ѱ�
	void off();			//����
	void tvMode();		//TV���� ��ȯ
	void wideScreenMode();	//���̵� ��ũ�� ���� ��ȯ

private:
	DvdPlayer * dvdPlayer;
};

