// Copyright (c) Microsoft Corporation
// SPDX-License-Identifier: MIT
#pragma once

#include <ntdef.h>
#include <ntstatus.h>
#include <ntintsafe.h>
#include <ntddk.h>
#include <netioddk.h>
#include <stdint.h>

#define bool BOOLEAN
#define true 1
#define false 0

#define ebpf_assert(x) ASSERT(x)

#define ebpf_list_entry_t LIST_ENTRY

#define ebpf_list_initialize InitializeListHead
#define ebpf_list_is_empty IsListEmpty
#define ebpf_list_insert_tail InsertTailList
#define ebpf_list_remove_entry RemoveEntryList
