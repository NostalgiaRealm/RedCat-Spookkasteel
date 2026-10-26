/*
 * FUN_005e4cd0 at 005e4cd0
 * undefined FUN_005e4cd0(void)
 * Address ranges: 005e4cd0-005e4cff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_005e4cd0(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[0xb])) {
    return (uint)*pbVar1;
  }
  iVar2 = *param_1;
  uVar3 = (**(code **)(iVar2 + 0x14))();
  uVar4 = (**(code **)(iVar2 + 8))(uVar3);
  return uVar4;
}

