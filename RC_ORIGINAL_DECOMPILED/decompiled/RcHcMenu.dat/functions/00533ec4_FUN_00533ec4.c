/*
 * FUN_00533ec4 at 00533ec4
 * undefined __register FUN_00533ec4(int * param_1, undefined4 param_2)
 * Address ranges: 00533ec4-00533f1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00533ec4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00501d64(param_1,param_2);
  if ((char)param_1[0xae] != '\0') {
    FUN_0043262c((int *)param_1[0xaf],CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
    FUN_005312e8((int *)param_1[0xaf]);
  }
  piVar1 = (int *)FUN_00533c14((int)param_1);
  piVar1 = (int *)FUN_005286e0(piVar1);
  FUN_00520628(piVar1);
  return;
}

