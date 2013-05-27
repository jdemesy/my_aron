/* draw.c --- 
 * 
 * Filename: draw.c
 * Description: 
 * Author: Julien DEMESY
 * Maintainer: 
 * Created: Thu May 23 16:15:45 2013 (+0200)
 * Version: 
 * Last-Updated: Thu May 23 16:16:03 2013 (+0200)
 *           By: Julien DEMESY
 *     Update #: 1
 * URL: 
 * Doc URL: 
 * Keywords: 
 * Compatibility: 
 * 
 */

/* Commentary: 
 * 
 * Drawing functions
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

#include "draw.h"

void drawImage(SDL_Surface *image, int x, int y)
{
  SDL_Rect dest;

  dest.x = x;
  dest.y = y;
  dest.w = image->w;
  dest.h = image->h;

  SDL_BlitSurface(image, NULL, jeu.screen, &dest);
}

void drawTile(SDL_Surface *image, int destx, int desty, int srcx, int srcy)
{
  SDL_Rect dest, src;

  dest.x = destx;
  dest.y = desty;
  dest.w = dest.h = TILE_SIZE;

  src.x = srcx;
  src.y = srcy;
  src.w = src.h = TILE_SIZE;

  SDL_BlitSurface(image, &src, jeu.screen, &dest);
}

void draw(void)
{
  /* Affichage du background */
  drawImage(map.background, 0, 0);

  /* Affichage de la map de tile */
  drawMap();

  /* Affiche l'écran */
  SDL_Flip(jeu.screen);


  /* Delai */
  SDL_Delay(1);

}

SDL_Surface *loadImage(char *name)
{
  SDL_Surface *temp = IMG_Load(name);
  SDL_Surface *image;

  if (temp == NULL)
    {
      printf("Failed to load image %s\n", name);
      return NULL;
    }

  SDL_SetColorKey(temp, (SDL_SRCCOLORKEY|SDL_RLEACCEL),
		  SDL_MapRGB(temp->format, TRANS_R, TRANS_G, TRANS_B));

  image = SDL_DisplayFormat(temp);

  SDL_FreeSurface(temp);

  if (image == NULL)
    {
      printf("Failed to convert image %s to native format.\n", name);

      return NULL;
    }
  return image;
}

void delay(unsigned int frameLimit)
{

  /* Gestion des 60 fps (images/stories/seconde) */

  unsigned int ticks = SDL_GetTicks();

  if (frameLimit < ticks)
    {
      return;
    }

  if (frameLimit > ticks + 16)
    {
      SDL_Delay(16);
    }

  else
    {
      SDL_Delay(frameLimit - ticks);
    }
}

/* draw.c ends here */
