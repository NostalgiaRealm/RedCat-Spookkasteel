/*
 * FUN_004cf1d0 at 004cf1d0
 * undefined4 __register FUN_004cf1d0(int * param_1)
 * Address ranges: 004cf1d0-004cf1fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004cf1d0(int *param_1)

{
  uint uVar1;
  undefined1 local_9;
  
  uVar1 = param_1[1];
  if (*(char *)(uVar1 + 0x18) == '\0') {
    local_9 = 1;
  }
  else {
    uVar1 = FUN_004cf0ec(param_1);
    uVar1 = uVar1 ^ 1;
    local_9 = (undefined1)uVar1;
  }
  return CONCAT31((int3)(uVar1 >> 8),local_9);
}

