/*
 * FUN_1002827e at 1002827e
 * undefined FUN_1002827e(void)
 * Address ranges: 1002827e-10028308
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1002827e(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  while( true ) {
    if (DAT_1003d32c < 2) {
      uVar1 = (byte)PTR_DAT_1003d120[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar1 = FUN_1002c371(*param_1,8);
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_1003d32c < 2) {
      uVar2 = (byte)PTR_DAT_1003d120[uVar4 * 2] & 4;
    }
    else {
      uVar2 = FUN_1002c371(uVar4,4);
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}

