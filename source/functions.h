/*
 * functions.h
 *
 * Copyright 2012-2018 Andy Alt <andyqwerty@users.sourceforge.net>
 *
 * https://github.com/theimpossibleastronaut/Zank/wiki
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include "Zank.h"

bool accuse (st_player_data *player);
void showitems (objects * object);
void tree (void);
void wall (void);
void lake (void);
void showMap (st_player_data *player, bool Visited[X][Y]);
void prompt (st_player_data *player, short pCtr, short iCtr);
bool borderPatrol (st_player_data *player);
