/*
 * FUN_004e831c at 004e831c
 * undefined4 __register FUN_004e831c(int param_1)
 * Address ranges: 004e831c-004e8349
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004e831c(int param_1)

{
  undefined3 uVar1;
  undefined1 local_9;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    local_9 = *(undefined1 *)(param_1 + 0x4c);
    uVar1 = (undefined3)((uint)param_1 >> 8);
  }
  else {
    local_9 = *PTR_DAT_005722bc;
    uVar1 = (undefined3)((uint)PTR_DAT_005722bc >> 8);
  }
  return CONCAT31(uVar1,local_9);
}

