#pragma once

#include <windows.h>
#include <math.h>

#define PI 3.1415926f
#define PLAYER_SPEED 4

#define MSG(m){\
	MessageBox( NULL, m, "Message", MB_OK );}
extern char key[256];

#define MARGIN 10
#define BACK_SPEED 1;

struct SHOT{
	bool flag;
	double x;
	double y;
	int gh;
	int width, height;
};

struct E_SHOT{
	bool flag;
	double x;
	double y;
	int gh;
	int width, height;
	int pattern;
	double speed;
	double angle;
};

extern int g_count;

#define PSHOT_NUM 20
#define PSHOT_SPEED 14
#define ENEMY_SNUM 200

#define WIDTH 380
#define HEIGHT 460