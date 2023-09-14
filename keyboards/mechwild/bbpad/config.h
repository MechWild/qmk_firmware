// Copyright 2022 Kyle McCreery (@kylemccreery)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* RGB settings, uncomment this define to enable RGB */
#define RGB_MATRIX_LED_COUNT  28

#define WS2812_PWM_DRIVER PWMD4
#define WS2812_PWM_CHANNEL 1
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM6
#define WS2812_DMA_CHANNEL 2
