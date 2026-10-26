/*
 * FUN_005f5dd0 at 005f5dd0
 * undefined FUN_005f5dd0(void)
 * Address ranges: 005f5dd0-005f5e23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

short * __thiscall FUN_005f5dd0(short *param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  
  sVar1 = FUN_005e9f10();
  *param_1 = sVar1;
  if ((sVar1 != 0xff) && (sVar4 = 0, 0 < sVar1)) {
    do {
      iVar3 = (int)sVar4;
      uVar2 = FUN_005e9f10();
      *(undefined4 *)(param_1 + iVar3 * 2 + 2) = uVar2;
      sVar1 = FUN_005e6fb0(param_2);
      sVar4 = sVar4 + 1;
      param_1[iVar3 + 0xc] = sVar1;
    } while (sVar4 < *param_1);
    return param_1;
  }
  return param_1;
}

