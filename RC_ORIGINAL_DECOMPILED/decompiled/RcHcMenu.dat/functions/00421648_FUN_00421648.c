/*
 * FUN_00421648 at 00421648
 * undefined __register FUN_00421648(int param_1)
 * Address ranges: 00421648-00421657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00421648(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x14);
  }
  return;
}

