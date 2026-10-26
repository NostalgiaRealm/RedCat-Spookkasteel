/*
 * FUN_00549a9c at 00549a9c
 * undefined __register FUN_00549a9c(int * param_1)
 * Address ranges: 00549a9c-00549aea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00549a9c(int *param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  (**(code **)(*param_1 + 0x58))();
  FUN_00549aec((int)param_1);
  piVar1 = (int *)FUN_00549b80((int)param_1);
  FUN_00494398(piVar1);
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_00549b08((int)param_1);
  FUN_0054b658((uint)param_1);
  FUN_00403270((int *)param_1[0x17],extraout_EDX,extraout_ECX);
  return;
}

