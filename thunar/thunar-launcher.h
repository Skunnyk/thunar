/* $Id$ */
/*-
 * Copyright (c) 2005 Benedikt Meurer <benny@xfce.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __THUNAR_LAUNCHER_H__
#define __THUNAR_LAUNCHER_H__

#include <thunar/thunar-file.h>

G_BEGIN_DECLS;

typedef struct _ThunarLauncherClass ThunarLauncherClass;
typedef struct _ThunarLauncher      ThunarLauncher;

#define THUNAR_TYPE_LAUNCHER            (thunar_launcher_get_type ())
#define THUNAR_LAUNCHER(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), THUNAR_TYPE_LAUNCHER, ThunarLauncher))
#define THUNAR_LAUNCHER_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), THUNAR_TYPE_LAUNCHER, ThunarLauncherClass))
#define THUNAR_IS_LAUNCHER(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THUNAR_TYPE_LAUNCHER))
#define THUNAR_IS_LAUNCHER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THUNAR_TYPE_LAUNCHER))
#define THUNAR_LAUNCHER_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), THUNAR_TYPE_LAUNCHER, ThunarLauncherClass))

GType           thunar_launcher_get_type            (void) G_GNUC_CONST;

ThunarLauncher *thunar_launcher_new                 (void) G_GNUC_MALLOC;

GtkActionGroup *thunar_launcher_get_action_group    (const ThunarLauncher *launcher);
void            thunar_launcher_set_action_group    (ThunarLauncher       *launcher,
                                                     GtkActionGroup       *action_group);

GList          *thunar_launcher_get_selected_files  (const ThunarLauncher *launcher);
void            thunar_launcher_set_selected_files  (ThunarLauncher       *launcher,
                                                     GList                *selected_files);

GtkWidget      *thunar_launcher_get_widget          (const ThunarLauncher *launcher);
void            thunar_launcher_set_widget          (ThunarLauncher       *launcher,
                                                     GtkWidget            *widget);

G_END_DECLS;

#endif /* !__THUNAR_LAUNCHER_H__ */
