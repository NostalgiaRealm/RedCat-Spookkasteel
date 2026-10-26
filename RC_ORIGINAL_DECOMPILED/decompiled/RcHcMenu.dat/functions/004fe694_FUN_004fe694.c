/*
 * FUN_004fe694 at 004fe694
 * undefined __register FUN_004fe694(int * param_1, undefined4 param_2, LPRECT param_3)
 * Address ranges: 004fe694-004fe6cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fe694(int *param_1,undefined4 param_2,LPRECT param_3)

{
  if ((char)param_1[0x4e] == '\0') {
    InflateRect(param_3,-1,-1);
  }
  FUN_00435184(param_1,param_2,param_3);
  return;
}

