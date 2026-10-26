/*
 * FUN_004298c0 at 004298c0
 * undefined FUN_004298c0(void)
 * Address ranges: 004298c0-004298fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004298c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 local_c [12];
  
  puVar2 = local_c;
  uVar3 = 0;
  FUN_004282e0(local_c,param_2,0);
  puVar1 = (undefined4 *)FUN_0049d020(puVar2,param_2,uVar3);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return;
}

