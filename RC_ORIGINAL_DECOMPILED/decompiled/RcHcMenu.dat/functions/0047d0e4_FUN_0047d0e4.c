/*
 * FUN_0047d0e4 at 0047d0e4
 * undefined __register FUN_0047d0e4(int param_1)
 * Address ranges: 0047d0e4-0047d129
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047d0e4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00432178(*(int **)(param_1 + 0x2d0));
  if (iVar1 <= *(int *)(*(int *)(param_1 + 0x2d8) + 0x38) +
               *(int *)(*(int *)(param_1 + 0x2d8) + 0x30)) {
    iVar1 = FUN_00432178(*(int **)(param_1 + 0x2d0));
    FUN_00431f78(*(int **)(param_1 + 0x2d8),
                 (iVar1 - *(int *)(*(int *)(param_1 + 0x2d8) + 0x30)) + -5);
  }
  return;
}

