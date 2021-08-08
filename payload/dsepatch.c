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

#include "common.h"

/**
 *
 * Purpose:
 *
 * Disables driver signing enforcement for
 * the system, allowing an arbitrary user
 * to load drivers.
 *
**/

D_SEC( D ) VOID WINAPI DsePatch( VOID ) 
{
	/* Disable Driver Signing Enforcement! */
};