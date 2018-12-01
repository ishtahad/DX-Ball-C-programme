# include "iGraphics.h"

int ball_x, ball_y;
int dx, dy,ey,ey2,ey3,ey4, bar_x;
int brick_x, brick_y;
int brick_x1, brick_y1;
int brick_x2, brick_y2;
int brick_x3, brick_y3;
int brick_x4, brick_y4;
int brick_x5, brick_y5;
int brick_x6, brick_y6;
int tru, start, level,life,score;
int color[50][50];
int color1[50][50];
int color2[50][50];
int color3[50][50];
int color4[50][50];
int color5[50][50];
int ishti;
int t1,t2,t3;
int ellipse,ellipse2,ellipse3,ellipse4;
int eill_y,eill_y2,eill_y3,eill_y4;
int block[100];
int game;
int gameover[100][50];
int gameover1[100][50];
int gameover2[100][50];
int gameover3[100][50];
int gameover4[100][50];
int gameover5[100][50];

int barsize;
int sizebon=20,sizebon1=-20;
int newgame;
int highScore;
char str1HS[20];
int cristiano;


char str[100], str2[100];
int len;
int mode;


int block1[100],block2[100],block3[100],block4[100],block5[100];
int block6;

int game_over;

void scoreboard(int s, int l){

	char string1[6];
	char string2[2];
	char string3[6];

	sprintf(str1HS,"High Score: %d",highScore);



	itoa(s,string1,10);
	itoa(l,string2,10);
	itoa(highScore,string3,10);

	iSetColor(255, 0, 0);

	
	iText(10,580,"SCORE",GLUT_BITMAP_9_BY_15);
	iText(10,560,"LIFE", GLUT_BITMAP_9_BY_15);
	//iText(10,540,"High Score", GLUT_BITMAP_9_BY_15);



	iSetColor(255, 255, 0);
	iText(70,580, string1,GLUT_BITMAP_9_BY_15 );
	iText(70,560, string2,GLUT_BITMAP_9_BY_15 );
	//iText(70,540, string3,GLUT_BITMAP_9_BY_15 );

	


}

/*
void drawTextBox()
{
	iSetColor(150, 150, 150);
	iRectangle(50, 250, 250, 30);
}*/


void startmenu()
{


	iSetColor(255,2,220);//yellow
	iRectangle(300,100,250,430);//box

	
		
	iText(380,490,"MENU", GLUT_BITMAP_TIMES_ROMAN_24);

	iText(330,440,"Start Game", GLUT_BITMAP_TIMES_ROMAN_24);

	iText(330,340,"Exit", GLUT_BITMAP_TIMES_ROMAN_24);
}


void Game(){
	

	if(start==0){

	iSetColor(255, 255, 255);
	iText(10, 10, "Press up arrow key to continue");
	}
	//iShowBMP(0,0,"ball.bmp");
	

	/*
	if(block1==0){
		iSetColor(200, 20, 50);
		iFilledRectangle(brick_x, brick_y-50-50, 70, 50);
	}
	if(block2==0){
		iSetColor(20, 200, 250);
		iFilledRectangle(brick_x+70, brick_y-50-50, 70, 50);
	}*/

	int i,j=0;
	int phg=0;

	for(i =0;i<12;i++){
			if(block[i] == 0){
		
			iSetColor(color[i][j], color[i][j+1], color[i][j+2]); 
			iFilledRectangle(brick_x+phg, brick_y,70,40);
			}
		
		phg += 70;
	}

	int shg =0;

	for(i =0;i<10;i++){
			if(block1[i] == 0){
		
			iSetColor(color1[i][j], color1[i][j+1], color1[i][j+2]); 
			iFilledRectangle(brick_x1+shg, brick_y1,70,40);
			}
		
		shg += 70;
	}

	int chg =0;

		for(i =0;i<8;i++){
			if(block2[i] == 0){
		
			iSetColor(color2[i][j], color2[i][j+1], color2[i][j+2]); 
			iFilledRectangle(brick_x2+chg, brick_y2,70,40);
			}
		
		chg += 70;
	}


		int dhg =0;

		for(i =0;i<6;i++){
			if(block3[i] == 0){
		
			iSetColor(color3[i][j], color3[i][j+1], color3[i][j+2]); 
			iFilledRectangle(brick_x3+dhg, brick_y3,70,40);
			}
		
		dhg += 70;
	}

	int ehg =0;

		for(i =0;i<2;i++){
			if(block4[i] == 0  ){
		
			iSetColor(200, 20, 50); 
			iFilledRectangle(brick_x4+ehg, brick_y4,40,40);
			}
		
		ehg += 40;
	}


	int fhg =0;

		for(i =0;i<2;i++){
			if(block5[i] == 0){
		
			iSetColor(200, 20, 50); 
			iFilledRectangle(brick_x5+fhg, brick_y5,40,40);
			}
		
		fhg += 40;
	}
/*
	if(block6 == 0 ){
		iSetColor(60, 23, 125); 
		iFilledRectangle(brick_x6, brick_y6,70,40);
	}

*/

	if(ellipse == 1){
		iSetColor(200, 00, 200);
		iFilledEllipse(300-5+35, eill_y, 25, 15);
	}
	

	if(ellipse2 == 1){
		iSetColor(31, 109, 29);
		iFilledEllipse(300-5+35+350, eill_y2, 25, 15);
	}

	if(ellipse3 == 1){
		iSetColor(131, 109, 29);
		iFilledEllipse(300-5+35-70, eill_y3, 25, 15);
	}

	if(ellipse4 == 1){
		iSetColor(31, 109, 29);
		iFilledEllipse(300-5+35+350+70, eill_y4, 25, 15);
	}
	
	iSetColor(20, 100, 250);
	iFilledCircle(ball_x, ball_y, 5); //ball

	iSetColor(200, 20, 50);
	iFilledRectangle(bar_x, 50, barsize, 10); //bar

	scoreboard(score,life);

	if(ball_y < 10){
		life--;
		start=0;
		ball_x = 450;
		ball_y = 65;
	
		bar_x=400;
		
	}




	if(game_over == 1){
		iClear();
		iText(300,400,"GAME OVER", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(330,440,"New Game", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(10, 10, "press 'q' to exit.");
	}

		if((gameover[0][0] == 0 && gameover[1][0] == 0 && gameover[2][0] == 0 && gameover[3][0] == 0 && 
				gameover[4][0] == 0 && gameover[5][0] == 0 && gameover[6][0] == 0 && gameover[7][0] == 0 && 
				gameover[8][0] == 0 && gameover[9][0] == 0 && gameover[10][0] == 0 && gameover[11][0] == 0)
				&&
				(gameover1[0][0] == 0 && gameover1[1][0] == 0 && gameover1[2][0] == 0 && gameover1[3][0] == 0 && 
				gameover1[4][0] == 0 && gameover1[5][0] == 0 && gameover1[6][0] == 0 && gameover1[7][0] == 0 && 
				gameover1[8][0] == 0 && gameover1[9][0] == 0)
				&&
				(gameover2[0][0] == 0 && gameover2[1][0] == 0 && gameover2[2][0] == 0 && gameover2[3][0] == 0 && 
				gameover2[4][0] == 0 && gameover2[5][0] == 0 && gameover2[6][0] == 0 && gameover2[7][0] == 0 )
				&&
				(gameover3[0][0] == 0 && gameover3[1][0] == 0 && gameover3[2][0] == 0 && gameover3[3][0] == 0 && 
				gameover3[4][0] == 0 && gameover3[5][0] == 0 )
				&&
				(gameover4[0][0] == 0 && gameover4[1][0] == 0)
				&&
				(gameover5[0][0] == 0 && gameover5[1][0] == 0)){

					/*
					iClear();
					iText(300,400,"GAME OVER", GLUT_BITMAP_TIMES_ROMAN_24);
					iText(330,440,"New Game", GLUT_BITMAP_TIMES_ROMAN_24);
					iText(10, 10, "press 'q' to exit.");
					*/
					cristiano = 1;

			}


		if(score > highScore || cristiano ==1 || life==0){
		iClear();

			iSetColor(150, 150, 150);
			iRectangle(547-250, 300, 250, 30);

		//drawTextBox();
		if(mode == 1)
		{
			iSetColor(255, 255, 255);
			iText(550-250, 310, str);
		}

		iText(10, 10, "Click to activate the box, enter to finish.");
		}

		else{
			if(cristiano == 1){
					iClear();
					iText(300,400,"GAME OVER", GLUT_BITMAP_TIMES_ROMAN_24);
					iText(330,440,"New Game", GLUT_BITMAP_TIMES_ROMAN_24);
					iText(10, 10, "press 'q' to exit.");
			}
		}

		


	


}





void iDraw()
{	
	iClear();

	if(tru==0){
		startmenu();
	}

	if(tru==1){
		Game();
	}

	if(newgame == 1){
		life=13;
		start=0;
		ball_x = 450;
		ball_y = 65;
	
		bar_x=400;
		barsize = 100;
		score = 0;

		Game();
		
	}
	


}


void iMouseMove(int mx, int my)
{
	}

void iMouse(int button, int state, int mx, int my){

	if( mx >= 325 && mx <= 325 + 200 && my >= 430 && my<= 430 + 40 && tru == 0){
			
			tru=1;

		}

	if( mx >= 325 && mx <= 325 + 200 && my >= 430 && my<= 430 + 40 && newgame == 0){
			
			newgame = 1;

		}


	if(mx>=325 && mx<=525 && my>=320 && my<=360 && tru == 0){
		
			exit(0);
		}

		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
		//place your codes here	
		if(mx >= 50 && mx <= 300 && my >= 250 && my <= 280 && mode == 0)
		{
			mode = 1;
		}
		}
}

void iKeyboard(unsigned char key)
{	
	

	if(key == 'q')
	{
		//do something with 'x'
		exit(0);
	}
		int i;
	if(mode == 1)
	{
		if(key == '\r')
		{
			mode = 0;
			strcpy(str2, str);
			printf("%s\n", str2);
			for(i = 0; i < len; i++)
				str[i] = 0;
			len = 0;

			game_over =1;


	/*
  
			FILE *hsnn;
  
			hsnn=fopen("HighScoreName.txt","w+");
			fprintf(hsnn,"%s",str2);
			fclose(hsnn);
*/

		}
		else
		{
			str[len] = key;
			len++;
		}
	}

}


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_LEFT&&start==1)
	{
		if(bar_x>0)
			bar_x-= barsize;
		
	}
	if(key == GLUT_KEY_RIGHT&&start==1)
	{
		if(bar_x<1000-100)
			bar_x+= barsize;
		
	}

	if(key == GLUT_KEY_UP)
	{
		start = 1;
	}

	
}
		

void ballChange(){
	
	if(start==1){
	ball_x += dx;
	ball_y += dy;
	}

	if(ball_x > 1000-5 || ball_x < 5)dx = -dx;
	if(ball_y > 625-5 || ball_y < 5)dy = -dy;


	if(ellipse == 1 ){

		eill_y -= ey;
		
		
		if((eill_y <= 65 && eill_y >= 45) && (300-5+35+12 >= bar_x) && (300-5+35+12 <= bar_x+barsize)){
			//score +=100;
			life--;
			ellipse = 0;
		}
	}
	

	if(ellipse2 == 1 ){
		eill_y2 -= ey2;
		
		if((eill_y2 <= 65 && eill_y2 >= 45) && (300-5+35+350+12 >= bar_x) && (300-5+35+350+12<= bar_x+barsize)){
			life++;
			ellipse2 = 0;
		}
	}

	if(ellipse3 == 1 ){
		eill_y3 -= ey3;
		
		if((eill_y3 <= 65 && eill_y3 >= 45) && (300-5+35-70+12 >= bar_x) && (300-5+35-70+12<= bar_x+barsize)){
			barsize = barsize + sizebon;
			ellipse3 = 0;
		}
	}

	if(ellipse4 == 1 ){
		eill_y4 -= ey4;
		
		if((eill_y4 <= 65 && eill_y4 >= 45) && (300-5+35+350+70+12 >= bar_x) && (300-5+35+350+70+12<= bar_x+barsize)){
			barsize = barsize + sizebon1;
			ellipse4 = 0;
		}
	}
	

	if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x-5 && ball_x <= bar_x+5+barsize))dy = -dy;// bar reaction
			
			int i;


			int isthiaq= 0,asif = 70;

			for(i=0;i<12;i++){
			if((ball_x > brick_x-5+isthiaq && ball_x < brick_x-5+asif)
			&& (ball_y > brick_y-5 && ball_y < brick_y-5+40)){
				
				if(block[i] == 0 ){
					dy = -dy;
					block[i] = 1;
					score += 10;
					game += 1;
					
				}
				gameover[i][0]=0;
	

				
			
			}
				isthiaq += 70;
				asif += 70;
			}

			int isthia= 0,asi = 70;

			
			for(i=0;i<10;i++){
			if((ball_x > brick_x1-5+isthia && ball_x < brick_x1-5+asi)
			&& (ball_y > brick_y1-5 && ball_y < brick_y1+40-5)){
				
				if(block1[i] == 0 ){
					dy = -dy;
					block1[i] = 1;
					score += 10;
					game += 1;
					
				}
				gameover1[i][0]=0;
	

				
			
			}
				isthia += 70;
				asi += 70;
			}
			
			int isthi= 0,as = 70;

			
			for(i=0;i<8;i++){
			if((ball_x > brick_x2+isthi && ball_x < brick_x2+as)
			&& (ball_y > brick_y2 && ball_y < brick_y2+40)){
				
				if(block2[i] == 0 ){
					dy = -dy;
					block2[i] = 1;
					score += 10;
					//game += 1;
					if(i==0){
						ellipse3 = 1;
					}
					if(i == 7){
						ellipse4 =1;
					}
					
				}
				gameover2[i][0]=0;
	

				
			
			}
				isthi += 70;
				as += 70;
			}

			int isth= 0,a = 70;

			
			for(i=0;i<6;i++){
			if((ball_x > brick_x3+isth && ball_x < brick_x3+a)
			&& (ball_y > brick_y3 && ball_y < brick_y3+40)){
				
				if(block3[i] == 0 ){
					dy = -dy;
					//block3[i] = 1;
					//score += 10;

					if(i == 0){
						ellipse = 1;
					}
					if(i == 5){
						ellipse2 = 1;
					}

					if(i==1){
						block[i]=1;
						block1[i]=1;
						block2[i]=1;
						block3[i]=1;
						score += 40;
						//game += 1;
						//gameover3[i][0]=0;
					}
					else if(i==4){
						block[i+2+2+2]=1;
						block1[i+2+2]=1;
						block2[i+2]=1;
						block3[i]=1;
						score += 40;
						//game += 1;
						//gameover3[i][0]=0;
					}
						
					else{
						block3[i] = 1;
						score += 10;
						//game += 1;
						//gameover3[i][0]=0;
					}
				}

				if(i ==1){
					gameover[i][0]=0;
					gameover1[i][0]=0;
					gameover2[i][0]=0;
					gameover3[i][0]=0;
				}

				else if(i ==4){
					gameover[i+2+2+2][0]=0;
					gameover1[i+2+2][0]=0;
					gameover2[i+2][0]=0;
					gameover3[i][0]=0;
				}



				else{
					gameover3[i][0]=0;
				}
	

				
			
			}
				isth += 70;
				a += 70;
			}


			int isth1= 0,a1 = 70;
			

			
			for(i=0;i<2;i++){
			if((ball_x > brick_x4+isth1 && ball_x < brick_x4+a1)
			&& (ball_y > brick_y4 && ball_y < brick_y4+40)){
				
				if(block4[i] == 0){
					dy = -dy;
					block4[i] = 1;
					score += 10;
					game += 1;
					
				}
				gameover4[i][0]=0;
	

				
			
			}
				isth1 += 40;
				a1 += 40;
			}


			int isth2= 0,a2 = 70;

			
			for(i=0;i<2;i++){
			if((ball_x > brick_x5+isth2 && ball_x < brick_x5+a2)
			&& (ball_y > brick_y5 && ball_y < brick_y5+40)){
				
				if(block5[i] == 0 ){
					dy = -dy;
					block5[i] = 1;
					score += 10;
					game += 1;
					
				}
				gameover5[i][0]=0;
	

				
			
			}
				isth2 += 40;
				a2 += 40;
			}
			/*
			int dhit=0;
			
			if((ball_x > brick_x6 && ball_x < brick_x6+70)
				&& (ball_y > brick_y6 && ball_y < brick_y6+40)){
				for(i=0;i<3;i++){
				if(block6 == 0 && i==1 && dhit != 2){
					dy = -dy;
					dhit++;
				}
				else if(block6 == 0 && i == 0 && dhit != 2){
					dy = -dy;
					dhit++;
				}
				else{
					block6 = 1;
					dy = -dy;
				}
				
			}
			}
			
			*/




		

			






			/*
		
			if(block[0] ==1 && block[1] ==1 && block[2] ==1 && block[3] ==1 && block[4] ==1 && block[5] ==1 &&
				block[6] ==1 && block[7] ==1 && block[8] ==1 && block[9] ==1 && block[10] ==1 && block[11] ==1 
				&&
				block1[0] ==1 && block1[1] ==1 && block1[2] ==1 && block1[3] ==1 && block1[4] ==1 && block1[5] ==1 &&
				block1[6] ==1 && block1[7] ==1 && block1[8] ==1 && block1[9] ==1
				&&
				block2[0] ==1 && block2[1] ==1 && block2[2] ==1 && block2[3] ==1 && block2[4] ==1 && block2[5] ==1 &&
				block2[6] ==1 && block2[7] ==1 
				&&
				block3[0] ==1 && block3[1] ==1 && block3[2] ==1 && block3[3] ==1 && block3[4] ==1 && block3[5] ==1
				&&
				block4[0] ==1 && block4[1] ==1
				&&
				block5[0] ==1 && block5[1] ==1){

				iClear();
				iText(300,400,"GAME OVER", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(10, 10, "press 'q' to exit.");
			}
/*
			if(game > 10){
				iClear();
				iText(300,400,"GAME OVER", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(10, 10, "press 'q' to exit.");
			}

*/



				
			
/*

			if((ball_x > brick_x && ball_x < brick_x+70)
			&& (ball_y > brick_y-50-50 && ball_y < brick_y-50-50+50)){
				if(block1 == 0){
				dy = -dy;
				block1 = 1;
				}
			}

			if((ball_x > brick_x+70 && ball_x < brick_x+70+70)
			&& (ball_y > brick_y-50-50 && ball_y < brick_y+50-50-50)){
				if(block2 == 0){
				dy = -dy;
				block2 = 1;
				}
			}
*/

/*
	FILE *f;
	f=fopen("highScore.txt", "r");
	fscanf(f, "%d",&highScore);
	//printf("%d",highScore);
	//highScore=0;
	if (score>highScore)
		highScore=score;
	FILE *fp;
	fp=fopen("highScore.txt", "w+");
	fprintf(fp, "%d",highScore);
	
	fclose(f);
	fclose(fp);
*/


	
			

}


int main()
{
	
	//t1 = iSetTimer(30, ballChange);
	//t2 = iSetTimer(30, ballChange);
	//t3 = iSetTimer(25, ballChange);

	iSetTimer(17, ballChange);

	ball_x = 350;
	ball_y = 65;
	dx = 5;
	dy = 7;
	ey = 3;
	ey2 = 3;
	ey3 = 3;
	ey4 = 3;
	bar_x=300;
	barsize = 100;

	eill_y = 400-20-5;
	eill_y2 = 400-20-5;
	eill_y3 = 400-20-5+40;
	eill_y4 = 400-20-5+40;

	tru=1;
	newgame = 0;

	brick_x=300-70-70-75;
	brick_y=400+50+50;

	brick_x1=300-70-70-75+70;
	brick_y1=400+50+10;


	brick_x2=300-70-70-75+70+70;
	brick_y2=400-50+50+10+10;

	brick_x3=300-70-70-75+70+70+70;
	brick_y3=400-50+50+10+10-40;

	brick_x4=300-70-70-75+40;
	brick_y4=400-50+50+10+10-40-40-50;

	brick_x5=1020-40-80-80-10;
	brick_y5=400-50+50+10+10-40-40-50;

	brick_x6=300-70-70-75+40+70+70+30+70+70+35;
	brick_y6=400-50+50+10+10-40-40-50;

	




	int i,j;
	int red=111,green=78,blue=124;

	for(i =0;i<12;i++){
		for(j=0;j<3;j++){
			if(j<1){
				color[i][j] =red;
				red -= 10;
			}
			else if(j<2){
				color[i][j] =green;
				green += 10;
			}
			else{
				color[i][j] =blue;
				blue += 10;
			}
		}	
	}

	int k,l;
	int re=112,gree=78,blu=224;

	for(k =0;k<10;k++){
		for(l=0;l<3;l++){
			if(l==0){
				color1[k][l] +=re;
				re -= 10;
			}
			else if(l==1){
				color1[k][l] +=gree;
				gree += 10;
			}
			else{
				color1[k][l] +=blu;
				blu += 10;
			}
		}	
	}


	int m,n;
	int r=211,gre=178,bl=124;

	for(m =0;m<8;m++){
		for(n=0;n<3;n++){
			if(n==0){
				color2[m][n] =r;
				r -= 10;
			}
			else if(n==1){
				color2[m][n] =gre;
				gre += 10;
			}
			else{
				color2[m][n] =bl;
				bl += 10;
			}
		}
	}

	
	
	int r1=211,gr1=180,b1=40;

	for(m =0;m<6;m++){
		for(n=0;n<3;n++){
			if(n==0){
				color3[m][n] =r1;
				r1 -= 10;
			}
			else if(n==1){
				color3[m][n] =gr1;
				gr1 += 10;
			}
			else{
				color3[m][n] =b1;
				b1 += 10;
			}
		}
	}

	int v=100;
	int x,y;

	for(x=0;x<12;x++){
		for(y=0;y<1;y++){
			gameover[x][y] = v;
		}
	}

	for(x=0;x<10;x++){
		for(y=0;y<1;y++){
			gameover1[x][y] = v;
		}
	}

	for(x=0;x<8;x++){
		for(y=0;y<1;y++){
			gameover2[x][y] = v;
		}
	}

	for(x=0;x<6;x++){
		for(y=0;y<1;y++){
			gameover3[x][y] = v;
		}
	}

	for(x=0;x<2;x++){
		for(y=0;y<1;y++){
			gameover4[x][y] = v;
		}
	}

	for(x=0;x<2;x++){
		for(y=0;y<1;y++){
			gameover5[x][y] = v;
		}
	}

	len = 0;
	mode = 0;
	str[0]= 0;


	life = 1;
	score =0;

	iInitialize(1000, 625, "MagicBounceBall");
	return 0;
}