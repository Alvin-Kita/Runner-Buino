// -------------------
// Variables globales
// -------------------

int _state = 1; // TODO: le repasser à 0
int _currentLevel = 0;
int _scrollingTimer = 0;

// Obstacles
const int NB_OBSTACLES = 5;

struct Obstacle {
	int x;
	int type; // 0: hole, 1: cactus large, 2: cactus small
};

Obstacle _obstacles[NB_OBSTACLES -1];

const int OBSTACLES_DISTANCE_MIN = 16;
const int OBSTACLES_DISTANCE_ADD_RANDOM = 24;


const Image BACKGROUNDS[] = {
	_spriteBackground1,
	_spriteBackground2,
	_spriteBackground3
};

// Valeur max de l'écran 80x64
const int X_SCREEN_MAX = 78;
const int Y_SCREEN_MAX = 62;


// Function du joueur
// ------------------- 

struct Player {
  float x;
  float y;
  int score;
  int life;
  int timer;
  bool isJumping;
  bool isDoubleJumping;
  bool isCooldown;
};

Player _player;


void _playerSpriteUpdate() {
  _player.timer++;
	if (_player.timer == 8) {
		_player.timer = 0;
	}

  if (_player.timer < 4) {
		gb.display.drawImage(_player.x, _player.y, _spriteHero1);
	} else {
		gb.display.drawImage(_player.x, _player.y, _spriteHero2);
	}
}
