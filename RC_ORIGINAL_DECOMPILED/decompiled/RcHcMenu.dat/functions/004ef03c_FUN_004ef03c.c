/*
 * FUN_004ef03c at 004ef03c
 * undefined __register FUN_004ef03c(int param_1)
 * Address ranges: 004ef03c-004ef088
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ef03c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(*(int *)(param_1 + 4) + 0x34);
  piVar1 = (int *)FUN_004ed88c(*(int **)(param_1 + 4));
  uVar2 = FUN_004d60d0(piVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x2c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x30);
  return;
}

