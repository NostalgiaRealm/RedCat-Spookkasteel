/*
 * FUN_0040e389 at 0040e389
 * byte * __stdcall FUN_0040e389(void)
 * Address ranges: 0040e389-0040e3e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte * FUN_0040e389(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_00413f08 == 0) {
    FUN_0040ef3c();
  }
  bVar1 = *DAT_00413f18;
  pbVar4 = DAT_00413f18;
  if (bVar1 == 0x22) {
    while( true ) {
      pbVar3 = pbVar4;
      bVar1 = pbVar3[1];
      pbVar4 = pbVar3 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar2 = FUN_0040f295(bVar1);
      if (iVar2 != 0) {
        pbVar4 = pbVar3 + 2;
      }
    }
    if (*pbVar4 == 0x22) goto LAB_0040e3c6;
  }
  else {
    while (0x20 < bVar1) {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
LAB_0040e3c6:
  }
  return pbVar4;
}

