/*
 * FUN_00402340 at 00402340
 * byte * __stdcall FUN_00402340(void)
 * Address ranges: 00402340-00402397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte * FUN_00402340(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_0040948c == 0) {
    FUN_0040365b();
  }
  bVar1 = *DAT_00409484;
  pbVar4 = DAT_00409484;
  if (bVar1 == 0x22) {
    while( true ) {
      pbVar3 = pbVar4;
      bVar1 = pbVar3[1];
      pbVar4 = pbVar3 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar2 = FUN_00403255(bVar1);
      if (iVar2 != 0) {
        pbVar4 = pbVar3 + 2;
      }
    }
    if (*pbVar4 == 0x22) goto LAB_0040237d;
  }
  else {
    while (0x20 < bVar1) {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
LAB_0040237d:
  }
  return pbVar4;
}

