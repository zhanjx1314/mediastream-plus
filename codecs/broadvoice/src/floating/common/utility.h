/*
 * broadvoice - a library for the BroadVoice 16 and 32 codecs
 *
 * utility.h -
 *
 * Adapted by Steve Underwood <steveu@coppice.org> from code which is
 * Copyright 2000-2009 Broadcom Corporation
 *
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License version 2.1,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * $Id: utility.h,v 1.1.1.1 2009/11/19 12:10:48 steveu Exp $
 */

#include "typedef.h"

extern void Fcopy(Float *y, Float *x, int size);
extern void Fzero(Float *x, int size);
extern void F2s(int16_t *s, Float *f, int size);
