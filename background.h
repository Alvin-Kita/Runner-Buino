// ------------------------------------
// Méthodes du BACKGROUND (GAME state)
// ------------------------------------

void drawSprite(int x, int y, Image sprite) {
  if ((x<80) && (y<64)) {
    gb.display.drawImage(x, y, sprite);
  }
}

// -------------------
// Méthodes obstacles
// -------------------

void obstaclesInit() {
  for (int i = 0; i < NB_OBSTACLES; i++) {
      _obstacles[i].x = 50 * (i + 1);
      _obstacles[i].type = (int)(rand() % 3);
  }
}

void respawnObstacle(int val) {
	int max_x = _obstacles[0].x;
	int max_obstacle_index = 0;
	for (int i=1; i<5; i++) {
		if (_obstacles[i].x > max_x) {
			max_x = _obstacles[i].x;
			max_obstacle_index = i;
		}
	}
	int distance_min = OBSTACLES_DISTANCE_MIN;
	if (_obstacles[max_obstacle_index].type == 0) {
		distance_min = OBSTACLES_DISTANCE_MIN +8;
	}
  _obstacles[val].x =  max_x + random(distance_min, distance_min + OBSTACLES_DISTANCE_ADD_RANDOM);
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
    drawSprite(i*8 -_scrollingTimer, 24, BACKGROUNDS[_currentLevel]);  
  }
	
	// Dessin du sol
  gb.display.setColor(7);
  gb.display.fillRect(0,48,80,64);
	
	// Dessin des obstacles
	
  int posy_obs = 48;
	for (int i=0; i<NB_OBSTACLES; i++) {
		switch(_obstacles[i].type) {
			
			case 0: drawSprite(_obstacles[i].x, posy_obs, _spriteHole);
				break;
				
			case 1: drawSprite(_obstacles[i].x, posy_obs -8, _spriteCactusLarge);
				break;
				
			case 2: drawSprite(_obstacles[i].x, posy_obs, _spriteCactusSmall);
				break;
		}
	}
  
	// Foreground (2x plus rapide que le background)
  for (int i=0; i<8; i++) {
    drawSprite(i*16 -(_scrollingTimer *2), 56, _spriteForeground);
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
      _debug = i;
			respawnObstacle(i);
		}
	}
	
	// Affichage du background
	backgroundDraw();
	
}


