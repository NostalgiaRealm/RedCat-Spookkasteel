/*
 * FUN_0048fdc8 at 0048fdc8
 * undefined __register FUN_0048fdc8(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0048fdc8-0048fe80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048fdc8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_18 = (int *)0x0;
  puStack_24 = &LAB_0048fe81;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  local_c = FUN_0045b418((int *)&DAT_00460138,'\x01',param_3);
  iVar1 = FUN_004905c0(local_8);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar2 + 1;
    local_10 = 0;
    do {
      local_14 = (int *)FUN_00490590(local_8,local_10);
      local_18 = (int *)FUN_0049206c(local_14);
      FUN_0048fbf8(local_8,(int)local_14,local_18,'\0',local_c);
      FUN_0048f84c((int)local_14);
      FUN_00403094(local_18);
      local_18 = (int *)0x0;
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0048fe88;
  puStack_24 = (undefined1 *)0x48fe78;
  FUN_00403094(local_c);
  puStack_24 = (undefined1 *)0x48fe80;
  FUN_00403094(local_18);
  return;
}

