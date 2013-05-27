/* map.c --- 
 * 
 * Filename: map.c
 * Description: 
 * Author: Julien DEMESY
 * Maintainer: 
 * Created: Mon May 27 17:25:57 2013 (+0200)
 * Version: 
 * Last-Updated: 
 *           By: 
 *     Update #: 0
 * URL: 
 * Doc URL: 
 * Keywords: 
 * Compatibility: 
 * 
 */

/* Commentary: 
 * 
 * 
 * 
 */

/* Change Log:
 * 
 * 
 */

/* This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 3, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth
 * Floor, Boston, MA 02110-1301, USA.
 */

/* Code: */

#include	"map.h"

void	loadMap(char *name)
{
  int x, y;
  FILE *fp;

  if ((fp = fopen(name, "rb")) == NULL)
    {
      printf("Failed to open map %s\n", name);
      exit(EXIT_FAILURE);
    }

  map.maxX = map.maxY = 0;
  for (y = 0; y < MAX_MAP_Y; y++)
    {
      for (x = 0; x < MAX_MAP_X; x++)
	{
	  fscanf(fp, "%d", &map.tile[y][x]);

	  if (map.tile[y][x] > 0)
	    {
	      if (x > map.maxX)
		map.maxX = x;
	      if (y > map.maxY)
		map.maxY = y;
	    }
	}
    }
  map.maxX = (map.maxX + 1) * TILE_SIZE;
  map.maxY = (map.maxY + 1) * TILE_SIZE;
  map.startX = map.startY = 0;
  fclose(fp);
}

void	drawMap(void)
{
  int x, y, mapX, x1, x2, mapY, y1, y2, xsource, ysource, a;

  mapX = x1 = mapY = y1 = 0;
  x2 = SCREEN_WIDTH;
  y2 = SCREEN_HEIGHT;

  for (y = y1; y < y2; y += TILE_SIZE)
    {
      mapX = map.startX / TILE_SIZE;
      for (x = x1; x < x2; x += TILE_SIZE)
	{
	  a = map.tile[mapY][mapX];
	  ysource = a / 10 * TILE_SIZE;
	  xsource = a % 10 * TILE_SIZE;
	  drawTile(map.tileSet, x, y, xsource, ysource);
	  mapX++;
	}
      mapY++;
    }
}

/* map.c ends here */
