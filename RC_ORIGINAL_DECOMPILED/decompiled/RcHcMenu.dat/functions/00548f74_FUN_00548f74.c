/*
 * FUN_00548f74 at 00548f74
 * undefined __register FUN_00548f74(int * param_1)
 * Address ranges: 00548f74-00548f98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00548f74(int *param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param_1 + 0x7c))();
  piVar1 = (int *)FUN_00549ff8((int)param_1);
  FUN_00403270(piVar1,extraout_EDX,extraout_ECX);
  return;
}

