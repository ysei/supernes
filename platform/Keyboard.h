/*
 * ===========================================================================
 *
 *       Filename:  Keyboard.h
 *
 *    Description:  Keybindings, etc
 *
 *        Version:  1.0
 *        Created:  08/24/2010 09:01:13 PM
 *
 *         Author:  Will Dietz (WD), w@wdtz.org
 *        Company:  dtzTech
 *
 * ===========================================================================
 */

#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_

#include "platform.h"
#include <SDL.h>

void initialize_keymappings(struct config * C);
bool keyboardBindingFilter( const SDL_Event& event );
void updateBindingMessage();

#endif //_KEYBOARD_H_
