/*-
 *
 * extc2: open source dns over http(s)
 * transport for cs. does not use the
 * smb beacon.
 *
-*/

#pragma once

/*-
 *
 * CryptAesInit
 *
 * Purpose:
 *
 * Creates the key object for AES
 *
-*/
DEFINESEC(B) BOOL CryptAesInit( PBEACON_INSTANCE Ins );

/*-
 *
 * CryptAesFree
 *
 * Purpose:
 *
 * Free's the associated keys for AES
 *
-*/
DEFINESEC(B) VOID CryptAesFree( PBEACON_INSTANCE Ins );
