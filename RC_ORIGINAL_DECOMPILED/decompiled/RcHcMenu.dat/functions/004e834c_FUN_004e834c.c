/*
 * FUN_004e834c at 004e834c
 * undefined4 __register FUN_004e834c(int param_1)
 * Address ranges: 004e834c-004e8379
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004e834c(int param_1)

{
  undefined3 uVar1;
  undefined1 local_9;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    local_9 = *(undefined1 *)(param_1 + 0x4d);
    uVar1 = (undefined3)((uint)param_1 >> 8);
  }
  else {
    local_9 = *PTR_DAT_005724d4;
    uVar1 = (undefined3)((uint)PTR_DAT_005724d4 >> 8);
  }
  return CONCAT31(uVar1,local_9);
}

