/*
 * FUN_0055f540 at 0055f540
 * undefined4 __register FUN_0055f540(int param_1)
 * Address ranges: 0055f540-0055f574
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0055f540(int param_1)

{
  undefined4 local_c;
  
  if (*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x11c) + 0x30) == param_1) {
    local_c = 0xff00;
  }
  else {
    local_c = 0xffffff;
  }
  return local_c;
}

