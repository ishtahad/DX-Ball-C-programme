# include "iGraphics.h"

int ball_x=250, ball_y=75;
int rect_x, rect_y;
int dx, dy;
int tru,start;
void iDraw()
{	

	iClear();

	//iLine(10, 20, 100, 120);
	//iCircle(100, 200, 10);
	
	iSetColor(250, 100, 20);
	iRectangle(0, 500, 55, 10);
	iSetColor(50, 250, 20);
	iRectangle(55, 510, 55, 10);
	iSetColor(250, 100, 200);
	iRectangle(110, 500, 55, 10);


	iSetColor(250, 100, 20);
	iRectangle(165, 490, 55, 10);
	iSetColor(50, 250, 20);
	iRectangle(220, 500, 55, 10);
	iSetColor(250, 100, 200);
	iRectangle(275, 490, 55, 10);


	iSetColor(250, 100, 20);
	iRectangle(330, 500, 55, 10);
	iSetColor(50, 250, 20);
	iRectangle(385, 510, 55, 10);
	iSetColor(250, 100, 200);
	iRectangle(440, 500, 55, 10);


	iSetColor(250, 100, 20);
	iRectangle(495, 490, 55, 10);
	iSetColor(50, 250, 20);
	iRectangle(550, 500, 55, 10);


	
	iSetColor(200, 20, 50);
	iFilledRectangle(rect_x, rect_y, 100, 10);
	


	iSetColor(20, 100, 250);
	iFilledCircle(ball_x, ball_y, 6);
	
	
	//iSetColor(205, 155, 175);
	//iText(10, 10, "         PHG                      SHG                      CHG  ",GLUT_BITMAP_TIMES_ROMAN_24);
}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'p')
	{
		//do something with 'q'
		iPauseTimer(0);
	}
	if(key == 'r')
	{
		iResumeTimer(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{
	


	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}

	if(key == GLUT_KEY_RIGHT){
		if(rect_x <= 605-100 )rect_x = rect_x+18;
		//rect_y = rect_y+5;

		
	}

	if(key == GLUT_KEY_LEFT){
		if(rect_x > 0 )rect_x = rect_x-18;
		//rect_y = rect_y-5;
		
	}

	if(key == GLUT_KEY_UP&&tru==1)
	{
		start = 1;
	}
	
}

void ballChange(){
	
	if(start == 1){
		ball_x += dx;
		ball_y += dy;
	}
	if(ball_x > 605 || ball_x < 0)dx = -dx;
	if(ball_y > 600-60 || ball_y < 60)dy = -dy;
}
/*
void rectChange(){
	
	rect_x += dx;
	rect_x=40;
	if(rect_x > 800 || rect_x < 0)dx = -dx;

	rect_y += dy;
	rect_y=100;
	if(rect_y > 600 || rect_y < 0)dy = -dy;

} 
*/

int main()
{
	//place your own initialization codes here. 
	iSetTimer(15, ballChange);
	//iSetTimer(25, rectChange);
	
	dx = 5;
	dy = 7;

	tru = 1;

	rect_x=200;
	rect_y=60;
	
	iInitialize(605, 600, "BallDemo");
	return 0;
}	