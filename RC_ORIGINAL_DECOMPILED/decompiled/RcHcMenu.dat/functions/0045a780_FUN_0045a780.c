/*
 * FUN_0045a780 at 0045a780
 * undefined __register FUN_0045a780(int param_1, int param_2, byte param_3)
 * Address ranges: 0045a780-0045a9b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045a780(int param_1,int param_2,byte param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined1 uVar1;
  uint *puVar2;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  undefined *local_24;
  undefined *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  byte local_d;
  int local_c;
  int local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_30 = (uint *)0x0;
  local_34 = (uint *)0x0;
  local_20 = (undefined *)0x0;
  local_24 = (undefined *)0x0;
  local_28 = (uint *)0x0;
  local_2c = (uint *)0x0;
  puStack_40 = &LAB_0045a9b1;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403e48((int *)&local_20,param_1);
  FUN_00403e48((int *)&local_24,local_c);
  if ((local_d & 1) == 0) {
    if ((local_d & 2) == 0) {
      if ((local_d & 4) != 0) {
        local_18 = FUN_00404030((int)local_20);
        local_1c = FUN_00404030((int)local_24);
        if ((int)local_18 < (int)local_1c) {
          FUN_00404238((int)local_24,1,local_18,(int *)&local_24);
        }
      }
    }
    else {
      local_18 = FUN_00404030((int)local_20);
      local_1c = FUN_00404030((int)local_24);
      if ((int)local_1c < (int)local_18) {
        FUN_00404238((int)local_20,1,local_1c,(int *)&local_20);
      }
    }
  }
  else {
    local_18 = FUN_00404030((int)local_20);
    local_1c = FUN_00404030((int)local_24);
    if ((int)local_1c < (int)local_18) {
      FUN_00404238((int)local_20,1,local_1c,(int *)&local_20);
    }
    else if ((int)local_18 < (int)local_1c) {
      FUN_00404238((int)local_24,1,local_18,(int *)&local_24);
    }
  }
  if ((local_d & 0x10) == 0) {
    uVar1 = DAT_0056fce8 == '\0';
    if ((bool)uVar1) {
      local_14 = FUN_00409870(local_20,local_24);
    }
    else {
      FUN_00403e48((int *)&local_28,(int)local_20);
      FUN_00403e48((int *)&local_2c,(int)local_24);
      FUN_0045aa70((int *)&local_28);
      FUN_0045aa70((int *)&local_2c);
      FUN_00409690((byte *)local_28,(int *)&local_30);
      puVar2 = local_30;
      FUN_00409690((byte *)local_2c,(int *)&local_34);
      FUN_00404140(puVar2,local_34);
      if ((bool)uVar1) {
        local_14 = FUN_0045a690((int)local_20,(int)local_24);
      }
      else {
        local_14 = FUN_0045a690((int)local_28,(int)local_2c);
      }
    }
  }
  else {
    uVar1 = DAT_0056fce8 == '\0';
    if ((bool)uVar1) {
      local_14 = FUN_00409838(local_20,local_24);
    }
    else {
      FUN_00403e48((int *)&local_28,(int)local_20);
      FUN_00403e48((int *)&local_2c,(int)local_24);
      FUN_0045aa70((int *)&local_28);
      FUN_0045aa70((int *)&local_2c);
      FUN_00404140(local_28,local_2c);
      if ((bool)uVar1) {
        local_14 = FUN_0045a568((int)local_20,(int)local_24);
      }
      else {
        local_14 = FUN_0045a568((int)local_28,(int)local_2c);
      }
    }
  }
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0045a9b8;
  puStack_40 = (undefined1 *)0x45a9b0;
  FUN_00403dd4((int *)&local_34,6);
  return;
}

