/*
 * FUN_00600481 at 00600481
 * undefined FUN_00600481(void)
 * Address ranges: 00600481-006004a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_00600481(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = *(uint *)param_1[7];
  if ((uVar2 != 0) && (uVar2 < *(int *)param_1[0xb] + uVar2)) {
    pbVar1 = (byte *)FUN_006004a4();
    return (uint)*pbVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x14))();
  return uVar2;
}

