/*
 * FUN_00488ce4 at 00488ce4
 * undefined4 __register FUN_00488ce4(int param_1)
 * Address ranges: 00488ce4-00488d2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00488ce4(int param_1)

{
  short sVar1;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0x23c) != '\0') {
    local_20 = *(undefined4 *)(param_1 + 0x16c);
    sVar1 = thunk_FUN_00479000(local_20);
    if (sVar1 != 0) {
      local_20 = 0xffffffff;
    }
  }
  return local_20;
}

