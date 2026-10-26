/*
 * FUN_00549fd0 at 00549fd0
 * undefined __register FUN_00549fd0(int param_1)
 * Address ranges: 00549fd0-00549ff5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00549fd0(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    piVar1 = (int *)FUN_00549f98(param_1);
    FUN_00403270(piVar1,extraout_EDX,extraout_ECX);
  }
  return;
}

