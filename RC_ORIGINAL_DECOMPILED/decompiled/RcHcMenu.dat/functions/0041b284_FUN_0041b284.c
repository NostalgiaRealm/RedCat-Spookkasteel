/*
 * FUN_0041b284 at 0041b284
 * undefined __register FUN_0041b284(void)
 * Address ranges: 0041b284-0041b320
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041b284(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  local_8 = 0;
  puStack_18 = (undefined1 *)0x41b29b;
  puVar1 = (undefined4 *)FUN_00412824(DAT_005736a8);
  puStack_1c = &LAB_0041b321;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  while (local_8 < (int)puVar1[2]) {
    iVar3 = FUN_00412384(puVar1,local_8);
    FUN_0041caa8(iVar3);
    local_8 = local_8 + 1;
    FUN_0041cf8c(iVar3);
  }
  FUN_0041b218(DAT_005736a0);
  FUN_0041b218(DAT_005736a4);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041b328;
  if (-1 < local_8 + -1) {
    iVar3 = 0;
    do {
      puStack_1c = (undefined1 *)0x41b30d;
      iVar2 = FUN_00412384(puVar1,iVar3);
      puStack_1c = (undefined1 *)0x41b312;
      FUN_0041ce40(iVar2);
      iVar3 = iVar3 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  puStack_1c = (undefined1 *)0x41b320;
  FUN_00412888(DAT_005736a8);
  return;
}

