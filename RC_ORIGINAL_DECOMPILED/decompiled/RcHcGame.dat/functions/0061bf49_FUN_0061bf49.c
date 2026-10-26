/*
 * FUN_0061bf49 at 0061bf49
 * undefined FUN_0061bf49(void)
 * Address ranges: 0061bf49-0061bfa0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte * FUN_0061bf49(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_00747ea8 == 0) {
    FUN_0061b888();
  }
  bVar1 = *DAT_00747eb4;
  pbVar4 = DAT_00747eb4;
  if (bVar1 == 0x22) {
    while( true ) {
      pbVar3 = pbVar4;
      bVar1 = pbVar3[1];
      pbVar4 = pbVar3 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar2 = FUN_0061e1a3(bVar1);
      if (iVar2 != 0) {
        pbVar4 = pbVar3 + 2;
      }
    }
    if (*pbVar4 == 0x22) goto LAB_0061bf86;
  }
  else {
    while (0x20 < bVar1) {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
LAB_0061bf86:
  }
  return pbVar4;
}

