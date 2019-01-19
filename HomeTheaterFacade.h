#pragma once
#include "Amplifier.h"
#include "DvdPlayer.h"
#include "PopcornPopper.h"
#include "Projector.h"
#include "Screen.h"
#include "Tuner.h"

//���� ����, ��ȭ ���� �۾��� ���� �ۻ�� Ŭ����
class HomeTheaterFacade
{
public:
	HomeTheaterFacade(Amplifier * amplifier,
		DvdPlayer * dvdPlayer,
		PopcornPopper * popcornPopper,
		Projector * projectorm,
		Screen * screen,
		Tuner * tuner);
	void watchMovie();		//��ȭ ����
	void endMovie();		//��ȭ ���� ����
	void listenToRadio();	//���� ����
	void endRadio();		//���� ���� ����

private:
	Amplifier * amplifier;
	DvdPlayer * dvdPlayer;
	PopcornPopper * popcornPopper;
	Projector * projector;
	Screen * screen;
	Tuner * tuner;
};

