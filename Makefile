CXX  = g++

all: main.cc classes/game_class.cc classes/game_screen_class.cc classes/player_class.cc classes/food_class.cc classes/enemy_class.cc
	$(CXX) main.cc classes/game_class.cc classes/game_screen_class.cc classes/player_class.cc classes/food_class.cc classes/enemy_class.cc -o Snake
