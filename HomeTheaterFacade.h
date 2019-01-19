#pragma once
#include "Amplifier.h"
#include "DvdPlayer.h"
#include "PopcornPopper.h"
#include "Projector.h"
#include "Screen.h"
#include "Tuner.h"

//라디오 감상, 영화 감상 작업에 대한 퍼사드 클래스
class HomeTheaterFacade
{
public:
	HomeTheaterFacade(Amplifier * amplifier,
		DvdPlayer * dvdPlayer,
		PopcornPopper * popcornPopper,
		Projector * projectorm,
		Screen * screen,
		Tuner * tuner);
	void watchMovie();		//영화 감상
	void endMovie();		//영화 감상 종료
	void listenToRadio();	//라디오 감상
	void endRadio();		//라디오 감상 종료

private:
	Amplifier * amplifier;
	DvdPlayer * dvdPlayer;
	PopcornPopper * popcornPopper;
	Projector * projector;
	Screen * screen;
	Tuner * tuner;
};

