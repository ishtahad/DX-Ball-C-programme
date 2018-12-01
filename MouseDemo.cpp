# include "iGraphics.h"

int ball_x, ball_y;
int dx, dy,ey,ey2,ey3, bar_x;
int brick_x, brick_y;
int brick_x1, brick_y1;
int brick_x2, brick_y2;
int color_1_1, color_1_2, color_1_3,color_2_1, color_2_2, color_2_3;
int tru, start, level,life,score;
int color[50][50];
int color1[50][50];
int color2[50][50];
int finish1,finish2;
int ishti;
int t1,t2,t3;
int ellipse,ellipse2,ellipse3;
int eill_y,eill_y2,eill_y3;
int feature3;
int sizebon = -20;
int highScore=0;


void scoreboard(int s, int l){

	char string1[6];
	char string2[2];


	itoa(s,string1,10);
	itoa(l,string2,10);

	iSetColor(255, 0, 0);

	
	iText(10,580,"SCORE",GLUT_BITMAP_9_BY_15);
	iText(10,560,"LIFE", GLUT_BITMAP_9_BY_15);



	iSetColor(255, 255, 0);
	iText(70,580, string1,GLUT_BITMAP_9_BY_15 );
	iText(70,560, string2,GLUT_BITMAP_9_BY_15 );


}


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


	int i,j;
	int phg=0;

	for(i =0;i<8;i++){
		for(j=0;j<3;j++){
			iSetColor(color[i][j], color[i][j], color[i][j]); 
			iFilledRectangle(brick_x+phg, brick_y,70,50);
		}
		phg += 70;
	}

	
	int shg=0;
	int k,l;
	
	for(k =0;k<8;k++){
		for(l=0;l<3;l++){
			
			iSetColor(color1[k][l], color1[k][l], color1[k][l]);
			iFilledRectangle(brick_x1+shg, brick_y1,70,50);
		}
		shg += 70;
	}

	int chg=0;
	int m,n;
	
	for(m =0;m<8;m++){
		for(n=0;n<3;n++){
			
			iSetColor(color2[m][n], color2[m][n], color2[m][n]);
			iFilledRectangle(brick_x2+chg, brick_y2,70,50);
		}
		chg += 70;
	}



	
	if(ellipse == 1){
		iSetColor(200, 00, 200);
		iFilledEllipse(490+35, eill_y, 25, 15);
	}
	
	
	
	
	if(ellipse2 == 1){
		iSetColor(31, 109, 29);
		iFilledEllipse(280+35, eill_y2, 25, 15);
	}

	if(ellipse3 == 1){
		iSetColor(131, 109, 229);
		iFilledEllipse(560+35, eill_y3, 25, 15);
	}

	iSetColor(20, 100, 250);
	iFilledCircle(ball_x, ball_y, 5); //ball
	

	if(	feature3 == 0){
		iSetColor(200, 20, 50);
		iFilledRectangle(bar_x, 50, 100, 10); //bar
	}
	else{
		iSetColor(200, 20, 50);
		iFilledRectangle(bar_x, 50, 100+sizebon, 10);
	}


	if(ball_y < 10){
		life--;
		start=0;
		ball_x = 350;
		ball_y = 65;
	
		bar_x=300;
		
	}

	scoreboard(score,life);

	if((color[0][0]==0 && color[0][1]==0 && color[0][2]==0 && color[1][0]==0 && color[1][1]==0 && color[1][2]==0 &&
		color[2][0]==0 && color[2][1]==0 && color[2][2]==0 && color[3][0]==0 && color[3][1]==0 && color[3][2]==0 &&
		color[4][0]==0 && color[4][1]==0 && color[4][2]==0 && color[5][0]==0 && color[5][1]==0 && color[5][2]==0 &&
		color[6][0]==0 && color[6][1]==0 && color[6][2]==0 && color[7][0]==0 && color[7][1]==0 && color[7][2]==0 ) 
		&&
	   (color1[0][0]==0 && color1[0][1]==0 && color1[0][2]==0 && color1[1][0]==0 && color1[1][1]==0 && color1[1][2]==0 &&
		color1[2][0]==0 && color1[2][1]==0 && color1[2][2]==0 && color1[3][0]==0 && color1[3][1]==0 && color1[3][2]==0 &&
		color1[4][0]==0 && color1[4][1]==0 && color1[4][2]==0 && color1[5][0]==0 && color1[5][1]==0 && color1[5][2]==0 &&
		color1[6][0]==0 && color1[6][1]==0 && color1[6][2]==0 && color1[7][0]==0 && color1[7][1]==0 && color1[7][2]==0 )
		&&
	   (color2[0][0]==0 && color2[0][1]==0 && color2[0][2]==0 && color2[1][0]==0 && color2[1][1]==0 && color2[1][2]==0 &&
		color2[2][0]==0 && color2[2][1]==0 && color2[2][2]==0 && color2[3][0]==0 && color2[3][1]==0 && color2[3][2]==0 &&
		color2[4][0]==0 && color2[4][1]==0 && color2[4][2]==0 && color2[5][0]==0 && color2[5][1]==0 && color2[5][2]==0 &&
		color2[6][0]==0 && color2[6][1]==0 && color2[6][2]==0 && color2[7][0]==0 && color2[7][1]==0 && color2[7][2]==0 )){

			
		iClear();
		iText(300,400,"GAME OVER", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(10, 10, "press 'q' to exit.");
	}



	

	if(life==0 || (ishti== 24)){
		iClear();
		iText(300,400,"GAME OVER", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(10, 10, "press 'q' to exit.");
		//iShowBMP(0,0,"game.bmp");
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
	


}


void iMouseMove(int mx, int my)
{
	}

void iMouse(int button, int state, int mx, int my){

	if( mx >= 325 && mx <= 325 + 200 && my >= 430 && my<= 430 + 40 && tru == 0){
			
			tru=1;

		}
	if(mx>=325 && mx<=525 && my>=320 && my<=360 && tru == 0){
		
			exit(0);
		}
	
}

void iKeyboard(unsigned char key)
{	
		if(key == 'q'){
			exit(0);
	}
}


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_LEFT&&start==1)
	{
		if(bar_x>0)
			bar_x-=100;
		
	}
	if(key == GLUT_KEY_RIGHT&&start==1)
	{
		
		if(feature3 == 1){
			if(bar_x<700-sizebon)
				bar_x+=100+sizebon;
		}
		else{
			if(bar_x<700)
				bar_x+=100;
		}
		
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

	if(ball_x > 800-5 || ball_x < 5)dx = -dx;
	if(ball_y > 600-5 || ball_y < 5)dy = -dy;

	if(feature3 == 1){
			if(ellipse == 1 ){

		eill_y -= ey;
		
		
		if((eill_y <= 65 && eill_y >= 45) && (490+35 >= bar_x) && (490+35 <= bar_x+100+sizebon)){
			score +=100;
			ellipse = 0;
		}
	}

	if(ellipse2 == 1 ){
		eill_y2 -= ey2;
		
		if((eill_y2 <= 65 && eill_y2 >= 45) && (280+35 >= bar_x) && (280+35 <= bar_x+100+sizebon)){
			life++;
			ellipse2 = 0;
		}
	}
	}
	else{
			if(ellipse == 1 ){

		eill_y -= ey;
		
		
		if((eill_y <= 65 && eill_y >= 45) && (490+35 >= bar_x) && (490+35 <= bar_x+100)){
			score +=100;
			ellipse = 0;
		}
	}

	if(ellipse2 == 1 ){
		eill_y2 -= ey2;
		
		if((eill_y2 <= 65 && eill_y2 >= 45) && (280+35 >= bar_x) && (280+35 <= bar_x+100)){
			life++;
			ellipse2 = 0;
		}
	}
	}





	if(ellipse3 == 1 ){
		eill_y3 -= ey3;
		
		if((eill_y3 <= 65 && eill_y3 >= 45) && (560+35+12 >= bar_x) && (560+12 <= bar_x+100)){
			
			feature3 = 1;

			ellipse3 = 0;
		}
	}
	

/*

	if(feature3 == 1){
		if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x-5 && ball_x <= bar_x+105 + sizebon))dy = -dy;
	}

	else{
			if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x-5 && ball_x <= bar_x+105))dy = -dy;
	}

*/	

	//if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x-5 && ball_x <= bar_x+105))dy = -dy;// bar reaction

	
	/*eita bar er size baranor jonno
	if(feature3 == 1){
		if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x && ball_x <= bar_x+25)){
		dy = -dy+1;
		iPauseTimer(t1);
		iPauseTimer(t3);
		iResumeTimer(t2);
		//dx = dx+1;
	}

	if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x+26 && ball_x <= bar_x+50)){
		dy = -dy+2;
		iPauseTimer(t1);
		iPauseTimer(t2);
		iResumeTimer(t3);
		//dx = dx+1;
	}

	if((ball_y <= 65 && ball_y >=45) && ( ball_x >= bar_x+51 && ball_x <= bar_x + 70)){
		dy = -dy;
		iPauseTimer(t2);
		iPauseTimer(t3);
		iResumeTimer(t1);
	}

	if((ball_y <= 65 && ball_y >=45) && (ball_x >= bar_x+71 && ball_x <= bar_x+95)){
		dy = -dy+2;
		iPauseTimer(t1);
		iPauseTimer(t2);
		iResumeTimer(t3);
		//dx = dx+1;
	}
	

	if((ball_y <= 65 && ball_y >=45) && (ball_x >= bar_x+96 && ball_x <= bar_x+120)){
		dy = -dy+1;
		iPauseTimer(t1);
		iPauseTimer(t3);
		iResumeTimer(t2);
		//dx = dx+1;
	}
	}*/

	if(feature3 == 1){
		if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x && ball_x <= bar_x+15)){
		dy = -dy+1;
		iPauseTimer(t1);
		iPauseTimer(t3);
		iResumeTimer(t2);
		//dx = dx+1;
	}

	if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x+16 && ball_x <= bar_x+30)){
		dy = -dy+2;
		iPauseTimer(t1);
		iPauseTimer(t2);
		iResumeTimer(t3);
		//dx = dx+1;
	}

	if((ball_y <= 65 && ball_y >=45) && ( ball_x >= bar_x+31 && ball_x <= bar_x + 50)){
		dy = -dy;
		iPauseTimer(t2);
		iPauseTimer(t3);
		iResumeTimer(t1);
	}

	if((ball_y <= 65 && ball_y >=45) && (ball_x >= bar_x+51 && ball_x <= bar_x+65)){
		dy = -dy+2;
		iPauseTimer(t1);
		iPauseTimer(t2);
		iResumeTimer(t3);
		//dx = dx+1;
	}
	

	if((ball_y <= 65 && ball_y >=45) && (ball_x >= bar_x+66 && ball_x <= bar_x+80)){
		dy = -dy+1;
		iPauseTimer(t1);
		iPauseTimer(t3);
		iResumeTimer(t2);
		//dx = dx+1;
	}
	}



	else{
		if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x && ball_x <= bar_x+25)){
		dy = -dy+1;
		iPauseTimer(t1);
		iPauseTimer(t3);
		iResumeTimer(t2);
		//dx = dx+1;
	}

	if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x+26 && ball_x <= bar_x+45)){
		dy = -dy+2;
		iPauseTimer(t1);
		iPauseTimer(t2);
		iResumeTimer(t3);
		//dx = dx+1;
	}

	if((ball_y <= 65 && ball_y >=45) && ( ball_x >= bar_x+46 && ball_x <= bar_x + 55)){
		dy = -dy;
		iPauseTimer(t2);
		iPauseTimer(t3);
		iResumeTimer(t1);
	}

	if((ball_y <= 65 && ball_y >=45) && (ball_x >= bar_x+56 && ball_x <= bar_x+75)){
		dy = -dy+2;
		iPauseTimer(t1);
		iPauseTimer(t2);
		iResumeTimer(t3);
		//dx = dx+1;
	}
	

	if((ball_y <= 65 && ball_y >=45) && (ball_x >= bar_x+76 && ball_x <= bar_x+100)){
		dy = -dy+1;
		iPauseTimer(t1);
		iPauseTimer(t3);
		iResumeTimer(t2);
		//dx = dx+1;
	}
	}

	
	/*
	if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x && ball_x <= bar_x+25)){
		dy = -dy+1;
		iPauseTimer(t1);
		iPauseTimer(t3);
		iResumeTimer(t2);
		//dx = dx+1;
	}

	if((ball_y <= 65 && ball_y >= 45) && (ball_x >= bar_x+26 && ball_x <= bar_x+45)){
		dy = -dy+2;
		iPauseTimer(t1);
		iPauseTimer(t2);
		iResumeTimer(t3);
		//dx = dx+1;
	}

	if((ball_y <= 65 && ball_y >=45) && ( ball_x >= bar_x+46 && ball_x <= bar_x + 55)){
		dy = -dy;
		iPauseTimer(t2);
		iPauseTimer(t3);
		iResumeTimer(t1);
	}

	if((ball_y <= 65 && ball_y >=45) && (ball_x >= bar_x+56 && ball_x <= bar_x+75)){
		dy = -dy+2;
		iPauseTimer(t1);
		iPauseTimer(t2);
		iResumeTimer(t3);
		//dx = dx+1;
	}
	

	if((ball_y <= 65 && ball_y >=45) && (ball_x >= bar_x+76 && ball_x <= bar_x+100)){
		dy = -dy+1;
		iPauseTimer(t1);
		iPauseTimer(t3);
		iResumeTimer(t2);
		//dx = dx+1;
	}
	*/				
			int i,j;


			int isthiaq= 0,asif = 70;

			for(j=0;j<8;j++){
			if((ball_x > brick_x+isthiaq && ball_x < brick_x+asif)
			&& (ball_y > brick_y && ball_y < brick_y+50)){
				for(i=0;i<1;i++){
				
				if(color[j][i] > 0 && color[j][i+1] > 0 && color[j][i+2] > 0){
					dy = -dy;
					if(j==7){
						score +=60;
					}
					else if(j==0){
						score +=60;
					}
					/*else if(j==3){
						score +=60;
					}*/
					else
						score += 20;
				
			}
			if(j==7){
					color[j][i]=0;
					color[j][i+1]=0;
					color[j][i+2]=0;

					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					color1[j][i]=0;
					color1[j][i+1]=0;
					color1[j][i+2]=0;
				}
				
				
				else if(j==0){
					color[j][i]=0;
					color[j][i+1]=0;
					color[j][i+2]=0;

					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					color1[j][i]=0;
					color1[j][i+1]=0;
					color1[j][i+2]=0;
				}

			/*	else if(j==3){
					color[j][i]=0;
					color[j][i+1]=0;
					color[j][i+2]=0;

					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					color1[j][i]=0;
					color1[j][i+1]=0;
					color1[j][i+2]=0;
				}

			*/
				else{


					color[j][i]=0;
					color[j][i+1]=0;
					color[j][i+2]=0;
				}
			
			}
			}
				isthiaq += 70;
				asif += 70;
				ishti += 1;
				
			}


			int isthia= 0,asi = 70;

			for(j=0;j<8;j++){
			if((ball_x > brick_x1+isthia && ball_x < brick_x1+asi) ///akhane varible name asif and isthiaq a changorle aksatha vanis kora jai
			&& (ball_y > brick_y1 && ball_y < brick_y1+50)){
				for(i=0;i<3;i++){
				
				if(color1[j][i] > 0 && color1[j][i+1] > 0 && color1[j][i+2] > 0){
					dy = -dy;
					if(j==7){
						score +=60;
					}
					else if(j==0){
						score +=60;
					}
					/*else if(j==3){
						score +=60;
					}*/
					else
						score += 20;
			}
			if(j==7){
					color[j][i]=0;
					color[j][i+1]=0;
					color[j][i+2]=0;

					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					color1[j][i]=0;
					color1[j][i+1]=0;
					color1[j][i+2]=0;
				}

					else if(j==0){
					color[j][i]=0;
					color[j][i+1]=0;
					color[j][i+2]=0;

					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					color1[j][i]=0;
					color1[j][i+1]=0;
					color1[j][i+2]=0;
				}

			/*	else if(j==3){
					color[j][i]=0;
					color[j][i+1]=0;
					color[j][i+2]=0;

					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					color1[j][i]=0;
					color1[j][i+1]=0;
					color1[j][i+2]=0;
				}
			*/


				else{


					color1[j][i]=0;
					color1[j][i+1]=0;
					color1[j][i+2]=0;
				}
			
			}
			}
				isthia += 70;
				asi += 70;
				ishti += 1;
				
			}


			int isthi=0, as = 70;

			for(j=0;j<8;j++){
			if((ball_x > brick_x2+isthi && ball_x < brick_x2+as)
			&& (ball_y > brick_y2 && ball_y < brick_y2+50)){
				for(i=0;i<3;i++){
				
				if(color2[j][i] > 0 && color2[j][i+1] > 0 && color2[j][i+2] > 0){
					dy = -dy;
					if(j==7){
						score +=60;
					}
					else if(j==0){
						score +=60;
					}
					/*else if(j==3){
						score +=60;
					}*/
					else if(j==5){

					
					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					ellipse = 1;

					
					}

					else if(j==2){

					
					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					ellipse2 = 1;

					
					}
					else if(j==6){

					
					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					ellipse3 = 1;

					
					}
					else
						score += 20;
			}
				if(j==7){
					color[j][i]=0;
					color[j][i+1]=0;
					color[j][i+2]=0;

					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					color1[j][i]=0;
					color1[j][i+1]=0;
					color1[j][i+2]=0;
				}

					else if(j==0){
					color[j][i]=0;
					color[j][i+1]=0;
					color[j][i+2]=0;

					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					color1[j][i]=0;
					color1[j][i+1]=0;
					color1[j][i+2]=0;
				}


				/*	else if(j==3){
					color[j][i]=0;
					color[j][i+1]=0;
					color[j][i+2]=0;

					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					color1[j][i]=0;
					color1[j][i+1]=0;
					color1[j][i+2]=0;
				}*/
/*
				else if(j==5){

					
					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					ellipse = 1;

					
				}

				else if(j==2){

					
					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;

					ellipse2 = 1;

					
				}*/


				else{


					color2[j][i]=0;
					color2[j][i+1]=0;
					color2[j][i+2]=0;
				}
			
			}
			}
				isthi += 70;
				as += 70;
				ishti += 1;
				
			}

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
	bar_x=300;

	eill_y = 400-50-50-25;
	eill_y2 = 400-50-50-25;
	eill_y3 = 400-50-50-25;

	tru=1;

	brick_x=300-70-70-20;
	brick_y=400;

	brick_x1=300-70-70-20;
	brick_y1=400-50;


	brick_x2=300-70-70-20;
	brick_y2=400-50-50;

	int i,j;
	int red=11,green=278,blue=124;

	for(i =0;i<8;i++){
		for(j=0;j<3;j++){
			if(j<1){
				color[i][j] =red;
				//red -= 10;
			}
			else if(j<2){
				color[i][j] =green;
				//green += 30;
			}
			else{
				color[i][j] =blue;
				//blue += 10;
			}
		}	
	}

	int k,l;
	int re=112,gree=278,blu=24;

	for(k =1;k<7;k++){
		for(l=0;l<3;l++){
			if(l==0){
				color1[k][l] +=re;
				re -= 10;
			}
			else if(l==1){
				color1[k][l] +=gree;
				gree += 30;
			}
			else{
				color1[k][l] +=blu;
				blu += 10;
			}
		}	
	}
	color1[0][0]=11;
	color1[0][1]=278;
	color1[0][2]=124;


	color1[7][0]=11;
	color1[7][1]=278;
	color1[7][2]=124;

	int m,n;
	int r=11,gre=278,bl=124;

	for(m =0;m<8;m++){
		for(n=0;n<3;n++){
			if(n==0){
				color2[m][n] =r;
				//r -= 10;
			}
			else if(n==1){
				color2[m][n] =gre;
				//gre += 30;
			}
			else{
				color2[m][n] =bl;
				//bl += 10;
			}
		}
	}


	life = 10;
	score =0;

	iInitialize(800, 600, "MagicBounceBall");
	return 0;
}