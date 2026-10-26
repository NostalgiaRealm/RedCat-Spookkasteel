/*
 * FUN_00421544 at 00421544
 * undefined4 __register FUN_00421544(int param_1)
 * Address ranges: 00421544-0042155d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00421544(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(short *)(iVar1 + 0x28) == 1) && (*(short *)(iVar1 + 0x2a) == 1)) {
    return CONCAT31((int3)((uint)(iVar1 + 0x18) >> 8),1);
  }
  return 0;
}

