// Copyright 2018 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include <lib/async/dispatcher.h>

__BEGIN_CDECLS

// Returns the current time in the dispatcher's timebase.
// For most loops, this is generally obtained from |ZX_CLOCK_MONOTONIC|
// but certain loops may use a different tiembase, notably for testing.
zx_time_t async_now(async_t* async);

__END_CDECLS
