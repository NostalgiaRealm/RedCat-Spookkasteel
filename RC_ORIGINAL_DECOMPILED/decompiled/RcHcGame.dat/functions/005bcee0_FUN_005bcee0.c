/*
 * FUN_005bcee0 at 005bcee0
 * undefined FUN_005bcee0(void)
 * Address ranges: 005bcee0-005bcf00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005bcee0(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  uVar3 = param_2[1];
  uVar4 = param_1[1];
  *param_3 = uVar1 - *param_1;
  param_3[1] = (uVar3 - uVar4) - (uint)(uVar1 < uVar2);
  return;
}

