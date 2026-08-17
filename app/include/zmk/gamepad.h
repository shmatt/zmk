/*
 * Copyright (c) 2026 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <stdint.h>

/* 32 buttons, so a controller with two halves' worth of controls fits: four
 * face, four D-pad, four shoulders, two stick clicks, start/select, home and
 * capture, with room to spare. */
typedef uint32_t zmk_gamepad_button_flags_t;
typedef uint16_t zmk_gamepad_button_t;
