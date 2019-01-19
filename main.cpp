#include <iostream>
#include "HomeTheaterFacade.h"
#include "Amplifier.h"
#include "DvdPlayer.h"
#include "PopcornPopper.h"
#include "Projector.h"
#include "Screen.h"
#include "Tuner.h"

int main()
{
	Amplifier amp;
	DvdPlayer dvdPlayer;
	PopcornPopper popper;
	Projector projector;
	Screen screen;
	Tuner tuner(&amp);

	HomeTheaterFacade facade(&amp, &dvdPlayer, &popper, &projector, &screen, &tuner);
	facade.watchMovie();
	facade.endMovie();

	return 0;
}