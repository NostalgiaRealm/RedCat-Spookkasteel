/*
 * FUN_00413920 at 00413920
 * undefined __register FUN_00413920(int * param_1, int * param_2)
 * Address ranges: 00413920-004139f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 7 for TStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 7 for TStrings.
   Original bytes unchanged; names and types still inferred. */

void FUN_00413920(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_18 = (undefined4 *)0x0;
  puStack_30 = &LAB_004139f7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  uVar3 = 0;
  local_14 = iVar1;
  if (-1 < iVar1 + -1) {
    local_10 = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,local_10,&local_1c);
      iVar2 = FUN_00404030(local_1c);
      uVar3 = uVar3 + iVar2 + 2;
      local_10 = local_10 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00403e98(local_c,(undefined4 *)0x0,uVar3);
  puVar4 = (undefined4 *)*local_c;
  if (-1 < local_14 + -1) {
    local_10 = 0;
    iVar1 = local_14;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,local_10,&local_18);
      uVar3 = FUN_00404030((int)local_18);
      if (uVar3 != 0) {
        FUN_00402944(local_18,puVar4,uVar3);
        puVar4 = (undefined4 *)((int)puVar4 + uVar3);
      }
      *(undefined1 *)puVar4 = 0xd;
      *(undefined1 *)((int)puVar4 + 1) = 10;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
      local_10 = local_10 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004139fe;
  puStack_30 = (undefined1 *)0x4139f6;
  FUN_00403dd4(&local_1c,2);
  return;
}

