/*
 * FUN_004b0610 at 004b0610
 * undefined __register FUN_004b0610(byte * param_1)
 * Address ranges: 004b0610-004b06af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b0610(byte *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  uint *local_20;
  byte *local_1c;
  uint *local_18;
  int local_14;
  int local_10;
  undefined1 local_9;
  byte *local_8;
  
  local_18 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_1c = (byte *)0x0;
  puStack_24 = (undefined1 *)0x4b062c;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_28 = &LAB_004b06b0;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_9 = 0;
  puStack_24 = &stack0xfffffffc;
  iVar2 = FUN_004029fc();
  uVar3 = iVar2 == 0;
  if (0 < iVar2) {
    local_10 = 1;
    local_14 = iVar2;
    do {
      FUN_00402a5c(local_10,(int *)&local_1c);
      FUN_00409690(local_1c,(int *)&local_18);
      puVar1 = local_18;
      FUN_00409690(local_8,(int *)&local_20);
      FUN_00404140(puVar1,local_20);
      if ((bool)uVar3) {
        local_9 = 1;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
      uVar3 = local_14 == 0;
    } while (!(bool)uVar3);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004b06b7;
  puStack_28 = (undefined1 *)0x4b06a7;
  FUN_00403dd4((int *)&local_20,3);
  puStack_28 = (undefined1 *)0x4b06af;
  FUN_00403db0((int *)&local_8);
  return;
}

