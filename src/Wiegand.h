#ifndef _WIEGAND_H
#define _WIEGAND_H



class WIEGAND {

public:
	WIEGAND();
	void begin();
	void begin(int pinD0, int pinD1);
	bool available();
	unsigned long getCode();
	int getWiegandType();

private:
	static void ReadD0();
	static void ReadD1();
	static bool DoWiegandConversion ();
	static unsigned long GetCardId (volatile unsigned long *codehigh, volatile unsigned long *codelow, char bitlength);

	static volatile unsigned long 	_cardTempHigh;
	static volatile unsigned long 	_cardTemp;
	static volatile unsigned long 	_lastWiegand;
	static volatile int				_bitCount;	
	static int				_wiegandType;
	static unsigned long	_code;
};

#endif
