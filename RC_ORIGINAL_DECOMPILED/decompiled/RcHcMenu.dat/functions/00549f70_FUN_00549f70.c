/*
 * FUN_00549f70 at 00549f70
 * undefined __register FUN_00549f70(int param_1)
 * Address ranges: 00549f70-00549f95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00549f70(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    piVar1 = (int *)FUN_00549f38(param_1);
    FUN_00403270(piVar1,extraout_EDX,extraout_ECX);
  }
  return;
}

