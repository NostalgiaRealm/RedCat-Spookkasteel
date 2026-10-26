/*
 * FUN_0041c05c at 0041c05c
 * undefined4 __register FUN_0041c05c(int param_1)
 * Address ranges: 0041c05c-0041c0e1;0041c0e9-0041c0f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0041c05c(int param_1)

{
  HPEN pHVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  LOGPEN local_18;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_1c = (undefined1 *)0x41c07b;
    FUN_0041af88(DAT_005736a0);
    puStack_20 = &LAB_0041c0e2;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    if (*(int *)(local_8 + 8) == 0) {
      local_18.lopnStyle = (UINT)*(ushort *)(&DAT_0056f604 + (uint)*(byte *)(local_8 + 0x1c) * 2);
      local_18.lopnWidth.x = *(LONG *)(local_8 + 0x18);
      puStack_1c = &stack0xfffffffc;
      local_18.lopnColor = FUN_0041b688(*(uint *)(local_8 + 0x14));
      pHVar1 = CreatePenIndirect(&local_18);
      *(HPEN *)(local_8 + 8) = pHVar1;
    }
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x41c0e9;
    puStack_20 = (undefined1 *)0x41c0e1;
    uVar2 = FUN_0041af94(DAT_005736a0);
    return uVar2;
  }
  return *(undefined4 *)(local_8 + 8);
}

