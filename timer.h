#ifndef TIMER_H
#define TIMER_H

class timer
{
public:
	timer();
	timer(int delay);
	timer(int delay, bool seconds);
	operator bool() const;
	void delay();
private:
	int tick;
	int wait;
	int pdelay;
};

#endif
