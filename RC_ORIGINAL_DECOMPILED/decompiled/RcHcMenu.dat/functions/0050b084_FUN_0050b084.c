/*
 * FUN_0050b084 at 0050b084
 * undefined __register FUN_0050b084(ushort param_1, ushort param_2, ushort param_3)
 * Address ranges: 0050b084-0050b0d1;0050b15d-0050b166
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050b084(ushort param_1,ushort param_2,ushort param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)0x50b09e;
  FUN_0040b0d8();
  puStack_2c = &LAB_0050b0d2;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0040aed8((uint)param_1,param_2,param_3);
  *in_FS_OFFSET = uStack_30;
  return;
}

