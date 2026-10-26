/*
 * FUN_0048aca0 at 0048aca0
 * undefined __register FUN_0048aca0(int * param_1, undefined4 * param_2)
 * Address ranges: 0048aca0-0048ad8c;0048adbf-0048adec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48a7d0 slot 28 for TFKStringProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48a7d0 slot 28 for
   TFKStringProp. Original bytes unchanged; names and types still inferred. */

void FUN_0048aca0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined *local_1c;
  undefined1 local_15;
  int local_14;
  byte local_d;
  undefined4 *local_c;
  int *local_8;
  
  local_1c = (undefined *)0x0;
  local_14 = 0;
  puStack_2c = (undefined1 *)0x48acbf;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_30 = &LAB_0048aded;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  if (local_c == (undefined4 *)0x0) {
    puStack_38 = (undefined1 *)0x48acdb;
    puStack_2c = &stack0xfffffffc;
    iVar2 = FUN_0048b0cc((int)local_8);
    if ((*(byte *)(iVar2 + 0x18) & 0x80) != 0) {
      puStack_38 = (undefined1 *)0x48ace9;
      local_d = (**(code **)(*local_8 + 0x50))();
      local_d = local_d ^ 1;
      puStack_38 = (undefined1 *)0x48acf6;
      (**(code **)(*local_8 + 0x60))();
      goto LAB_0048adc7;
    }
  }
  puStack_38 = (undefined1 *)0x48ad03;
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 == '\0') {
LAB_0048ad31:
    local_d = 1;
  }
  else {
    puStack_38 = (undefined1 *)0x48ad0f;
    cVar1 = (**(code **)(*local_8 + 0x50))();
    if (cVar1 != '\0') goto LAB_0048ad31;
    puStack_38 = (undefined1 *)0x48ad1e;
    (**(code **)(*local_8 + 0x6c))(local_8,&local_1c);
    puStack_38 = (undefined1 *)0x48ad29;
    iVar2 = FUN_00409838(local_1c,(undefined *)local_c);
    if (iVar2 != 0) goto LAB_0048ad31;
    local_d = 0;
  }
  if (local_d != 0) {
    local_15 = (undefined1)local_8[0xc];
    puStack_38 = (undefined1 *)0x48ad57;
    FUN_00403e48(&local_14,local_8[0x10]);
    puStack_38 = (undefined1 *)0x48ad65;
    FUN_00403e04(local_8 + 0x10,local_c);
    puStack_38 = (undefined1 *)0x48ad6d;
    FUN_004969e4((int)local_8);
    puStack_3c = &LAB_0048ad8d;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_40;
    puStack_38 = &stack0xfffffffc;
    FUN_0045fa7c(local_8);
    *in_FS_OFFSET = uStack_40;
    puStack_38 = (undefined1 *)0x48adc7;
    FUN_0045f9d8(local_8);
  }
LAB_0048adc7:
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0048adf4;
  puStack_30 = (undefined1 *)0x48addc;
  FUN_00403db0((int *)&local_1c);
  puStack_30 = (undefined1 *)0x48ade4;
  FUN_00403db0(&local_14);
  puStack_30 = (undefined1 *)0x48adec;
  FUN_00403db0((int *)&local_c);
  return;
}

