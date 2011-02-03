/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*- */
/*
 * Copyright (C) 2010 ammonkey
 *
 * Rhythmbox is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * Rhythmbox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; see the file COPYING.  If not,
 * write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Author: ammonkey <am.monkeyd@gmail.com>
 *
 */

#ifndef RB_TOOLBAR_EDITOR_H
#define RB_TOOLBAR_EDITOR_H

#include <glib-object.h>
#include <gtk/gtk.h>
#include "rb-shell.h"

G_BEGIN_DECLS

void rb_toolbar_editor_dialog_show (GCallback close_callback, RBShell *shell);

G_END_DECLS

#endif /* RB_TOOLBAR_EDITOR_H */
