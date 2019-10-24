#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include <algorithm>
using namespace std;

class ship_with_4 {
private:
	int verORhor, placeX, placeY;
public:
	ship_with_4(char map[10][10]) {
		ship(map);
	}
	void ship(char map[10][10])
	{
		verORhor = rand() % 2;
		if (verORhor == 0) //0 means that vertical
		{
			placeY = rand() % 7; //ships headY
			placeX = rand() % 10; //ships headX
			map[placeY][placeX] = '#';
			map[placeY + 1][placeX] = '#';
			map[placeY + 2][placeX] = '#';
			map[placeY + 3][placeX] = '#';
		}

		else // 1 means horizontal
		{
			placeX = rand() % 7; //ships headX
			placeY = rand() % 10; //ships headY
			map[placeY][placeX] = '#';
			map[placeY][placeX + 1] = '#';
			map[placeY][placeX + 2] = '#';
			map[placeY][placeX + 3] = '#';
		}

	}
};
class ship_with_3 {
private:
	int verORhor, placeX, placeY;
	bool available_place = false;
public:
	ship_with_3(char map[10][10]) {
		ship(map);
		ship(map);
	}
	void ship(char map[10][10])
	{
		verORhor = rand() % 2;
		if (verORhor == 0) //0 means that vertical
		{
			while (!available_place)
			{
				placeY = rand() % 7; //ships headY
				placeX = rand() % 10; //ships headX
				if (map[placeY][placeX] != '#' &&
					map[placeY + 1][placeX] != '#' &&
					map[placeY + 2][placeX] != '#' &&

					map[placeY - 1][placeX] != '#' &&
					map[placeY + 1][placeX + 1] != '#' &&
					map[placeY + 2][placeX + 1] != '#' &&

					map[placeY - 1][placeX + 1] != '#' &&
					map[placeY + 1][placeX - 1] != '#' &&
					map[placeY + 2][placeX - 1] != '#' &&

					map[placeY - 1][placeX - 1] != '#' &&
					map[placeY + 3][placeX] != '#' &&
					map[placeY + 3][placeX + 1] != '#' &&

					map[placeY][placeX + 1] != '#' &&
					map[placeY][placeX - 1] != '#' &&
					map[placeY + 3][placeX - 1] != '#')
				{
					map[placeY][placeX] = '#';
					map[placeY + 1][placeX] = '#';
					map[placeY + 2][placeX] = '#';
					available_place = true;
				}
			}
		}
		else
		{
			while (!available_place)
			{
				placeX = rand() % 7; //ships headY
				placeY = rand() % 10; //ships headX
				if (map[placeY][placeX] != '#' &&
					map[placeY][placeX + 1] != '#' &&
					map[placeY][placeX + 2] != '#' &&

					map[placeY + 1][placeX] != '#' &&
					map[placeY + 1][placeX + 1] != '#' &&
					map[placeY + 1][placeX + 2] != '#' &&

					map[placeY - 1][placeX] != '#' &&
					map[placeY - 1][placeX + 1] != '#' &&
					map[placeY - 1][placeX + 2] != '#' &&

					map[placeY][placeX - 1] != '#' &&
					map[placeY + 1][placeX - 1] != '#' &&
					map[placeY - 1][placeX - 1] != '#' &&

					map[placeY][placeX + 3] != '#' &&
					map[placeY - 1][placeX + 3] != '#' &&
					map[placeY + 1][placeX + 3] != '#')
				{
					map[placeY][placeX] = '#';
					map[placeY][placeX + 1] = '#';
					map[placeY][placeX + 2] = '#';
					available_place = true;
				}
			}
		}
		available_place = false;
	}
};
class ship_with_2 {
private:
	int verORhor, placeX, placeY;
	bool available_place = false;
public:
	ship_with_2(char map[10][10]) {
		ship(map);
		ship(map);
		ship(map);
	}
	void ship(char map[10][10])
	{
		verORhor = rand() % 2;
		if (verORhor == 0) //0 means that vertical
		{
			while (!available_place)
			{
				placeY = rand() % 7; //ships headY
				placeX = rand() % 10; //ships headX
				if (map[placeY][placeX] != '#' &&     
					map[placeY + 1][placeX] != '#' &&

					map[placeY - 1][placeX] != '#' &&
					map[placeY + 1][placeX - 1] != '#' &&

					map[placeY - 1][placeX + 1] != '#' &&
					map[placeY + 1][placeX + 1] != '#' &&

					map[placeY + 2][placeX] != '#' &&
					map[placeY + 1][placeX - 1] != '#' &&

					map[placeY + 2][placeX - 1] != '#' &&
					map[placeY + 2][placeX + 1] != '#' &&

					map[placeY + 1][placeX + 1] != '#' &&
					map[placeY - 1][placeX - 1] != '#' &&
					map[placeY][placeX - 1] != '#' &&
					map[placeY][placeX + 1] != '#')
				{
					map[placeY][placeX] = '#';
					map[placeY + 1][placeX] = '#';
					available_place = true;
				}
			}
		}
		else
		{
			while (!available_place)
			{
				placeX = rand() % 7; //ships headY
				placeY = rand() % 10; //ships headX
				if (map[placeY][placeX] != '#' &&
					map[placeY][placeX + 1] != '#' &&

					map[placeY + 1][placeX] != '#' &&
					map[placeY + 1][placeX + 1] != '#' &&

					map[placeY - 1][placeX] != '#' &&
					map[placeY - 1][placeX + 1] != '#' &&

					map[placeY][placeX - 1] != '#' &&
					map[placeY - 1][placeX - 1] != '#' &&

					map[placeY + 1][placeX - 1] != '#' &&
					map[placeY][placeX + 2] != '#' &&

					map[placeY + 1][placeX + 2] != '#' &&
					map[placeY - 1][placeX + 2] != '#')
				{
					map[placeY][placeX] = '#';
					map[placeY][placeX + 1] = '#';
					available_place = true;
				}
			}
		}
		available_place = false;
	}
};
class ship_with_1 {
private:
	int placeX, placeY;
	bool available_place = false;
public:
	ship_with_1(char map[10][10]) {
		ship(map);
		ship(map);
		ship(map);
		ship(map);
	}
	void ship(char map[10][10])
	{
		while (!available_place)
		{
			placeX = rand() % 7; //ships headY
			placeY = rand() % 10; //ships headX
			if (map[placeY][placeX] != '#' &&
				map[placeY + 1][placeX] != '#' &&
				map[placeY - 1][placeX] != '#' &&
				map[placeY][placeX + 1] != '#' &&
				map[placeY][placeX - 1] != '#' &&
				map[placeY + 1][placeX + 1] != '#' &&
				map[placeY + 1][placeX - 1] != '#' &&
				map[placeY - 1][placeX + 1] != '#' &&
				map[placeY - 1][placeX - 1] != '#'
				)
			{
				map[placeY][placeX] = '#';
				available_place = true;
			}
		}

		available_place = false;
	}
};
class computers_shot { //computers game logic
private:
	int hits, ship4, ship3, ship2, ship1;
	int hitX, hitY, hitX1, hitY1, hitX2, hitY2; // save hitten coordinates
	int whichSide; //generates the side of shot when choosing between 2 options
	bool horizontal; // it shows if ship is horizontal or vertical
	int bigger, smaller; // it shows which index is bigger and which smaller

public:
	computers_shot()
	{
		hits = 0;
		ship4 = 1;
		ship3 = 2;
		ship2 = 3;
		ship1 = 4;
	}
	void shooting(char map[10][10])
	{
		if (hits == 0)
			zero_hits(map);
		else
		{
			while (game_over())
			{
				if (hits == 1) //2
				{
					whichSide = rand() % 4;
					if (whichSide == 0 && map[hitY][hitX - 1] != 'o' && hitX - 1 != -1) 
						if (map[hitY][hitX - 1] == '#')
							if (map[hitY][hitX - 2] != '#' && map[hitY][hitX + 1] != '#') // it means that ship is down
							{
								hits = 0;
								ship2--;
								map[hitY][hitX - 1] = '0';
								map[hitY + 1][hitX] = 'o';
								map[hitY + 1][hitX + 1] = 'o';
								map[hitY + 1][hitX - 1] = 'o';
								map[hitY - 1][hitX + 1] = 'o';
								map[hitY - 1][hitX] = 'o';
								map[hitY - 1][hitX - 1] = 'o';
								map[hitY][hitX - 2] = 'o';
								map[hitY][hitX + 1] = 'o';
								map[hitY - 1][hitX - 2] = 'o';
								map[hitY + 1][hitX - 2] = 'o';
								shooting(map);
								break;
							}
							else
							{
								hits++;
								horizontal = true;
								map[hitY][hitX - 1] = '0';
								hitY1 = hitY;
								hitX1 = hitX - 1;
								shooting(map);
								break;
							}
						else
						{
							map[hitY][hitX - 1] = 'o';
							break;
						}
					else if (whichSide == 1 && map[hitY][hitX + 1] != 'o' && hitX + 1 != 10) 
						if (map[hitY][hitX + 1] == '#')
							if (map[hitY][hitX + 2] != '#' && map[hitY][hitX - 1] != '#') // it means that ship is down
							{
								hits = 0;
								ship2--;
								map[hitY][hitX + 1] = '0';
								map[hitY + 1][hitX] = 'o';
								map[hitY + 1][hitX + 1] = 'o';
								map[hitY + 1][hitX - 1] = 'o';
								map[hitY - 1][hitX + 1] = 'o';
								map[hitY - 1][hitX] = 'o';
								map[hitY - 1][hitX - 1] = 'o';
								map[hitY][hitX - 1] = 'o';
								map[hitY][hitX + 2] = 'o';
								map[hitY - 1][hitX + 2] = 'o';
								map[hitY + 1][hitX + 2] = 'o';

								shooting(map);
								break;
							}
							else
							{
								hits++;
								horizontal = true;
								map[hitY][hitX + 1] = '0';
								hitY1 = hitY;
								hitX1 = hitX + 1;
								shooting(map);
								break;
							}
						else
						{
							map[hitY][hitX + 1] = 'o';
							break;
						}
					else if (whichSide == 2 && map[hitY - 1][hitX] != 'o' && hitY - 1 != -1) 
						if (map[hitY - 1][hitX] == '#')
							if (map[hitY - 2][hitX] != '#' && map[hitY + 1][hitX] != '#') // it means that ship is down
							{
								hits = 0;
								ship2--;
								map[hitY - 1][hitX] = '0';
								map[hitY + 1][hitX] = 'o';
								map[hitY + 1][hitX + 1] = 'o';
								map[hitY + 1][hitX - 1] = 'o';
								map[hitY - 2][hitX + 1] = 'o';
								map[hitY - 1][hitX + 1] = 'o';
								map[hitY - 1][hitX - 1] = 'o';
								map[hitY][hitX - 1] = 'o';
								map[hitY][hitX + 1] = 'o';
								map[hitY - 2][hitX] = 'o';
								map[hitY - 2][hitX - 1] = 'o';
								shooting(map);
								break;
							}
							else
							{
								hits++;
								horizontal = false;
								map[hitY - 1][hitX] = '0';
								hitY1 = hitY - 1;
								hitX1 = hitX;
								shooting(map);
								break;
							}
						else
						{
							map[hitY - 1][hitX] = 'o';
							break;
						}
					else if (whichSide == 3 && map[hitY + 1][hitX] != 'o' && hitY + 1 != 10) 
						if (map[hitY + 1][hitX] == '#')
							if (map[hitY + 2][hitX] != '#' && map[hitY - 1][hitX] != '#') // it means that ship is down
							{
								hits = 0;
								ship2--;
								map[hitY + 1][hitX] = '0';
								map[hitY + 2][hitX] = 'o';
								map[hitY + 2][hitX + 1] = 'o';
								map[hitY + 2][hitX - 1] = 'o';
								map[hitY + 2][hitX + 1] = 'o';
								map[hitY + 1][hitX + 1] = 'o';
								map[hitY + 1][hitX - 1] = 'o';
								map[hitY][hitX - 1] = 'o';
								map[hitY][hitX + 1] = 'o';
								map[hitY - 1][hitX] = 'o';
								map[hitY - 1][hitX - 1] = 'o';
								map[hitY - 1][hitX + 1] = 'o';
								shooting(map);
								break;
							}
							else
							{
								hits++;
								horizontal = false;
								map[hitY + 1][hitX] = '0';
								hitY1 = hitY + 1;
								hitX1 = hitX;
								shooting(map);
								break;
							}
						else
						{
							map[hitY + 1][hitX] = 'o';
							break;
						}
				}
				else //2
				{
					whichSide = rand() % 2;
					if (hits == 2)
					{
						if (!horizontal) // if not horizontal (vertical)
						{
							if (hitY > hitY1)
							{
								bigger = hitY;
								smaller = hitY1;
							}
							else
							{
								bigger = hitY1;
								smaller = hitY;
							}
							if (whichSide == 0 && map[bigger + 1][hitX] != 'o' && bigger + 1 != 10)
							{
								if (map[bigger + 1][hitX] == '.') // miss
								{
									map[bigger + 1][hitX] = 'o';
									break;
								}
								else // hit
								{
									map[bigger + 1][hitX] = '0';
									if (map[bigger + 2][hitX] != '#' && map[smaller - 1][hitX] != '#')
									{
										hits = 0;
										ship3--;
										for (int i = smaller - 1; i < bigger + 3; i++)
										{
											for (int j = hitX - 1; j < hitX + 2; j++)
											{
												if (map[i][j] != '0' && i != 10 && j != 10 && i != -1 && j != -1)
													map[i][j] = 'o';
											}
										}
										shooting(map);
										break;
									}
									else
									{
										hits++;
										hitY2 = bigger + 1;
										hitX2 = hitX;
										shooting(map);
										break;
									}
								}
							}
							else if (whichSide == 1 && map[smaller - 1][hitX] != 'o' && smaller - 1 != -1)
							{
								if (map[smaller - 1][hitX] == '.') // miss
								{
									map[smaller - 1][hitX] = 'o';
									break;
								}
								else // hit
								{
									map[smaller - 1][hitX] = '0';
									if (map[smaller - 2][hitX] != '#' && map[bigger + 1][hitX] != '#')
									{
										hits = 0;
										ship3--;
										for (int i = smaller - 2; i < bigger + 2; i++)
										{
											for (int j = hitX - 1; j < hitX + 2; j++)
											{
												if (map[i][j] != '0' && i != 10 && j != 10 && i != -1 && j != -1)
													map[i][j] = 'o';
											}
										}
										shooting(map);
										break;
									}
									else
									{
										hits++;
										hitY2 = smaller - 1;
										hitX2 = hitX;
										shooting(map);
										break;
									}
								}
							}
						}
						else // horizontal
						{
							if (hitX > hitX1)
							{
								bigger = hitX;
								smaller = hitX1;
							}
							else
							{
								bigger = hitX1;
								smaller = hitX;
							}
							if (whichSide == 0 && map[hitY][bigger + 1] != 'o' && bigger + 1 != 10)
							{
								if (map[hitY][bigger + 1] == '.') // miss
								{
									map[hitY][bigger + 1] = 'o';
									break;
								}
								else // hit
								{
									map[hitY][bigger + 1] = '0';
									if (map[hitY][bigger + 2] != '#' && map[hitY][smaller - 1] != '#')
									{
										hits = 0;
										ship3--;
										for (int i = hitY - 1; i < hitY + 2; i++)
										{
											for (int j = smaller - 1; j < bigger + 3; j++)
											{
												if (map[i][j] != '0' && i != 10 && j != 10 && i != -1 && j != -1)
													map[i][j] = 'o';
											}
										}
										shooting(map);
										break;
									}
									else
									{
										hits++;
										hitX2 = bigger + 1;
										hitY2 = hitY;
										shooting(map);
										break;
									}
								}
							}
							else if (whichSide == 1 && map[hitY][smaller - 1] != 'o' && smaller - 1 != -1)
							{
								if (map[hitY][smaller - 1] == '.') // mis
								{
									map[hitY][smaller - 1] = 'o';
									break;
								}
								else // hit
								{
									map[hitY][smaller - 1] = '0';
									if (map[hitY][smaller - 2] != '#' && map[hitY][bigger + 1] != '#')
									{
										hits = 0;
										ship3--;
										for (int i = hitY - 1; i < hitY + 2; i++)
										{
											for (int j = smaller - 2; j < bigger + 2; j++)
											{
												if (map[i][j] != '0' && i != 10 && j != 10 && i != -1 && j != -1)
													map[i][j] = 'o';
											}
										}
										shooting(map);
										break;
									}
									else
									{
										hits++;
										hitX2 = smaller - 1;
										hitY2 = hitY;
										shooting(map);
										break;
									}
								}
							} 
						}
					}
					else // hits == 3
					{
						if (!horizontal) // if not horizontal (vertical)
						{
							int biggest_index[3] = { hitY, hitY1, hitY2 };
							sort(biggest_index, biggest_index + 3);
							bigger = biggest_index[2];
							smaller = biggest_index[0];
							if (whichSide == 0 && map[bigger + 1][hitX] != 'o' && bigger + 1 != 10)
							{
								if (map[bigger + 1][hitX] == '.') // miss
								{
									map[bigger + 1][hitX] = 'o';
									break;
								}
								else // hit
								{
									map[bigger + 1][hitX] = '0';
									hits = 0;
									ship4--;
									for (int i = smaller - 1; i < bigger + 3; i++)
									{
										for (int j = hitX - 1; j < hitX + 2; j++)
										{
											if (map[i][j] != '0' && i != 10 && j != 10 && i != -1 && j != -1)
												map[i][j] = 'o';
										}
									}
									shooting(map);
									break;
								}
							}
							else if (whichSide == 1 && map[smaller - 1][hitX] != 'o' && smaller - 1 != -1)
							{
								if (map[smaller - 1][hitX] == '.') // miss
								{
									map[smaller - 1][hitX] = 'o';
									break;
								}
								else // hit
								{
									map[smaller - 1][hitX] = '0';
									hits = 0;
									ship4--;
									for (int i = smaller - 2; i < bigger + 2; i++)
									{
										for (int j = hitX - 1; j < hitX + 2; j++)
										{
											if (map[i][j] != '0' && i != 10 && j != 10 && i != -1 && j != -1)
												map[i][j] = 'o';
										}
									}
									shooting(map);
									break;
								}
							}
						}
						else // horizontal
						{
							int biggest_index[3] = { hitX, hitX1, hitX2 };
							sort(biggest_index, biggest_index + 3);
							bigger = biggest_index[2];
							smaller = biggest_index[0];
							if (whichSide == 0 && map[hitY][bigger + 1] != 'o' && bigger + 1 != 10)
							{
								if (map[hitY][bigger + 1] == '.') // miss
								{
									map[hitY][bigger + 1] = 'o';
									break;
								}
								else // hit
								{
									map[hitY][bigger + 1] = '0';
									hits = 0;
									ship4--;
									for (int i = hitY - 1; i < hitY + 2; i++)
									{
										for (int j = smaller - 1; j < bigger + 3; j++)
										{
											if (map[i][j] != '0' && i != 10 && j != 10 && i != -1 && j != -1)
												map[i][j] = 'o';
										}
									}
									shooting(map);
									break;
								}
							}
							else if (whichSide == 1 && map[hitY][smaller - 1] != 'o' && smaller - 1 != -1)
							{
								if (map[hitY][smaller - 1] == '.') // miss
								{
									map[hitY][smaller - 1] = 'o';
									break;
								}
								else // hit
								{
									map[hitY][smaller - 1] = '0';
									hits = 0;
									ship4--;
									for (int i = hitY - 1; i < hitY + 2; i++)
									{
										for (int j = smaller - 2; j < bigger + 2; j++)
										{
											if (map[i][j] != '0' && i != 10 && j != 10 && i != -1 && j != -1)
												map[i][j] = 'o';
										}
									}
									shooting(map);
									break;
								}
							}
						}
					}
				}
			}
		}
	}
	void zero_hits(char map[10][10])
	{
		if (!game_over())
		{
			cout << endl << "----------GAME OVER, YOU LOSE------------ " << endl;
			system("pause");
		}
		int x, y;
		while (true)
		{
			x = rand() % 10;
			y = rand() % 10;
			if (map[y][x] != 'o' && map[y][x] != '0')
			{
				if (ship4 == 1)
				{
					// horizontal
					if (x > 2 && x < 7 && map[y][x + 1] != 'o' && map[y][x + 2] != 'o' && map[y][x + 3] != 'o') // checking horizontal
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (x > 2 && x < 7 && map[y][x - 1] != 'o' && map[y][x + 1] != 'o' && map[y][x + 2] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (x > 2 && x < 7 && map[y][x + 1] != 'o' && map[y][x - 1] != 'o' && map[y][x - 2] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (x > 2 && x < 7 && map[y][x - 1] != 'o' && map[y][x - 2] != 'o' && map[y][x - 3] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					// vertical
					else if (y > 2 && y < 7 && map[y + 1][x] != 'o' && map[y + 2][x] != 'o' && map[y + 3][x] != 'o') // checking horizontal
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (y > 2 && y < 7 && map[y - 1][x] != 'o' && map[y + 1][x] != 'o' && map[y + 2][x] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (y > 2 && y < 7 && map[y + 1][x] != 'o' && map[y - 1][x] != 'o' && map[y - 2][x] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (y > 2 && y < 7 && map[y - 1][x] != 'o' && map[y - 2][x] != 'o' && map[y - 3][x] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
				}
				if (ship3 > 0)
				{
					// horizontal
					if (x > 1 && x < 9 && map[y][x + 1] != 'o' && map[y][x + 2] != 'o') // checking horizontal
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (x > 1 && x < 8 && map[y][x - 1] != 'o' && map[y][x + 1] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (x > 1 && x < 8 && map[y][x + 1] != 'o' && map[y][x - 1] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (x > 1 && x < 8 && map[y][x - 1] != 'o' && map[y][x - 2] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					// vertical
					else if (y > 1 && y < 8 && map[y + 1][x] != 'o' && map[y + 2][x] != 'o') // checking horizontal
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (y > 1 && y < 8 && map[y - 1][x] != 'o' && map[y + 1][x] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (y > 1 && y < 8 && map[y + 1][x] != 'o' && map[y - 1][x] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (y > 1 && y < 8 && map[y - 1][x] != 'o' && map[y - 2][x] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
				}
				if (ship2 > 0)
				{
					// horizontal
					if (x > 0 && x < 9 && map[y][x + 1] != 'o') // checking horizontal
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (x > 0 && x < 9 && map[y][x - 1] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (x > 0 && x < 9 && map[y][x + 1] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (x > 0 && x < 9 && map[y][x - 1] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					// if vertical
					else if (y > 0 && y < 9 && map[y + 1][x] != 'o') // checking horizontal
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (y > 0 && y < 9 && map[y - 1][x] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (y > 0 && y < 9 && map[y + 1][x] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
					else if (y > 0 && y < 9 && map[y - 1][x] != 'o')
					{
						if (map[y][x] == '#')
						{
							if (map[y][x + 1] == '#' || map[y][x - 1] == '#' || map[y + 1][x] == '#' || map[y - 1][x] == '#')
							{
								map[y][x] = '0';
								hits++;
								hitX = x;
								hitY = y;
								shooting(map);
								break;
							}
							else
							{
								ship1--;
								map[y][x] = '0';
								map[y + 1][x] = 'o';
								map[y - 1][x] = 'o';
								map[y][x + 1] = 'o';
								map[y][x - 1] = 'o';
								map[y + 1][x - 1] = 'o';
								map[y + 1][x + 1] = 'o';
								map[y - 1][x - 1] = 'o';
								map[y - 1][x + 1] = 'o';
								zero_hits(map);
								break;
							}
						}
						else
						{
							map[y][x] = 'o';
							break;
						} // end of checking one option
					}
				}
				else
					if (map[y][x] == '#')
						if (map[y][x + 1] != '#' && map[y][x - 1] != '#' && map[y + 1][x] != '#' && map[y - 1][x] != '#')
						{
							ship1--;
							map[y][x] = '0';
							map[y + 1][x] = 'o';
							map[y - 1][x] = 'o';
							map[y][x + 1] = 'o';
							map[y][x - 1] = 'o';
							map[y + 1][x - 1] = 'o';
							map[y + 1][x + 1] = 'o';
							map[y - 1][x - 1] = 'o';
							map[y - 1][x + 1] = 'o';
							zero_hits(map);
							break;
						}
						else
						{
							map[y][x] = '0';
							hits++;
							hitX = x;
							hitY = y;
							break;
							shooting(map);
						}
					else
					{
						map[y][x] = 'o';
						break;
					}
			}

		}
	}
	bool game_over()
	{
		if (ship4 == 0 && ship3 == 0 && ship2 == 0 && ship1 == 0)
			return false;
		else
			return true;
	}
};

class players_shot {
private:
	int x;
	char y;
	int Y;
	bool hit;
	int hits;
	bool drown_ship;
public:
	players_shot()
	{
		hits = 0;
	}
	void input()
	{
		cout << endl << "enter letter, then number" << endl;
		cin >> y >> x;
		x = x - 1;
		switch (y)
		{
		case 'a':
		{
			Y = 0;
			break;
		}
		case 'b':
		{
			Y = 1;
			break;
		}
		case 'c':
		{
			Y = 2;
			break;
		}
		case 'd':
		{
			Y = 3;
			break;
		}
		case 'e':
		{
			Y = 4;
			break;
		}
		case 'f':
		{
			Y = 5;
			break;
		}
		case 'g':
		{
			Y = 6;
			break;
		}
		case 'h':
		{
			Y = 7;
			break;
		}
		case 'i':
		{
			Y = 8;
			break;
		}
		case 'j':
		{
			Y = 9;
			break;
		}
		}
	}
	void shot(char invisible_map[10][10], char computers_map[10][10])
	{
		drown_ship = false;
		if (invisible_map[Y][x] == '#')
		{
			invisible_map[Y][x] = '0';
			computers_map[Y][x] = '0';
			hit = true;
			hits++;
			if (invisible_map[Y][x + 1] != '#' && invisible_map[Y][x - 1] != '#' && invisible_map[Y + 1][x] != '#' && invisible_map[Y - 1][x] != '#')
				drown_ship = true;
			if (hits == 23)
			{
				cout << endl << " ----------YOU WIN, now take a medal and go, do something meaningful---------------" << endl;
				system("pause");
			}
		}
		else
		{
			invisible_map[Y][x] = 'o';
			computers_map[Y][x] = 'o';
			hit = false;
		}
	}
	void check_ship()
	{
		if (drown_ship)
			cout << endl << " ----------------------THE SHIP IS DOWN------------------------------" << endl;
	}
	bool check_hit()
	{
		return hit;
	}
};

int main() {
	srand(time(NULL));
	char invisible_map[10][10];
	char players_map[10][10];
	char shooting_field[10][10];
	char letters[10] = { 'a','b','c','d','e','f','g','h','i','j' };
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			invisible_map[i][j] = '.';
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			players_map[i][j] = '.';
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			shooting_field[i][j] = '.';

	// computers ships
	ship_with_4 one(invisible_map);
	ship_with_3 two(invisible_map);
	ship_with_2 three(invisible_map);
	ship_with_1 four(invisible_map);
	
	// players ships
	ship_with_4 one1(players_map);
	ship_with_3 two2(players_map);
	ship_with_2 three3(players_map);
	ship_with_1 four4(players_map);
	

	cout << endl;
	computers_shot a;
	players_shot b;

	cout << endl << "SHOOTING FIELD" << endl;
	cout << " ";
	for (int i = 1; i < 11; i++)
		cout << setw(3) << i;
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << letters[i];
		for (int j = 0; j < 10; j++)
		{
			cout << setw(3) << shooting_field[i][j];
		}
		cout << endl;
	}
	cout << endl << "PLAYERS SHIPS" << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << setw(3) << players_map[i][j];
		}
		cout << endl;
	}
	while (true)
	{
		while (true)
		{
			b.input();
			b.shot(invisible_map, shooting_field);
			if (!b.check_hit())
				break;
			system("cls");
			cout << endl << "SHOOTING FIELD" << endl;
			cout << " ";
			for (int i = 1; i < 11; i++)
				cout << setw(3) << i;
			cout << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << letters[i];
				for (int j = 0; j < 10; j++)
				{
					cout << setw(3) << shooting_field[i][j];
				}
				cout << endl;
			}
			b.check_ship();
			cout << endl << "PLAYERS SHIPS" << endl << endl;
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					cout << setw(3) << players_map[i][j];
				}
				cout << endl;
			}
		}
		system("cls");
		a.shooting(players_map);
		cout << endl << "SHOOTING FIELD" << endl;
		cout << " ";
		for (int i = 1; i < 11; i++)
			cout << setw(3) << i;
		cout << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << letters[i];
			for (int j = 0; j < 10; j++)
			{
				cout << setw(3) << shooting_field[i][j];
			}
			cout << endl;
		}
		cout << endl << "PLAYERS SHIPS" << endl << endl;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << setw(3) << players_map[i][j];
			}
			cout << endl;
		}
	}

}