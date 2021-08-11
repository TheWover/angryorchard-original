/**
 *
 * Disables driver signing enforcement from
 * usermode, and loads a requested driver
 * into memory.
 *
 * Do to the lack of a driver and usage of
 * a userland bug, this project remains 
 * closed source.
 *
**/

#pragma once

#include <windows.h>
#include <ntstatus.h>
#include <sddl.h>
#include <tlhelp32.h>
#include <psapi.h>
#include "macros.h"
#include "tebpeb.h"
#include "labels.h"
#include "hashes.h"
#include "ntuser.h"
#include "hash.h"
#include "peb.h"
#include "api.h"
#include "dse.h"
#include "pe.h"
