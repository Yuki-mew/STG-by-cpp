#include "control.h"

CONTROL::CONTROL(){
	player = new PLAYER;
	back = new BACK;
	enemy = new ENEMY( "images/enemy.png", 0, 0, 200,
		-40, 120, 180,
		181, 360, "images/enemyshot1.png", 0, 0, 4, 0 );
}


CONTROL::~CONTROL(void){
	delete player;
	delete back;
}

void CONTROL::All(){
	SetDrawArea(MARGIN, MARGIN, MARGIN + WIDTH, MARGIN + HEIGHT);
	back -> All();
	player->All();

	if( enemy != NULL ){
		if( enemy -> All() ){
			delete enemy;
			enemy = NULL;
		}
	}
	++g_count;
}