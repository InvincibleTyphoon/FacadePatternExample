#include "DvdPlayer.h"



DvdPlayer::DvdPlayer()
{
}

void DvdPlayer::on()
{
	cout << "DVD �÷��̾� �մϴ�." << endl;
}

void DvdPlayer::off()
{
	cout << "DVD �÷��̾� ���ϴ�." << endl;
}

void DvdPlayer::eject()
{
	cout << "DVD �����ϴ�." << endl;
}

void DvdPlayer::pause()
{
	cout << "DVD �÷��̾� �Ͻ� ����." << endl;
}

void DvdPlayer::play()
{
	cout << "DVD �÷��̾� ���" << endl;
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
	cout << "DVD �÷��̾� �Ͻ� ����" << endl;
}