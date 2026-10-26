/*
 * FUN_00486df4 at 00486df4
 * undefined4 __register FUN_00486df4(int param_1)
 * Address ranges: 00486df4-00486e26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00486df4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1b2) != '\0') {
    if (*(char *)(param_1 + 0x8d) == '\x05') {
      iVar1 = *(int *)(param_1 + 0x54);
    }
    else {
      iVar1 = FUN_004730d8(param_1);
    }
    iVar1 = iVar1 + (uint)*(ushort *)(param_1 + 0x1ec);
    return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar1 + 4));
  }
  return 0;
}

