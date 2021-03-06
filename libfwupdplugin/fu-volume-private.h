/*
 * Copyright (C) 2018-2020 Richard Hughes <richard@hughsie.com>
 * Copyright (C) 2019 Mario Limonciello <mario.limonciello@dell.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

#include <glib-object.h>

#include "fu-volume.h"

FuVolume	*fu_volume_new_from_proxy		(GDBusProxy	*proxy);
FuVolume	*fu_volume_new_from_mount_path		(const gchar	*mount_path);
