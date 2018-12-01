/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"

int ball_x, ball_y;
int dx, dy, bar_x;
int brick_x, brick_y;
int color_1_1, color_1_2, color_1_3, color_2_1, color_2_2, color_2_3, color_3_1, color_3_2, color_3_3, color_4_1, color_4_2, color_4_3, color_5_1, color_5_2, color_5_3, color_6_1, color_6_2, color_6_3, color_7_1, color_7_2, color_7_3, color_1_1_2, color_1_2_2, color_1_3_2, color_2_1_2, color_2_2_2, color_2_3_2, color_3_1_2, color_3_2_2, color_3_3_2, color_4_1_2, color_4_2_2, color_4_3_2, color_5_1_2, color_5_2_2, color_5_3_2, color_6_1_2, color_6_2_2, color_6_3_2, color_7_1_2, color_7_2_2, color_7_3_2, color_1_1_3, color_1_2_3, color_1_3_3, color_2_1_3, color_2_2_3, color_2_3_3, color_3_1_3, color_3_2_3, color_3_3_3, color_4_1_3, color_4_2_3, color_4_3_3, color_5_1_3, color_5_2_3, color_5_3_3, color_6_1_3, color_6_2_3, color_6_3_3, color_7_1_3, color_7_2_3, color_7_3_3, color_1_1_4, color_1_2_4, color_1_3_4, color_2_1_4, color_2_2_4, color_2_3_4, color_3_1_4, color_3_2_4, color_3_3_4, color_4_1_4, color_4_2_4, color_4_3_4, color_5_1_4, color_5_2_4, color_5_3_4, color_6_1_4, color_6_2_4, color_6_3_4, color_7_1_4, color_7_2_4, color_7_3_4;
int tru, start, level;
int box1color1, box1color2, box1color3;
int score, life;

void ins(){
	iText(10,490,"Press up arrow key to start the game.", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(10,450,"Press left arrow key to move the bar left.", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(10,410,"Press right arrow key to move the bar right.", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(10,370,"Press 'q' to exit.", GLUT_BITMAP_TIMES_ROMAN_24);
}

void game_over(){
	if(life==0){
		tru=4;
	}
}

void scoreboard(int s, int l){

	char string1[6];
	char string2[2];
	//settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
	//iText(330+10,440-15,"Start Game", GLUT_BITMAP_TIMES_ROMAN_24);


	itoa(s,string1,10);
	itoa(l,string2,10);

	iSetColor(255, 0, 0);

	//iCircle(100,500, 100);
	iText(10,580,"SCORE",GLUT_BITMAP_9_BY_15);
	iText(10,560,"LIFE", GLUT_BITMAP_9_BY_15);

	//iSetColor(255, 255, 255);
//iRectangle(64,374,50,25);

	iSetColor(255, 0, 0);
	iText(70,580, string1,GLUT_BITMAP_9_BY_15 );
	iText(70,560, string2,GLUT_BITMAP_9_BY_15 );


	//settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
	//outtextxy(475,80, string);
	iSetColor(255, 255, 255);
	}


void startmenu()
{
	//iRectangle(0,0,800,600);
	//iRectangle(300,400,80,70);
	//iRectangle(300,400,100,70);

iSetColor(255,255,0);//yellow
	iRectangle(300,100,250,430);//box

	//iSetColor(b1c1, b1c2, b1c3);
	//iFilledRectangle(325,430,200,40);//inbox

	//	iSetColor(255,0,0);

	//	iRectangle(325,380,200,40);
	//	iRectangle(325,330,200,40);
	//		iRectangle(325,280,200,40);
//
//		iRectangle(325,230,200,40);
//		
//		iRectangle(325,180,200,40);
//		
//		iRectangle(325,120,200,40);
//
//		iSetColor(255,255,0);//yellow
		
iText(380,490,"MENU", GLUT_BITMAP_TIMES_ROMAN_24);

iText(330,440,"Start Game", GLUT_BITMAP_TIMES_ROMAN_24);

iText(330,390,"Instructions", GLUT_BITMAP_TIMES_ROMAN_24);

iText(330,340,"Exit", GLUT_BITMAP_TIMES_ROMAN_24);

//iText(330,290,"Setting", GLUT_BITMAP_TIMES_ROMAN_24);

//iText(330,240,"Instruction", GLUT_BITMAP_TIMES_ROMAN_24);

//iText(330,190,"About", GLUT_BITMAP_TIMES_ROMAN_24);

//iText(330,130,"Exit", GLUT_BITMAP_TIMES_ROMAN_24);
}

void level1(int c_1_1, int c_1_2, int c_1_3, int c_2_1, int c_2_2, int c_2_3, int c_3_1, int c_3_2, int c_3_3, int c_4_1, int c_4_2, int c_4_3, int c_5_1, int c_5_2, int c_5_3, int c_6_1, int c_6_2, int c_6_3, int c_7_1, int c_7_2, int c_7_3, int c_1_1_2, int c_1_2_2, int c_1_3_2, int c_2_1_2, int c_2_2_2, int c_2_3_2, int c_3_1_2, int c_3_2_2, int c_3_3_2, int c_4_1_2, int c_4_2_2, int c_4_3_2, int c_5_1_2, int c_5_2_2, int c_5_3_2, int c_6_1_2, int c_6_2_2, int c_6_3_2, int c_7_1_2, int c_7_2_2, int c_7_3_2, int c_1_1_3, int c_1_2_3, int c_1_3_3, int c_2_1_3, int c_2_2_3, int c_2_3_3, int c_3_1_3, int c_3_2_3, int c_3_3_3, int c_4_1_3, int c_4_2_3, int c_4_3_3, int c_5_1_3, int c_5_2_3, int c_5_3_3, int c_6_1_3, int c_6_2_3, int c_6_3_3, int c_7_1_3, int c_7_2_3, int c_7_3_3, int c_1_1_4, int c_1_2_4, int c_1_3_4, int c_2_1_4, int c_2_2_4, int c_2_3_4, int c_3_1_4, int c_3_2_4, int c_3_3_4, int c_4_1_4, int c_4_2_4, int c_4_3_4, int c_5_1_4, int c_5_2_4, int c_5_3_4, int c_6_1_4, int c_6_2_4, int c_6_3_4, int c_7_1_4, int c_7_2_4, int c_7_3_4){

	iSetColor(c_4_1, c_4_2, c_4_3); //brick 4
	iFilledRectangle(brick_x-70-70, brick_y-50-50-50,70,50);

	iSetColor(c_3_1, c_3_2, c_3_3); //brick 3
	iFilledRectangle(brick_x-70, brick_y-50-50-50,70,50);

	iSetColor(c_2_1, c_2_2, c_2_3); // brick 2
	iFilledRectangle(brick_x, brick_y-50-50-50,70,50);

	iSetColor(c_1_1, c_1_2, c_1_3); // brick 1
	iFilledRectangle(brick_x+70, brick_y-50-50-50,70,50);

	iSetColor(c_5_1, c_5_2, c_5_3); //brick 5
	iFilledRectangle(brick_x+70+70, brick_y-50-50-50,70,50);

	iSetColor(c_6_1, c_6_2, c_6_3); //brick 6
	iFilledRectangle(brick_x+70+70+70, brick_y-50-50-50,70,50);

	iSetColor(c_7_1, c_7_2, c_7_3); //brick 7
	iFilledRectangle(brick_x+70+70+70+70, brick_y-50-50-50,70,50);

	
	
	iSetColor(c_4_1_2, c_4_2_2, c_4_3_2); //brick 4_2
	iFilledRectangle(brick_x-70-70, brick_y-50-50,70,50);

	iSetColor(c_3_1_2, c_3_2_2, c_3_3_2); //brick 3_2
	iFilledRectangle(brick_x-70, brick_y-50-50,70,50);

	iSetColor(c_2_1_2, c_2_2_2, c_2_3_2); // brick 2_2
	iFilledRectangle(brick_x, brick_y-50-50,70,50);

	iSetColor(c_1_1_2, c_1_2_2, c_1_3_2); // brick 1_2
	iFilledRectangle(brick_x+70, brick_y-50-50,70,50);

	iSetColor(c_5_1_2, c_5_2_2, c_5_3_2); //brick 5_2
	iFilledRectangle(brick_x+70+70, brick_y-50-50,70,50);

	iSetColor(c_6_1_2, c_6_2_2, c_6_3_2); //brick 6_2
	iFilledRectangle(brick_x+70+70+70, brick_y-50-50,70,50);

	iSetColor(c_7_1_2, c_7_2_2, c_7_3_2); //brick 7_2
	iFilledRectangle(brick_x+70+70+70+70, brick_y-50-50,70,50);


	iSetColor(c_4_1_3, c_4_2_3, c_4_3_3); //brick 4_3
	iFilledRectangle(brick_x-70-70, brick_y-50,70,50);

	iSetColor(c_3_1_3, c_3_2_3, c_3_3_3); //brick 3_3
	iFilledRectangle(brick_x-70, brick_y-50,70,50);

	iSetColor(c_2_1_3, c_2_2_3, c_2_3_3); // brick 2_3
	iFilledRectangle(brick_x, brick_y-50,70,50);

	iSetColor(c_1_1_3, c_1_2_3, c_1_3_3); // brick 1_3
	iFilledRectangle(brick_x+70, brick_y-50,70,50);

	iSetColor(c_5_1_3, c_5_2_3, c_5_3_3); //brick 5_3
	iFilledRectangle(brick_x+70+70, brick_y-50,70,50);

	iSetColor(c_6_1_3, c_6_2_3, c_6_3_3); //brick 6_3
	iFilledRectangle(brick_x+70+70+70, brick_y-50,70,50);

	iSetColor(c_7_1_3, c_7_2_3, c_7_3_3); //brick 7_3
	iFilledRectangle(brick_x+70+70+70+70, brick_y-50,70,50);

	
	
	iSetColor(c_4_1_4, c_4_2_4, c_4_3_4); //brick 4_4
	iFilledRectangle(brick_x-70-70, brick_y,70,50);

	iSetColor(c_3_1_4, c_3_2_4, c_3_3_4); //brick 3_4
	iFilledRectangle(brick_x-70, brick_y,70,50);

	iSetColor(c_2_1_4, c_2_2_4, c_2_3_4); // brick 2_4
	iFilledRectangle(brick_x, brick_y,70,50);

	iSetColor(c_1_1_4, c_1_2_4, c_1_3_4); // brick 1_4
	iFilledRectangle(brick_x+70, brick_y,70,50);

	iSetColor(c_5_1_4, c_5_2_4, c_5_3_4); //brick 5_4
	iFilledRectangle(brick_x+70+70, brick_y,70,50);

	iSetColor(c_6_1_4, c_6_2_4, c_6_3_4); //brick 6_4
	iFilledRectangle(brick_x+70+70+70, brick_y,70,50);

	iSetColor(c_7_1_4, c_7_2_4, c_7_3_4); //brick 7_4
	iFilledRectangle(brick_x+70+70+70+70, brick_y,70,50);

	
}

/*void level2()

{
  //middle large brickbar only
    iRectangle(190,280,70,50);
	  iRectangle(260,280,70,50);
	    iRectangle(330,280,70,50);
		  iRectangle(400,280,70,50); 
		  iRectangle(470,280,70,50);
		    iRectangle(540,280,70,50);
			  

//down paart 1

			 // iRectangle(190,230,70,50);
	  iRectangle(260,230,70,50);
	    iRectangle(330,230,70,50);
		  iRectangle(400,230,70,50); 
		  iRectangle(470,230,70,50);
		    //iRectangle(540,230,70,50);


		  //down 3rd 

		  iRectangle(330,180,70,50);
		  iRectangle(400,180,70,50);

		  iRectangle(365,130,70,50);//last down part one


//up part 1

		  iRectangle(260,330,70,50);
	    iRectangle(330,330,70,50);
		  iRectangle(400,330,70,50); 
		  iRectangle(470,330,70,50);

		  //up part 2

		   iRectangle(330,380,70,50);
		  iRectangle(400,380,70,50);


		 

		  iRectangle(365,430,70,50);//first up part one

// left  up  brick

		  iRectangle(5,500,70,50);
		  iRectangle(5,450,70,50);
		  iRectangle(5,400,70,50);



		  iRectangle(75,500,70,50);
		   iRectangle(145,500,70,50);

		   //right up brick

		   
		  iRectangle(725,500,70,50);
		  iRectangle(725,450,70,50);
		  iRectangle(725,400,70,50);


 iRectangle(655,500,70,50);
 
 iRectangle(585,500,70,50);



 //left down brick
 iRectangle(5,200,70,50);
		  iRectangle(5,150,70,50);
		  iRectangle(5,100,70,50);

		  iRectangle(75,100,70,50);
		  iRectangle(145,100,70,50);


		  //iright down brick


		    iRectangle(725,200,70,50);
		  iRectangle(725,150,70,50);
		  iRectangle(725,100,70,50);

		  iRectangle(655,100,70,50);
		  iRectangle(585,100,70,50);


}*/

void game(){

	if(start==0){

	iSetColor(255, 255, 255);
	iText(10, 10, "Press up arrow key to continue");
	}

	level1(color_1_1, color_1_2, color_1_3, color_2_1, color_2_2, color_2_3, color_3_1, color_3_2, color_3_3, color_4_1, color_4_2, color_4_3, color_5_1, color_5_2, color_5_3, color_6_1, color_6_2, color_6_3, color_7_1, color_7_2, color_7_3, color_1_1_2, color_1_2_2, color_1_3_2, color_2_1_2, color_2_2_2, color_2_3_2, color_3_1_2, color_3_2_2, color_3_3_2, color_4_1_2, color_4_2_2, color_4_3_2, color_5_1_2, color_5_2_2, color_5_3_2, color_6_1_2, color_6_2_2, color_6_3_2, color_7_1_2, color_7_2_2, color_7_3_2, color_1_1_3, color_1_2_3, color_1_3_3, color_2_1_3, color_2_2_3, color_2_3_3, color_3_1_3, color_3_2_3, color_3_3_3, color_4_1_3, color_4_2_3, color_4_3_3, color_5_1_3, color_5_2_3, color_5_3_3, color_6_1_3, color_6_2_3, color_6_3_3, color_7_1_3, color_7_2_3, color_7_3_3, color_1_1_4, color_1_2_4, color_1_3_4, color_2_1_4, color_2_2_4, color_2_3_4, color_3_1_4, color_3_2_4, color_3_3_4, color_4_1_4, color_4_2_4, color_4_3_4, color_5_1_4, color_5_2_4, color_5_3_4, color_6_1_4, color_6_2_4, color_6_3_4, color_7_1_4, color_7_2_4, color_7_3_4);

	if(color_1_1 == 0 && color_2_1 == 0 && color_3_1 == 0 && color_4_1 == 0 && color_5_1 == 0 && color_6_1 == 0 && color_7_1 == 0 && color_1_1_2 == 0 && color_2_1_2 == 0 && color_3_1_2 == 0 && color_4_1_2 == 0 && color_5_1_2 == 0 && color_6_1_2 == 0 && color_7_1_2 == 0 && color_1_1_3 == 0 && color_2_1_3 == 0 &&  color_3_1_3 == 0 && color_4_1_3 == 0 && color_5_1_3 == 0 && color_6_1_3 == 0 && color_7_1_3 == 0 && color_1_1_4 == 0 && color_3_1_4 == 0 && color_4_1_4 == 0 && color_5_1_4 == 0 && color_6_1_4 == 0 && color_7_1_4 == 0){
		tru=4;
		}

		/*if(start==0){
			iSetColor(255, 255, 255);
			iText(10, 10, "Press up arrow key to start the game. Press left and right arrow keys to move the bar.");
		}

		iSetColor(255, 255, 255);

		level2();
	}*/

	iSetColor(255, 100, 10);
	iFilledCircle(ball_x, ball_y, 5); //ball

	
	iRectangle(bar_x, 50, 100, 10); //bar

	if(ball_y < 10){
		life--;
		start=0;
		ball_x = 350;
		ball_y = 70;
	//dx = 5;
	//dy = 7;
		bar_x=300;
		//iSetColor(255, 255, 255);
	//iText(10, 10, "Press up arrow key to continue");
		/*iPauseTimer(0);
		iSetColor(255, 255, 255);
		iText(10, 10, "You really suck at this game. You should stop playing and hang yourself.");*/
	}

	scoreboard(score, life);
	game_over();

}
/* 

	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here	

	iClear();


	if(tru==0){
		startmenu();
	}

	if(tru==1){
		game();
	}

	if(tru==3){
		ins();
	}

	if(tru==4){
		iText(300,400,"GAME OVER", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(10, 10, "press 'q' to exit.");
	}


	
	


	
	
}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here

	/*if( mx >= 325 && mx <= 325 + 200 && my >= 430 && my<= 430 + 40 && tru == 0){
			box1color1=0;
			box1color2=0;
			box1color3=255;
	}*/
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{

	//if( (mx > 325 && mx < 325 + 200)  &&  (my > 430 && my < 430 - 40) ){

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if( mx >= 325 && mx <= 325 + 200 && my >= 430 && my<= 430 + 40 && tru == 0){
			
			tru=1;

		}

		if( mx >= 325 && mx <= 325 + 200 && my >= 360 && my<= 360 + 40 && tru == 0){
			
			tru=3;

		}
		if(mx>=325 && mx<=525 && my>=320 && my<=360 && tru == 0){
		
			exit(0);
		}
	}
	//}
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
	
		//do something with 'q'
		//iPauseTimer(0);
	//}

	if(key == 'q'){
		tru=0;

		ball_x = 350;
	ball_y = 70;
	dx = 5;
	dy = 7;
	bar_x=300;

	tru=0;

	box1color1=255;
	box1color2=0;
	box1color3=0;

	brick_x=300;
	brick_y=400;

	color_1_1=255;
	color_1_2=100;
	color_1_3=10;

	color_2_1=255;
	color_2_2=100;
	color_2_3=10;

	color_3_1=255;
	color_3_2=100;
	color_3_3=10;
	
	color_4_1=255;
	color_4_2=100;
	color_4_3=10;

	color_5_1=255;
	color_5_2=100;
	color_5_3=10;

	color_6_1=255;
	color_6_2=100;
	color_6_3=10;

	color_7_1=255;
	color_7_2=100;
	color_7_3=10;

	color_1_1_2=255;
	color_1_2_2=100;
	color_1_3_2=10;

	color_2_1_2=255;
	color_2_2_2=100;
	color_2_3_2=10;

	color_3_1_2=255;
	color_3_2_2=100;
	color_3_3_2=10;
	
	color_4_1_2=255;
	color_4_2_2=100;
	color_4_3_2=10;

	color_5_1_2=255;
	color_5_2_2=100;
	color_5_3_2=10;

	color_6_1_2=255;
	color_6_2_2=100;
	color_6_3_2=10;

	color_7_1_2=255;
	color_7_2_2=100;
	color_7_3_2=10;

	color_1_1_3=255;
	color_1_2_3=100;
	color_1_3_3=10;

	color_2_1_3=255;
	color_2_2_3=100;
	color_2_3_3=10;

	color_3_1_3=255;
	color_3_2_3=100;
	color_3_3_3=10;
	
	color_4_1_3=255;
	color_4_2_3=100;
	color_4_3_3=10;

	color_5_1_3=255;
	color_5_2_3=100;
	color_5_3_3=10;

	color_6_1_3=255;
	color_6_2_3=100;
	color_6_3_3=10;

	color_7_1_3=255;
	color_7_2_3=100;
	color_7_3_3=10;

	color_1_1_4=255;
	color_1_2_4=100;
	color_1_3_4=10;

	color_2_1_4=255;
	color_2_2_4=100;
	color_2_3_4=10;

	color_3_1_4=255;
	color_3_2_4=100;
	color_3_3_4=10;
	
	color_4_1_4=255;
	color_4_2_4=100;
	color_4_3_4=10;

	color_5_1_4=255;
	color_5_2_4=100;
	color_5_3_4=10;

	color_6_1_4=255;
	color_6_2_4=100;
	color_6_3_4=10;

	color_7_1_4=255;
	color_7_2_4=100;
	color_7_3_4=10;

	life=3;
	score=0;
	}


	
		//iResumeTimer(0);
	//}
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

	if(key == GLUT_KEY_LEFT&&start==1)
	{
		if(bar_x>0)
			bar_x-=100;
		//do something with 'q'
		//iPauseTimer(0);
	}
	if(key == GLUT_KEY_RIGHT&&start==1)
	{
		if(bar_x<700)
			bar_x+=100;
		//iResumeTimer(0);
	}

	if(key == GLUT_KEY_UP&&tru==1)
	{
		start = 1;
	}
	//place your codes for other keys here
}

void ballChange(){
	if(start==1){
	ball_x += dx;
	ball_y += dy;
	}

	if(ball_x > 800-5 || ball_x < 5)dx = -dx;
	if(ball_y > 600-5 || ball_y < 5)dy = -dy;

	//if((ball_x > x && ball_x < x-100) && (ball_y > 50 && ball_y <60)){
	//}

	if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x-5 && ball_x <= bar_x+105))dy = -dy;// bar reaction

	

	if((ball_x > brick_x+70 && ball_x < brick_x+70+70) && (ball_y > brick_y-50-50-50 && ball_y < brick_y-50-50-50+50)){
		if(color_1_1 > 0 && color_1_2 > 0 && color_1_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_1_1=0;
		color_1_2=0;
		color_1_3=0;
		//score+=10;
	}

	if((ball_x > brick_x && ball_x < brick_x+70) && (ball_y > brick_y-50-50-50 && ball_y < brick_y-50-50-50+50)){
		if(color_2_1 > 0 && color_2_2 > 0 && color_2_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_2_1=0;
		color_2_2=0;
		color_2_3=0;
		//score+=10;
	}

	if((ball_x > brick_x-70 && ball_x < brick_x-70+70) && (ball_y > brick_y-50-50-50 && ball_y < brick_y-50-50-50+50)){
		if(color_3_1 > 0 && color_3_2 > 0 && color_3_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_3_1=0;
		color_3_2=0;
		color_3_3=0;
		//score+=10;
	}

	if((ball_x > brick_x-70-70 && ball_x < brick_x-70-70+70) && (ball_y > brick_y-50-50-50 && ball_y < brick_y-50-50-50+50)){
		if(color_4_1 > 0 && color_4_2 > 0 && color_4_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_4_1=0;
		color_4_2=0;
		color_4_3=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70 && ball_x < brick_x+70+70+70) && (ball_y > brick_y-50-50-50 && ball_y < brick_y-50-50-50+50)){
		if(color_5_1 > 0 && color_5_2 > 0 && color_5_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_5_1=0;
		color_5_2=0;
		color_5_3=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70+70 && ball_x < brick_x+70+70+70+70) && (ball_y > brick_y-50-50-50 && ball_y < brick_y-50-50-50+50)){
		if(color_6_1 > 0 && color_6_2 > 0 && color_6_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_6_1=0;
		color_6_2=0;
		color_6_3=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70+70+70 && ball_x < brick_x+70+70+70+70+70) && (ball_y > brick_y-50-50-50 && ball_y < brick_y-50-50-50+50)){
		if(color_7_1 > 0 && color_7_2 > 0 && color_7_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_7_1=0;
		color_7_2=0;
		color_7_3=0;
		//score+=10;
	}



	if((ball_x > brick_x+70 && ball_x < brick_x+70+70) && (ball_y > brick_y-50-50 && ball_y < brick_y-50-50+50)){
		if(color_1_1_2 > 0 && color_1_2_2 > 0 && color_1_3_2 > 0){
			dy = -dy;
			score+=10;
		}
		color_1_1_2=0;
		color_1_2_2=0;
		color_1_3_2=0;
		//score+=10;
	}

	if((ball_x > brick_x && ball_x < brick_x+70) && (ball_y > brick_y-50-50 && ball_y < brick_y-50-50+50)){
		if(color_2_1_2 > 0 && color_2_2_2 > 0 && color_2_3_2 > 0){
			dy = -dy;
			score+=10;
		}
		color_2_1_2=0;
		color_2_2_2=0;
		color_2_3_2=0;
		//score+=10;
	}

	if((ball_x > brick_x-70 && ball_x < brick_x-70+70) && (ball_y > brick_y-50-50 && ball_y < brick_y-50-50+50)){
		if(color_3_1_2 > 0 && color_3_2_2 > 0 && color_3_3_2 > 0){
			dy = -dy;
			score+=10;
		}
		color_3_1_2=0;
		color_3_2_2=0;
		color_3_3_2=0;
		//score+=10;
	}

	if((ball_x > brick_x-70-70 && ball_x < brick_x-70-70+70) && (ball_y > brick_y-50-50 && ball_y < brick_y-50-50+50)){
		if(color_4_1_2 > 0 && color_4_2_2 > 0 && color_4_3_2 > 0){
			dy = -dy;
			score+=10;
		}
		color_4_1_2=0;
		color_4_2_2=0;
		color_4_3_2=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70 && ball_x < brick_x+70+70+70) && (ball_y > brick_y-50-50 && ball_y < brick_y-50-50+50)){
		if(color_5_1_2 > 0 && color_5_2_2 > 0 && color_5_3_2 > 0){
			dy = -dy;
			score+=10;
		}
		color_5_1_2=0;
		color_5_2_2=0;
		color_5_3_2=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70+70 && ball_x < brick_x+70+70+70+70) && (ball_y > brick_y-50-50 && ball_y < brick_y-50-50+50)){
		if(color_6_1_2 > 0 && color_6_2_2 > 0 && color_6_3_2 > 0){
			dy = -dy;
			score+=10;
		}
		color_6_1_2=0;
		color_6_2_2=0;
		color_6_3_2=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70+70+70 && ball_x < brick_x+70+70+70+70+70) && (ball_y > brick_y-50-50 && ball_y < brick_y-50-50+50)){
		if(color_7_1_2 > 0 && color_7_2_2 > 0 && color_7_3_2 > 0){
			dy = -dy;
			score+=10;
		}
		color_7_1_2=0;
		color_7_2_2=0;
		color_7_3_2=0;
		//score+=10;
	}


	if((ball_x > brick_x+70 && ball_x < brick_x+70+70) && (ball_y > brick_y-50 && ball_y < brick_y-50+50)){
		if(color_1_1_3 > 0 && color_1_2_3 > 0 && color_1_3_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_1_1_3=0;
		color_1_2_3=0;
		color_1_3_3=0;
		//score+=10;
	}

	if((ball_x > brick_x && ball_x < brick_x+70) && (ball_y > brick_y-50 && ball_y < brick_y-50+50)){
		if(color_2_1_3 > 0 && color_2_2_3 > 0 && color_2_3_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_2_1_3=0;
		color_2_2_3=0;
		color_2_3_3=0;
		//score+=10;
	}

	if((ball_x > brick_x-70 && ball_x < brick_x-70+70) && (ball_y > brick_y-50 && ball_y < brick_y-50+50)){
		if(color_3_1_3 > 0 && color_3_2_3 > 0 && color_3_3_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_3_1_3=0;
		color_3_2_3=0;
		color_3_3_3=0;
		//score+=10;
	}

	if((ball_x > brick_x-70-70 && ball_x < brick_x-70-70+70) && (ball_y > brick_y-50 && ball_y < brick_y-50+50)){
		if(color_4_1_3 > 0 && color_4_2_3 > 0 && color_4_3_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_4_1_3=0;
		color_4_2_3=0;
		color_4_3_3=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70 && ball_x < brick_x+70+70+70) && (ball_y > brick_y-50 && ball_y < brick_y-50+50)){
		if(color_5_1_3 > 0 && color_5_2_3 > 0 && color_5_3_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_5_1_3=0;
		color_5_2_3=0;
		color_5_3_3=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70+70 && ball_x < brick_x+70+70+70+70) && (ball_y > brick_y-50 && ball_y < brick_y-50+50)){
		if(color_6_1_3 > 0 && color_6_2_3 > 0 && color_6_3_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_6_1_3=0;
		color_6_2_3=0;
		color_6_3_3=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70+70+70 && ball_x < brick_x+70+70+70+70+70) && (ball_y > brick_y-50 && ball_y < brick_y-50+50)){
		if(color_7_1_3 > 0 && color_7_2_3 > 0 && color_7_3_3 > 0){
			dy = -dy;
			score+=10;
		}
		color_7_1_3=0;
		color_7_2_3=0;
		color_7_3_3=0;
		//score+=10;
	}



	if((ball_x > brick_x+70 && ball_x < brick_x+70+70) && (ball_y > brick_y && ball_y < brick_y+50)){
		if(color_1_1_4 > 0 && color_1_2_4 > 0 && color_1_3_4 > 0){
			dy = -dy;
			score+=10;
		}
		color_1_1_4=0;
		color_1_2_4=0;
		color_1_3_4=0;
		//score+=10;
	}

	if((ball_x > brick_x && ball_x < brick_x+70) && (ball_y > brick_y && ball_y < brick_y+50)){
		if(color_2_1_4 > 0 && color_2_2_4 > 0 && color_2_3_4 > 0){
			dy = -dy;
			score+=10;
		}
		color_2_1_4=0;
		color_2_2_4=0;
		color_2_3_4=0;
		//score+=10;
	}

	if((ball_x > brick_x-70 && ball_x < brick_x-70+70) && (ball_y > brick_y && ball_y < brick_y+50)){
		if(color_3_1_4 > 0 && color_3_2_4 > 0 && color_3_3_4 > 0){
			dy = -dy;
			score+=10;
		}
		color_3_1_4=0;
		color_3_2_4=0;
		color_3_3_4=0;
		//score+=10;
	}

	if((ball_x > brick_x-70-70 && ball_x < brick_x-70-70+70) && (ball_y > brick_y && ball_y < brick_y+50)){
		if(color_4_1_4 > 0 && color_4_2_4 > 0 && color_4_3_4 > 0){
			dy = -dy;
			score+=10;
		}
		color_4_1_4=0;
		color_4_2_4=0;
		color_4_3_4=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70 && ball_x < brick_x+70+70+70) && (ball_y > brick_y && ball_y < brick_y+50)){
		if(color_5_1_4 > 0 && color_5_2_4 > 0 && color_5_3_4 > 0){
			dy = -dy;
			score+=10;
		}
		color_5_1_4=0;
		color_5_2_4=0;
		color_5_3_4=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70+70 && ball_x < brick_x+70+70+70+70) && (ball_y > brick_y && ball_y < brick_y+50)){
		if(color_6_1_4 > 0 && color_6_2_4 > 0 && color_6_3_4 > 0){
			dy = -dy;
			score+=10;
		}
		color_6_1_4=0;
		color_6_2_4=0;
		color_6_3_4=0;
		//score+=10;
	}

	if((ball_x > brick_x+70+70+70+70 && ball_x < brick_x+70+70+70+70+70) && (ball_y > brick_y && ball_y < brick_y+50)){
		if(color_7_1_4 > 0 && color_7_2_4 > 0 && color_7_3_4 > 0){
			dy = -dy;
			score+=10;
		}
		color_7_1_4=0;
		color_7_2_4=0;
		color_7_3_4=0;
		//score+=10;
	}


	

	
}

int main()
{
	//place your own initialization codes here. 
	iSetTimer(30, ballChange);
	ball_x = 350;
	ball_y = 70;
	dx = 5;
	dy = 7;
	bar_x=300;

	tru=0;

	box1color1=255;
	box1color2=0;
	box1color3=0;

	brick_x=300;
	brick_y=400;

	color_1_1=255;
	color_1_2=100;
	color_1_3=10;

	color_2_1=255;
	color_2_2=100;
	color_2_3=10;

	color_3_1=255;
	color_3_2=100;
	color_3_3=10;
	
	color_4_1=255;
	color_4_2=100;
	color_4_3=10;

	color_5_1=255;
	color_5_2=100;
	color_5_3=10;

	color_6_1=255;
	color_6_2=100;
	color_6_3=10;

	color_7_1=255;
	color_7_2=100;
	color_7_3=10;

	color_1_1_2=255;
	color_1_2_2=100;
	color_1_3_2=10;

	color_2_1_2=255;
	color_2_2_2=100;
	color_2_3_2=10;

	color_3_1_2=255;
	color_3_2_2=100;
	color_3_3_2=10;
	
	color_4_1_2=255;
	color_4_2_2=100;
	color_4_3_2=10;

	color_5_1_2=255;
	color_5_2_2=100;
	color_5_3_2=10;

	color_6_1_2=255;
	color_6_2_2=100;
	color_6_3_2=10;

	color_7_1_2=255;
	color_7_2_2=100;
	color_7_3_2=10;

	color_1_1_3=255;
	color_1_2_3=100;
	color_1_3_3=10;

	color_2_1_3=255;
	color_2_2_3=100;
	color_2_3_3=10;

	color_3_1_3=255;
	color_3_2_3=100;
	color_3_3_3=10;
	
	color_4_1_3=255;
	color_4_2_3=100;
	color_4_3_3=10;

	color_5_1_3=255;
	color_5_2_3=100;
	color_5_3_3=10;

	color_6_1_3=255;
	color_6_2_3=100;
	color_6_3_3=10;

	color_7_1_3=255;
	color_7_2_3=100;
	color_7_3_3=10;

	color_1_1_4=255;
	color_1_2_4=100;
	color_1_3_4=10;

	color_2_1_4=255;
	color_2_2_4=100;
	color_2_3_4=10;

	color_3_1_4=255;
	color_3_2_4=100;
	color_3_3_4=10;
	
	color_4_1_4=255;
	color_4_2_4=100;
	color_4_3_4=10;

	color_5_1_4=255;
	color_5_2_4=100;
	color_5_3_4=10;

	color_6_1_4=255;
	color_6_2_4=100;
	color_6_3_4=10;

	color_7_1_4=255;
	color_7_2_4=100;
	color_7_3_4=10;

	life=3;
	score=0;
	


	iInitialize(800, 600, "DXBall");
	return 0;
}	