/*
 * FUN_004314c0 at 004314c0
 * undefined __register FUN_004314c0(int param_1)
 * Address ranges: 004314c0-004314e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004314c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar1 = FUN_00432d3c(*(int *)(param_1 + 0x58));
    if ((char)uVar1 == '\0') {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffff7f;
    }
    else {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x80;
    }
  }
  return;
}

