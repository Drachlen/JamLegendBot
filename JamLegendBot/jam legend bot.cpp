#include "stdafx.h"
#include "queue.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include <math.h>
#include "Windows.h"
#include <WinAble.h>
using std::string;
using namespace std;

/*

	drachlen@gmail.com
	jam legend bot www.jamlegend.com
	dec 2008

 */
int sustainNote(int key, HDC hdc, int xOffset)
{


		/*

			the bar thing

			551,483
			591,483
			631,483
			671,483
			711,483
			204

		*/

	int pixel1,pixel2,pixel3;
	int pixR;
	int pixG;
	int pixB;
	int total1,total2,total3;

	switch(key)
	{

		case 1:

			//465

			//printf("case 1\n");

			pixel1 = GetPixel(hdc, 551+xOffset, 484 );
			pixel2 = GetPixel(hdc, 551+xOffset, 483 );
			pixel3 = GetPixel(hdc, 551+xOffset, 482 );

			pixR = GetRValue(pixel1);
			pixG = GetGValue(pixel1);
			pixB = GetBValue(pixel1);

			total1 = pixR+pixG+pixB;

			pixR = GetRValue(pixel2);
			pixG = GetGValue(pixel2);
			pixB = GetBValue(pixel2);

			total2 = pixR+pixG+pixB;

			pixR = GetRValue(pixel3);
			pixG = GetGValue(pixel3);
			pixB = GetBValue(pixel3);

			total3 = pixR+pixG+pixB;

			if(total1 > 400 && total2 == total1 && total3 == total2)
			{

				return 1;

			}


		break;

		case 2:
			
			//456

			//printf("case 2\n");

			pixel1 = GetPixel(hdc, 591+xOffset, 484 );
			pixel2 = GetPixel(hdc, 591+xOffset, 483 );
			pixel3 = GetPixel(hdc, 591+xOffset, 482 );

			pixR = GetRValue(pixel1);
			pixG = GetGValue(pixel1);
			pixB = GetBValue(pixel1);

			total1 = pixR+pixG+pixB;

			pixR = GetRValue(pixel2);
			pixG = GetGValue(pixel2);
			pixB = GetBValue(pixel2);

			total2 = pixR+pixG+pixB;

			pixR = GetRValue(pixel3);
			pixG = GetGValue(pixel3);
			pixB = GetBValue(pixel3);

			total3 = pixR+pixG+pixB;

			if(total1 > 285 && total2 == total1 && total3 == total2)
			{

				return 1;

			}

		break;

		case 3:

			//393

			//printf("case 3\n");

			pixel1 = GetPixel(hdc, 631+xOffset, 484 );
			pixel2 = GetPixel(hdc, 631+xOffset, 483 );
			pixel3 = GetPixel(hdc, 631+xOffset, 482 );

			pixR = GetRValue(pixel1);
			pixG = GetGValue(pixel1);
			pixB = GetBValue(pixel1);

			total1 = pixR+pixG+pixB;

			pixR = GetRValue(pixel2);
			pixG = GetGValue(pixel2);
			pixB = GetBValue(pixel2);

			total2 = pixR+pixG+pixB;

			pixR = GetRValue(pixel3);
			pixG = GetGValue(pixel3);
			pixB = GetBValue(pixel3);

			total3 = pixR+pixG+pixB;

			if(total1 > 290 && total2 == total1 && total3 == total2)
			{

				return 1;

			}

		break;

		case 4:
			
			//printf("case 4\n");
			
			//308

			pixel1 = GetPixel(hdc, 671+xOffset, 484 );
			pixel2 = GetPixel(hdc, 671+xOffset, 483 );
			pixel3 = GetPixel(hdc, 671+xOffset, 482 );

			pixR = GetRValue(pixel1);
			pixG = GetGValue(pixel1);
			pixB = GetBValue(pixel1);

			total1 = pixR+pixG+pixB;

			pixR = GetRValue(pixel2);
			pixG = GetGValue(pixel2);
			pixB = GetBValue(pixel2);

			total2 = pixR+pixG+pixB;

			pixR = GetRValue(pixel3);
			pixG = GetGValue(pixel3);
			pixB = GetBValue(pixel3);

			total3 = pixR+pixG+pixB;

			if(total1 > 290 && total2 == total1 && total3 == total2)
			{

				return 1;

			}

		break;

		case 5:

			//printf("case 5\n");

			//535

			pixel1 = GetPixel(hdc, 711+xOffset, 484 );
			pixel2 = GetPixel(hdc, 711+xOffset, 483 );
			pixel3 = GetPixel(hdc, 711+xOffset, 482 );

			pixR = GetRValue(pixel1);
			pixG = GetGValue(pixel1);
			pixB = GetBValue(pixel1);

			total1 = pixR+pixG+pixB;

			pixR = GetRValue(pixel2);
			pixG = GetGValue(pixel2);
			pixB = GetBValue(pixel2);

			total2 = pixR+pixG+pixB;

			pixR = GetRValue(pixel3);
			pixG = GetGValue(pixel3);
			pixB = GetBValue(pixel3);

			total3 = pixR+pixG+pixB;

			if(total1 > 300 && total2 == total1 && total3 == total2)
			{

				return 1;

			}

		break;

		default:
			return 0;
		break;

	}

	return 0;

}

void sendKey(char ch, int state)
{



	if(state == 1)
	{

		INPUT input[2];
		::ZeroMemory(input, sizeof(input));
		input[0].type = input[1].type = INPUT_KEYBOARD;
		input[0].ki.wVk  = input[1].ki.wVk = ch;
		//input[1].ki.dwFlags = KEYEVENTF_KEYUP;
		::SendInput(2, input, sizeof(INPUT));

	} else {

		INPUT input[2];
		::ZeroMemory(input, sizeof(input));
		input[0].type = input[1].type = INPUT_KEYBOARD;
		input[0].ki.wVk  = input[1].ki.wVk = ch;
		input[1].ki.dwFlags = KEYEVENTF_KEYUP;
		::SendInput(2, input, sizeof(INPUT));

	}


}


int _tmain(int argc, _TCHAR* argv[])
{

	int countnnn=0;

	//SetTimer(NULL, NULL, 1, NULL);

	//MSG msg;

	int variableDelay = 66; //
	int betweenDelay = 38;
	int sustainVariable = 88;

	int run = 0;
	int queue1 = 0;
	int queue2 = 0;
	int queue3 = 0;
	int queue4 = 0;
	int queue5 = 0;
	int a = 0;

	int key1on = 0;
	int key2on = 0;
	int key3on = 0;
	int key4on = 0;
	int key5on = 0;

	int sustaining1 = 0;
	int sustaining2 = 0;
	int sustaining3 = 0;
	int sustaining4 = 0;
	int sustaining5 = 0;


	Queue queue[9999];
	int queuebottom = 0;
	int queueindex = 1;
	int total;

	int thisTickHasNote = 0;
	int pixel1,pixel2,pixel3,pixel4,pixel5;
	int pixR;
	int pixG;
	int pixB;
	int checkSustain = 0;

	HDC hdc = GetDC(NULL);

	int nextSong;
	int waitNext = 0;
	INPUT input[2];

	int f5wait=0;
	int f5waitNext=0;

	int tick=0;

	int xOffset=0;

	int mode=3;

	//while ( GetMessage(&msg, NULL, NULL, NULL) != 0 && GetMessage(&msg, NULL, NULL, NULL) != -1)
	while(1)
	{
		tick++;

		if(waitNext > 0)
		{

			waitNext--;

		}


		if(f5waitNext > 0)
		{

			f5waitNext--;

		}

		switch(mode)
		{

			case 1:

				variableDelay = 148;
				betweenDelay = 50;
				sustainVariable = 116;

			break;

			case 2:

				variableDelay = 95;
				betweenDelay = 44;
				sustainVariable = 95;

			break;

			case 3:

				variableDelay = 66;
				betweenDelay = 36;
				sustainVariable = 85;

			break;

			case 4:

				variableDelay = 56;
				betweenDelay = 22;
				sustainVariable = 82;

			break;

			default:

				variableDelay = 66;//67
				betweenDelay = 36;//37
				sustainVariable = 85;//88

			break;

		}

		nextSong = GetPixel(hdc, 552, 420);
		pixR = GetRValue(nextSong);
		pixG = GetGValue(nextSong);
		pixB = GetBValue(nextSong);


		if(pixR == 9 && pixG == 121 && pixB == 201 && a == 1 && f5waitNext == 0)
		{

			nextSong = GetPixel(hdc, 553, 420);
			pixR = GetRValue(nextSong);
			pixG = GetGValue(nextSong);
			pixB = GetBValue(nextSong);

			if(pixR == 0 && pixG == 171 && pixB == 222 && a == 1)
			{

				if(f5wait == 0 && f5waitNext == 0)
				{

					f5waitNext = 750;
					f5wait = 1;

				}

				if(f5wait == 1 && f5waitNext == 0)
				{

					f5wait = 2;
					f5waitNext=1500;

				}

				if(f5wait == 2 && f5waitNext == 0)
				{

					f5wait=0;
					f5waitNext = 700;

					sendKey(0x74, 1);
					//Sleep(1);
					sendKey(0x74, 0);

				}

			}

		}


		nextSong = GetPixel(hdc, 750, 420);
		pixR = GetRValue(nextSong);
		pixG = GetGValue(nextSong);
		pixB = GetBValue(nextSong);


		if(pixR == 100 && pixG == 255 && pixB == 100 && a == 1 && f5waitNext == 0)
		{

			if(f5wait == 0)
			{

				f5waitNext = 300;
				f5wait = 1;

			}

			if(f5wait == 1 && f5waitNext == 0)
			{

				f5wait = 2;
				f5waitNext=300;

			}

			if(f5wait == 2 && f5waitNext == 0)
			{

				f5wait=0;
				f5waitNext = 300;

				sendKey(0x74, 1);
				Sleep(2);
				sendKey(0x74, 0);

			}

		}



		nextSong = GetPixel(hdc, 485, 512);
		pixR = GetRValue(nextSong);
		pixG = GetGValue(nextSong);
		pixB = GetBValue(nextSong);
		//34.34.34

		if( ( (pixR == 34 && pixG == 34 && pixB == 34) || ( pixR == 33 && pixG == 33 && pixB == 33 ) ) && (a == 1 && waitNext == 0) )
		{

			nextSong = GetPixel(hdc, 544, 522);
			pixR = GetRValue(nextSong);
			pixG = GetGValue(nextSong);
			pixB = GetBValue(nextSong);
			//255.255.255

			if(pixR == 255 && pixG == 255 && pixB == 255 && a == 1)
			{

				//600,510

				::ZeroMemory(input, sizeof(input));
				input[0].type = input[1].type = INPUT_MOUSE;
				input[0].mi.dx = input[1].mi.dx = 34040; //23650 { center
				input[0].mi.dy = input[1].mi.dy = 32000; //9500 { center
				input[1].mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE | MOUSEEVENTF_LEFTDOWN);
				::SendInput(2, input, sizeof(INPUT));

				::ZeroMemory(input, sizeof(input));
				input[0].type = input[1].type = INPUT_MOUSE;
				input[0].mi.dx = input[1].mi.dx = 34040; //23650 { center
				input[0].mi.dy = input[1].mi.dy = 32000; // 9500 { center
				input[1].mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE | MOUSEEVENTF_LEFTUP);
				::SendInput(2, input, sizeof(INPUT));

				Sleep(1);

				queuebottom = 0;
				queueindex = 1;
				sustaining1=0;
				sustaining2=0;
				sustaining3=0;
				sustaining4=0;
				sustaining5=0;
				thisTickHasNote=0;
				checkSustain = 0;
				queue1=0;
				queue2=0;
				queue3=0;
				queue4=0;
				queue5=0;
				tick=0;

				Sleep(1);

				::ZeroMemory(input, sizeof(input));
				input[0].type = input[1].type = INPUT_MOUSE;
				input[0].mi.dx = input[1].mi.dx = 14040; //23650 { center
				input[0].mi.dy = input[1].mi.dy = 28020; //9500 { center
				input[1].mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE);
				::SendInput(2, input, sizeof(INPUT));

				::ZeroMemory(input, sizeof(input));
				input[0].type = input[1].type = INPUT_MOUSE;
				input[0].mi.dx = input[1].mi.dx = 14040; //23650 { center
				input[0].mi.dy = input[1].mi.dy = 28020; // 9500 { center
				input[1].mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE);
				::SendInput(2, input, sizeof(INPUT));


				waitNext = 1650;


			}

		}

		nextSong = GetPixel(hdc, 556, 344);
		pixR = GetRValue(nextSong);
		pixG = GetGValue(nextSong);
		pixB = GetBValue(nextSong);
		//34.34.34


		if(pixR == 173 && pixG == 250 && pixB == 39 && a == 1 && waitNext == 0)
		{

			printf("next song waitNext = 0 \n");

			nextSong = GetPixel(hdc, 595, 350);
			pixR = GetRValue(nextSong);
			pixG = GetGValue(nextSong);
			pixB = GetBValue(nextSong);
			//255.255.255

			if(/*pixR == 154 && pixG == 154 && pixB == 154 && */a == 1)
			{

				//600,510


				::ZeroMemory(input, sizeof(input));
				input[0].type = input[1].type = INPUT_MOUSE;
				input[0].mi.dx = input[1].mi.dx = 34040; //23650 { center
				input[0].mi.dy = input[1].mi.dy = 22020; //9500 { center
				input[1].mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE | MOUSEEVENTF_LEFTDOWN);
				::SendInput(2, input, sizeof(INPUT));

				::ZeroMemory(input, sizeof(input));
				input[0].type = input[1].type = INPUT_MOUSE;
				input[0].mi.dx = input[1].mi.dx = 34040; //23650 { center
				input[0].mi.dy = input[1].mi.dy = 22020; // 9500 { center
				input[1].mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE | MOUSEEVENTF_LEFTUP);
				::SendInput(2, input, sizeof(INPUT));

				Sleep(1);

				queuebottom = 0;
				queueindex = 1;
				sustaining1=0;
				sustaining2=0;
				sustaining3=0;
				sustaining4=0;
				sustaining5=0;
				thisTickHasNote=0;
				checkSustain = 0;
				queue1=0;
				queue2=0;
				queue3=0;
				queue4=0;
				queue5=0;

				Sleep(1);

				::ZeroMemory(input, sizeof(input));
				input[0].type = input[1].type = INPUT_MOUSE;
				input[0].mi.dx = input[1].mi.dx = 14040; //23650 { center
				input[0].mi.dy = input[1].mi.dy = 28020; //9500 { center
				input[1].mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE);
				::SendInput(2, input, sizeof(INPUT));

				::ZeroMemory(input, sizeof(input));
				input[0].type = input[1].type = INPUT_MOUSE;
				input[0].mi.dx = input[1].mi.dx = 14040; //23650 { center
				input[0].mi.dy = input[1].mi.dy = 28020; // 9500 { center
				input[1].mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE);
				::SendInput(2, input, sizeof(INPUT));

				waitNext = 1050;


			}

		}



		////printf("loop");

		Sleep(1);
		

		//POINT curs;

		//GetCursorPos(&curs);

		//HDC hdc = GetDC(NULL);


		pixel1 = GetPixel(hdc, 535+xOffset, 465 );
		//535,465 = (1)
		pixel2 = GetPixel(hdc, 575+xOffset, 465 );
		//575,465 = (2)
		pixel3 = GetPixel(hdc, 615+xOffset, 465 );
		//615,465 = (3)
		pixel4 = GetPixel(hdc, 655+xOffset, 465 );
		//655,465 = (4)
		pixel5 = GetPixel(hdc, 695+xOffset, 465 );
		//695,465 = (5)

		

		//////printf("X: %d Y: %d  ||  R: %d G: %d B: %d\n", curs.x, curs.y, pixR,pixG,pixB);

		for(int i=queuebottom; i<queueindex; i++)
		{

			if(queue[i].delay > 0)
			{

				queue[i].delay--;

			}

			if(queue[i].delay == 20)
			{

				if(queue[i].key == 1)
				{

					sendKey(0x31, 1);

				}

				if(queue[i].key == 2)
				{

					sendKey(0x32, 1);

				}

				if(queue[i].key == 3)
				{

					sendKey(0x33, 1);

				}

				if(queue[i].key == 4)
				{

					sendKey(0x34, 1);

				}

				if(queue[i].key == 5)
				{

					sendKey(0x35, 1);

				}

			}

			if(queue[i].delay == 1)
			{

				thisTickHasNote = 2;

				if(queue[i].key == 1)
				{

					key1on = 1;

				}

				if(queue[i].key == 2)
				{

					key2on = 1;

				}

				if(queue[i].key == 3)
				{

					key3on = 1;


				}

				if(queue[i].key == 4)
				{

					key4on = 1;

				}

				if(queue[i].key == 5)
				{

					key5on = 1;

				}

				/*

				sendKey(VK_RETURN, 1);
				sendKey(VK_RETURN, 0);

				if(queue[i].key == 1)
				{

					sendKey(0x31, 0);

				}

				if(queue[i].key == 2)
				{

					sendKey(0x32, 0);

				}

				if(queue[i].key == 3)
				{

					sendKey(0x33, 0);

				}

				if(queue[i].key == 4)
				{

					sendKey(0x34, 0);

				}

				if(queue[i].key == 5)
				{

					sendKey(0x35, 0);

				}

				*/

			}

			if(queue[i].delay == 0)
			{

				queuebottom++;

			}

		}

		if(sustaining1 > 0 && sustainNote(1, hdc, xOffset) == 0)
		{

			sustaining1--;
			//printf("[1] sustain left: %d\n", sustaining1);

		}

		if(sustaining2 > 0 && sustainNote(2, hdc, xOffset) == 0)
		{

			sustaining2--;
			//printf("[2] sustain left: %d\n", sustaining2);

		}

		if(sustaining3 > 0 && sustainNote(3, hdc, xOffset) == 0)
		{

			sustaining3--;
			//printf("[3] sustain left: %d\n", sustaining3);

		}

		if(sustaining4 > 0 && sustainNote(4, hdc, xOffset) == 0)
		{

			sustaining4--;
			//printf("[4] sustain left: %d\n", sustaining4);

		}

		if(sustaining5 > 0 && sustainNote(5, hdc, xOffset) == 0)
		{

			sustaining5--;
			//printf("[5] sustain left: %d\n", sustaining5);

		}

		if(sustaining1 == 1)
		{

			sendKey(0x31, 0);
			key1on=0;

		}

		if(sustaining2 == 1)
		{

			sendKey(0x32, 0);
			key2on=0;

		}

		if(sustaining3 == 1)
		{

			sendKey(0x33, 0);
			key3on=0;

		}

		if(sustaining4 == 1)
		{

			sendKey(0x34, 0);
			key4on=0;

		}

		if(sustaining5 == 1)
		{

			sendKey(0x35, 0);
			key5on=0;

		}

		if(thisTickHasNote == 1)
		{

			//sendKey(VK_RETURN, 1);

			//sustaining1=1;
			//sustaining2=1;
			//sustaining3=1;
			//sustaining4=1;
			//sustaining5=1;

				if(key1on == 1 && sustaining1 == 0)
				{

					checkSustain = sustainNote(1, hdc, xOffset);
					//checkSustain=0;
					//printf("sustain: %d\n", checkSustain);

					if( checkSustain == 0)
					{

						sendKey(0x31, 0);
						key1on=0;

					} else {

						sustaining1 = sustainVariable;
						//printf("begin sustain 1, %d\n", sustaining1);

					}

				}

				if(key2on == 1 && sustaining2 == 0)
				{

					checkSustain = sustainNote(2, hdc, xOffset);//checkSustain=0;

					if( checkSustain == 0)
					{

						sendKey(0x32, 0);
						key2on=0;

					} else {

						sustaining2 = sustainVariable;
						//printf("begin sustain 2, %d\n", sustaining2);

					}
				}

				if(key3on == 1 && sustaining3 == 0)
				{

					checkSustain = sustainNote(3, hdc, xOffset);//checkSustain=0;
					//printf("sustain: %d\n", checkSustain);

					if( checkSustain == 0)
					{

						sendKey(0x33, 0);
						key3on=0;

					} else {

						sustaining3 = sustainVariable;

						//printf("begin sustain 3, %d\n", sustaining3);

					}

				}

				if(key4on==1 && sustaining4 == 0)
				{
					checkSustain = sustainNote(4, hdc, xOffset);//checkSustain=0;
					//printf("sustain: %d\n", checkSustain);

					if( checkSustain == 0)
					{

						sendKey(0x34, 0);
						key4on=0;

					} else {

						sustaining4 = sustainVariable;
						//printf("begin sustain 4, %d\n", sustaining4);

					}
				}

				if(key5on==1 && sustaining5 == 0)
				{

					checkSustain = sustainNote(5, hdc, xOffset);//checkSustain=0;

					//printf("sustain: %d\n", checkSustain);

					if( checkSustain == 0)
					{

						sendKey(0x35, 0);
						key5on=0;

					} else {

						sustaining5 = sustainVariable;
						//printf("begin sustain 5, %d\n", sustaining5);

					}

				}

				sendKey(VK_RETURN, 0);

				thisTickHasNote=0;

		}

		if(thisTickHasNote == 2)
		{

				sendKey(VK_RETURN, 1);

				thisTickHasNote = 1;

		}

		if(thisTickHasNote == 3)
		{

			thisTickHasNote = 2;

		}

		if(queue1 > 0)
		{

			queue1--;

		}

		if(queue2 > 0)
		{

			queue2--;

		}

		if(queue3 > 0)
		{

			queue3--;

		}

		if(queue4 > 0)
		{

			queue4--;

		}

		if(queue5 > 0)
		{

			queue5--;

		}


		pixR = GetRValue(pixel1);
		pixG = GetGValue(pixel1);
		pixB = GetBValue(pixel1);

		total = 0;


		total = pixR+pixG+pixB;

		if( total > 200 && a == 1 && queue1 == 0)
		//if( pixR == 161 && pixG == 139 && pixB == 45 && a == 1 && queue1 == 0)
		{

			//printf("Total: %d ||  R: %d G: %d B: %d\n", total, pixR,pixG,pixB);

			queue1 = betweenDelay;
			//sendKey(0x31, 1);
			queue[queueindex].delay = variableDelay;
			queue[queueindex].key = 1;
			queue[queueindex].tickid = tick;
			queueindex++;

		}

		total = 0;

		pixR = GetRValue(pixel2);
		pixG = GetGValue(pixel2);
		pixB = GetBValue(pixel2);

	
		total = pixR+pixG+pixB;
		if( total > 230 && a == 1 && queue2 == 0)
		//if( pixR == 145 && pixG == 59 && pixB == 161 && a == 1 && queue2 == 0)
		{


			queue2 = betweenDelay;
			//sendKey(0x32, 1);
			queue[queueindex].delay = variableDelay;
			queue[queueindex].key = 2;
			queue[queueindex].tickid = tick;
			queueindex++;

		}

		total = 0;




		pixR = GetRValue(pixel3);
		pixG = GetGValue(pixel3);
		pixB = GetBValue(pixel3);


		total = pixR+pixG+pixB;
		if( total > 230 && a == 1 && queue3 == 0)
		//if( pixR == 112 && pixG == 162 && pixB == 47 && a == 1 && queue3 == 0)
		{

			////printf("Total: %d ||  R: %d G: %d B: %d\n", total, pixR,pixG,pixB);

			queue3 = betweenDelay;
			//sendKey(0x33, 1);
			queue[queueindex].delay = variableDelay;
			queue[queueindex].key = 3;
			queue[queueindex].tickid = tick;
			queue[queueindex].tickid = tick;
			queueindex++;

		}


		total = 0;

		pixR = GetRValue(pixel4);
		pixG = GetGValue(pixel4);
		pixB = GetBValue(pixel4);

		total = pixR+pixG+pixB;
		if( total > 230 && a == 1 && queue4 == 0)
		{

			////printf("Total: %d ||  R: %d G: %d B: %d\n", total, pixR,pixG,pixB);

			queue4 = betweenDelay;
			//sendKey(0x34, 1);
			queue[queueindex].delay = variableDelay;
			queue[queueindex].key = 4;
			queue[queueindex].tickid = tick;
			queueindex++;

		}


		total = 0;

		pixR = GetRValue(pixel5);
		pixG = GetGValue(pixel5);
		pixB = GetBValue(pixel5);


		total = pixR+pixG+pixB;
		if( total > 230 && a == 1 && queue5 == 0)
		{

			////printf("Total: %d ||  R: %d G: %d B: %d\n", total, pixR,pixG,pixB);

			queue5 = betweenDelay;
			//sendKey(0x35, 1);
			queue[queueindex].delay = variableDelay;
			queue[queueindex].key = 5;
			queue[queueindex].tickid = tick;
			queueindex++;

		}






		if( ( GetAsyncKeyState(VK_F8) ) )
		{

			

				a = 1;
				run = 1;

	

		}

		if( ( GetAsyncKeyState(VK_F9) ) )
		{

			

				a = 0;
				run = 0;

	

		}


		if( ( GetAsyncKeyState(VK_F7) ) )
		{

			

				xOffset = 0;
				

	

		}

		if( ( GetAsyncKeyState(VK_F6) ) )
		{

			

				xOffset = 8;
				

	

		}

		if( ( GetAsyncKeyState(VK_F1) ) )
		{			

				mode = 1;

		}

		if( ( GetAsyncKeyState(VK_F2) ) )
		{			

				mode = 2;

		}

		if( ( GetAsyncKeyState(VK_F3) ) )
		{			

				mode = 3;

		}

		if( ( GetAsyncKeyState(VK_F4) ) )
		{			

				mode = 4;

		}

		if( run == 1 )
		{



		}


	}


	return 0;

}