#include <time.h>
#include <timer.h>

timer::timer()
{
	this->tick = this->wait = 0;
}
timer::timer(int delay)
{
	this->pdelay = delay;
}
timer::timer(int delay, bool seconds)
{
	this->pdelay = (seconds) ? (delay * 1000) : delay;
}
timer::operator bool() const
{
	return ((clock() - this->tick) > this->wait);
}
void timer::delay()
{
	this->tick = clock(); this->wait = this->pdelay;
}
