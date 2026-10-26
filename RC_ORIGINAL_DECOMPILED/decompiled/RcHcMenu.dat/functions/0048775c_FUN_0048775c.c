/*
 * FUN_0048775c at 0048775c
 * undefined __register FUN_0048775c(int param_1)
 * Address ranges: 0048775c-00487784
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048775c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    iVar1 = FUN_004804cc(DAT_0057394c,*(undefined **)(param_1 + 0x234));
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x22c) + 0x78);
  }
  if (iVar1 == 0) {
    FUN_0047f0a8();
  }
  return;
}

