// -------------------
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

Player player;

void playerUpdate() {
  player.timer++;
}