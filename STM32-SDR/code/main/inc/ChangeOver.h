/*
 * Header file for changeover code used to switch between RX and TX
 *
 * STM32-SDR: A software defined HAM radio embedded system.
 * Copyright (C) 2013, STM32-SDR Group
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef CHANGEOVER_H_
#define CHANGEOVER_H_
void Receive_Sequence(void);

void Xmit_SSB_Sequence(void);

void Xmit_CW_Sequence(void);

void Xmit_PSK_Sequence(void);

void Init_PTT_IO(void);
#endif /* CHANGEOVER_H_ */


