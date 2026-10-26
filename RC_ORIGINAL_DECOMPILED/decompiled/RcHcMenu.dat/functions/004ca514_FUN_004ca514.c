/*
 * FUN_004ca514 at 004ca514
 * undefined __register FUN_004ca514(int param_1, uint param_2)
 * Address ranges: 004ca514-004ca539
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ca514(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004129b8(*(int *)(param_1 + 0x78),param_2);
  if ((char)uVar1 != '\0') {
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    FUN_0041298c(*(int *)(param_1 + 0x78),param_2,'\0');
  }
  return;
}

