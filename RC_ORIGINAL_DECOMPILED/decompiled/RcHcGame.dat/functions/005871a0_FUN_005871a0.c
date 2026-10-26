/*
 * FUN_005871a0 at 005871a0
 * undefined FUN_005871a0(void)
 * Address ranges: 005871a0-005871e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005871a0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00586d70();
  if (1 < iVar1) {
    puVar2 = (undefined4 *)FUN_00586e90();
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_1;
    FUN_00586ed0(param_1,param_2);
  }
  return;
}

