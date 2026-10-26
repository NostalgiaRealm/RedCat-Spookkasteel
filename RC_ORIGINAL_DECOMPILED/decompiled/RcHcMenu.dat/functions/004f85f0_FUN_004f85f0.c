/*
 * FUN_004f85f0 at 004f85f0
 * undefined __register FUN_004f85f0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 004f85f0-004f8659
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f85f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00433a98(param_1,param_2,param_3,param_4,param_5);
  uVar1 = FUN_0040320c(*(int **)(param_1 + 0x24),(int)&PTR_FUN_004f80b8);
  if ((char)uVar1 != '\0') {
    piVar2 = (int *)FUN_00403224(*(int **)(param_1 + 0x24),(int)&PTR_FUN_004f80b8);
    FUN_00403270(piVar2,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_2),
                 CONCAT31((int3)((uint)extraout_ECX >> 8),(char)param_3));
  }
  return;
}

