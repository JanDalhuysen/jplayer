/*
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVDEVICE_VERSION_MAJOR_H
#define AVDEVICE_VERSION_MAJOR_H

/**
 * @file
 * @ingroup lavd
 * Libavdevice version macros
 */

#define LIBAVDEVICE_VERSION_MAJOR  61

/**
 * FF_API_* defines may be placed below to indicate public API that will be
 * dropped at a future version bump. The defines themselves are not part of
 * the public API and may change, break or disappear at any time.
 */

// reminder to remove the bktr device on next major bump
#define FF_API_BKTR_DEVICE (LIBAVDEVICE_VERSION_MAJOR < 62)
// reminder to remove the opengl device on next major bump
#define FF_API_OPENGL_DEVICE (LIBAVDEVICE_VERSION_MAJOR < 62)
// reminder to remove the sdl2 device on next major bump
#define FF_API_SDL2_DEVICE (LIBAVDEVICE_VERSION_MAJOR < 62)
#define FF_API_ALSA_CHANNELS (LIBAVDEVICE_VERSION_MAJOR < 62)

#endif /* AVDEVICE_VERSION_MAJOR_H */
