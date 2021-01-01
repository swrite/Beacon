/*-
 *
 * extc2: open source dns over http(s)
 * transport for cs. does not use the
 * smb beacon.
 *
-*/

#pragma once

#define BEACON_LINK_NONE		0
#define BEACON_LINK_GOOD		1
#define BEACON_LINK_BROKEN		2

#define BEACON_METADATA_FLAG_NOTHING	1
#define BEACON_METADATA_FLAG_X64_AGENT	2
#define BEACON_METADATA_FLAG_SYSTEM	4
#define BEACON_METADATA_FLAG_ADMIN	8

typedef struct __attribute__((packed, scalar_storage_order("big-endian")))
{
	ULONG	Magic;
	ULONG	Length;
	UCHAR	Buffer[0];
} BEACON_METADATA_HDR, *PBEACON_METADATA_HDR;

/*-
 *
 * BeaconComputer
 *
 * Purpose:
 *
 * Returns a string containing the name
 * of the computer Beacon is running on
 *
-*/
DEFINESEC(B) PVOID BeaconComputer( PBEACON_INSTANCE Ins );
