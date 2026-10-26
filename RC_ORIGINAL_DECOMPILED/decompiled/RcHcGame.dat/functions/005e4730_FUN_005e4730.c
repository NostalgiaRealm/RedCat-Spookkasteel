/*
 * FUN_005e4730 at 005e4730
 * undefined FUN_005e4730(void)
 * Address ranges: 005e4730-005e475a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_005e4730(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x10))();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  *(int *)param_1[0xb] = *(int *)param_1[0xb] + -1;
  pbVar1 = *(byte **)param_1[7];
  *(byte **)param_1[7] = pbVar1 + 1;
  return (uint)*pbVar1;
}

