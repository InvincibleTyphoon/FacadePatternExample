#include "HomeTheaterFacade.h"



HomeTheaterFacade::HomeTheaterFacade(
	Amplifier * amplifier,
	DvdPlayer * dvdPlayer,
	PopcornPopper * popcornPopper,
	Projector * projector,
	Screen * screen,
	Tuner * tuner)
{
	this->amplifier = amplifier;
	this->dvdPlayer = dvdPlayer;
	this->popcornPopper = popcornPopper;
	this->projector = projector;
	this->screen = screen;
	this->tuner = tuner;
}

void HomeTheaterFacade::watchMovie()
{
	cout << "��ȭ���� ��� ����" << endl;
	this->popcornPopper->on();
	this->popcornPopper->pop();
	this->projector->on();
	this->projector->wideScreenMode();
	this->amplifier->on();
	this->amplifier->setDvd(this->dvdPlayer);
	this->amplifier->setSurroundSound();
	this->amplifier->setVolume(5);
	this->dvdPlayer->on();
	this->dvdPlayer->off();
}

void HomeTheaterFacade::endMovie()
{
	cout << "��ȭ ����" << endl;
	this->popcornPopper->off();
	this->screen->up();
	this->projector->off();
	this->amplifier->off();
	this->dvdPlayer->stop();
	this->dvdPlayer->eject();
	this->dvdPlayer->off();
}

void HomeTheaterFacade::listenToRadio()
{
	cout << "���� ��� ����" << endl;
}

void HomeTheaterFacade::endRadio()
{
	cout << "���� ����" << endl;
}