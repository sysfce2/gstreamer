/* GStreamer
 * Copyright (C) 2025 Seungha Yang <seungha@centricular.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#pragma once

#include <gst/gst.h>
#include <gst/video/video.h>
#include <gst/video/gstvideoaggregator.h>

G_BEGIN_DECLS

#define GST_TYPE_HIP_COMPOSITOR_PAD (gst_hip_compositor_pad_get_type())
G_DECLARE_FINAL_TYPE (GstHipCompositorPad, gst_hip_compositor_pad,
    GST, HIP_COMPOSITOR_PAD, GstVideoAggregatorPad)

#define GST_TYPE_HIP_COMPOSITOR (gst_hip_compositor_get_type())
G_DECLARE_FINAL_TYPE (GstHipCompositor, gst_hip_compositor,
    GST, HIP_COMPOSITOR, GstVideoAggregator)

G_END_DECLS

