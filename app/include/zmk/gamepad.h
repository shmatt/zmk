/*
 * Copyright (c) 2026 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zephyr/sys/util.h>
#include <stdint.h>

/* 32 buttons so a full two-Joy-Con pad fits: four face, four D-pad, four
 * shoulders, two stick clicks, start/select, home and capture, with room
 * spare. */
typedef uint32_t zmk_gamepad_button_flags_t;
typedef uint16_t zmk_gamepad_button_t;
