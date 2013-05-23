/* input.c --- 
 * 
 * Filename: input.c
 * Description: 
 * Author: Julien DEMESY
 * Maintainer: 
 * Created: Thu May 23 16:13:21 2013 (+0200)
 * Version: 
 * Last-Updated: Thu May 23 16:13:49 2013 (+0200)
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
 * Input handling functions
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

#include "input.h"

void getInput()
{
  SDL_Event event;

  /* Keymapping : gère les appuis sur les touches et les enregistre
     dans la structure input */

  while (SDL_PollEvent(&event))
    {
      switch (event.type)
        {

	case SDL_QUIT:
	  exit(0);
	  break;

	case SDL_KEYDOWN:
	  switch (event.key.keysym.sym)
	    {
	    case SDLK_ESCAPE:
	      exit(0);
	      break;

	    case SDLK_DELETE:
	      input.erase = 1;
	      break;

	    case SDLK_c:
	      input.jump = 1;
	      break;

	    case SDLK_v:
	      input.attack = 1;
	      break;

	    case SDLK_LEFT:
	      input.left = 1;
	      break;

	    case SDLK_RIGHT:
	      input.right = 1;
	      break;

	    case SDLK_DOWN:
	      input.down = 1;
	      break;

	    case SDLK_UP:
	      input.up = 1;
	      break;

	    case SDLK_RETURN:
	      input.enter = 1;
	      break;

	    default:
	      break;
	    }
	  break;

	case SDL_KEYUP:
	  switch (event.key.keysym.sym)
	    {
	    case SDLK_DELETE:
	      input.erase = 0;
	      break;

	    case SDLK_c:
	      input.jump = 0;
	      break;

	    case SDLK_LEFT:
	      input.left = 0;
	      break;

	    case SDLK_RIGHT:
	      input.right = 0;
	      break;

	    case SDLK_DOWN:
	      input.down = 0;
	      break;

	    case SDLK_UP:
	      input.up = 0;
	      break;

	    case SDLK_RETURN:
	      input.enter = 0;
	      break;

	    default:
	      break;
	    }
	  break;

        }

    }
}

/* input.c ends here */
