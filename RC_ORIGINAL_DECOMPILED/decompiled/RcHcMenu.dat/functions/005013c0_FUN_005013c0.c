/*
 * FUN_005013c0 at 005013c0
 * undefined4 __register FUN_005013c0(int param_1)
 * Address ranges: 005013c0-005013f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005013c0(int param_1)

{
  undefined1 uVar1;
  undefined3 uVar2;
  
  if (((*(char *)(param_1 + 0x230) == '\0') && ((*(byte *)(param_1 + 0x20) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    uVar2 = (undefined3)((uint)param_1 >> 8);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  return CONCAT31(uVar2,uVar1);
}

