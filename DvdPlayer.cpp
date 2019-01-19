#include "DvdPlayer.h"



DvdPlayer::DvdPlayer()
{
}

void DvdPlayer::on()
{
	cout << "DVD 플레이어 켭니다." << endl;
}

void DvdPlayer::off()
{
	cout << "DVD 플레이어 끕니다." << endl;
}

void DvdPlayer::eject()
{
	cout << "DVD 꺼냅니다." << endl;
}

void DvdPlayer::pause()
{
	cout << "DVD 플레이어 일시 정지." << endl;
}

void DvdPlayer::play()
{
	cout << "DVD 플레이어 재생" << endl;
}

void DvdPlayer::setStereoAudio()
{
	this->amplifier->setStereoSound();
}

void DvdPlayer::setTwoChannelAudio()
{
	this->amplifier->setSurroundSound();
}

void DvdPlayer::stop()
{
	cout << "DVD 플레이어 일시 정지" << endl;
}