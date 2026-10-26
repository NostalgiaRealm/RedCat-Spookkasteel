/*
 * FUN_0043c2e4 at 0043c2e4
 * undefined __register FUN_0043c2e4(int param_1)
 * Address ranges: 0043c2e4-0043c309
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043c2e4(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar1 = FUN_00437280(*(int *)(param_1 + 0x14));
    if (0 < iVar1) {
      FUN_0043abd8(param_1,0,extraout_ECX);
    }
  }
  return;
}

