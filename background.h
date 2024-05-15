// ------------------------------------
// Méthodes du BACKGROUND (GAME state)
// ------------------------------------


// -------------------
// Méthodes obstacles
// -------------------

void obstaclesInit() {
	_obstacles[0].x = 50;
	_obstacles[0].type = (int)(rand()%3);
	
	_obstacles[1].x = 100;
	_obstacles[1].type = (int)(rand()%3);
	
	_obstacles[2].x = 150;
	_obstacles[2].type = (int)(rand()%3);
	
	_obstacles[3].x = 200;
	_obstacles[3].type = (int)(rand()%3);
	
	_obstacles[4].x = 250;
	_obstacles[4].type = (int)(rand()%3);
}

void respawnObstacle(int val) {
	int max_x = 30;
	int max_obstacle_index;
	for (int i=0; i<NB_OBSTACLES; i++) {
		if (_obstacles[i].x > max_x) {
			max_x = _obstacles[i].x;
			max_obstacle_index = i;
		}
	}
	int distance_min = OBSTACLES_DISTANCE_MIN;
	if (_obstacles[max_obstacle_index].type == 0) {
		distance_min = OBSTACLES_DISTANCE_MIN +8;
	}
	_obstacles[val].x = (int)(max_x + distance_min + OBSTACLES_DISTANCE_ADD_RANDOM);
	_obstacles[val].type = (int)(rand()%3);
}

// ------------------------
// Affichage du Background
// ------------------------

void backgroundDraw() {
	
	// Dessin du ciel
  gb.display.setColor(13);
  gb.display.fillRect(0,0,80,24);
	
	// Dessin du background
  for (int i=0; i<12; i++) {
    gb.display.drawImage(i*8 -_scrollingTimer, 24, BACKGROUNDS[_currentLevel]);  
  }
	
	// Dessin du sol
  gb.display.setColor(7);
  gb.display.fillRect(0,48,80,64);
	
	// Dessin des obstacles
	int posy_obs = 48;
	for (int i=0; i<NB_OBSTACLES; i++) {
		switch(_obstacles[i].type) {
			
			case 0: gb.display.drawImage(_obstacles[i].x, posy_obs, _spriteHole);
				break;
				
			case 1: gb.display.drawImage(_obstacles[i].x, posy_obs -8, _spriteCactusLarge);
				break;
				
			case 2: gb.display.drawImage(_obstacles[i].x, posy_obs, _spriteCactusSmall);
				break;
		}
	}
  
	// Foreground (2x plus rapide que le background)
  for (int i=0; i<8; i++) {
    gb.display.drawImage(i*16 -(_scrollingTimer *2), 56, _spriteForeground);
  }
}

// --------------------------
// Mise à jour du Background
// --------------------------

void backgroundUpdate() {
	
	// Timer pour l'animation du background
	_scrollingTimer++;
	if (_scrollingTimer == 16) {
		_scrollingTimer = 0;
	}
	
	// Mise à jour des obstacles
	for (int i=0; i<NB_OBSTACLES; i++){
		_obstacles[i].x--;
		if (_obstacles[i].x < -16) {
			respawnObstacle(i);
		}
	}
	
	// Affichage du background
	backgroundDraw();
	
}