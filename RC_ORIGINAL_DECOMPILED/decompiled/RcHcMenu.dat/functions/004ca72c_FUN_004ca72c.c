/*
 * FUN_004ca72c at 004ca72c
 * undefined __register FUN_004ca72c(int param_1)
 * Address ranges: 004ca72c-004ca772
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ca72c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + 0xc + (uVar2 & 0x7f) * 4);
    if (uVar1 != 0xffffffff) {
      FUN_004ca514(*(int *)(param_1 + 8),uVar1);
    }
    *(undefined4 *)(param_1 + 0xc + (uVar2 & 0x7f) * 4) = 0xffffffff;
    uVar2 = uVar2 + 1;
  } while ((char)uVar2 != '\x04');
  FUN_004ca610(DAT_00571d08,*(int **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

