/*
 * FUN_00438940 at 00438940
 * undefined4 __register FUN_00438940(int param_1)
 * Address ranges: 00438940-00438960
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00438940(int param_1)

{
  HWND pHVar1;
  
  if (*(int *)(param_1 + 0x14c) != 0) {
    pHVar1 = GetFocus();
    if (pHVar1 == *(HWND *)(param_1 + 0x14c)) {
      return CONCAT31((int3)((uint)pHVar1 >> 8),1);
    }
  }
  return 0;
}

