/*
 * FUN_004f926c at 004f926c
 * undefined __register FUN_004f926c(int * param_1, undefined4 * param_2)
 * Address ranges: 004f926c-004f934c;004f9373-004f9398
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f8ee4 slot 27 for TLookupProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f8ee4 slot 27 for
   TLookupProp. Original bytes unchanged; names and types still inferred. */

void FUN_004f926c(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
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
  
  puStack_2c = &stack0xfffffffc;
  local_1c = (undefined *)0x0;
  local_14 = 0;
  puStack_30 = &LAB_004f9399;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (undefined4 *)0x0) {
    puStack_38 = (undefined1 *)0x4f929f;
    iVar3 = FUN_004f9768((int)param_1);
    puVar1 = puStack_2c;
    if ((*(byte *)(iVar3 + 0x18) & 0x80) != 0) {
      puStack_38 = (undefined1 *)0x4f92ad;
      local_d = (**(code **)(*local_8 + 0x50))();
      local_d = local_d ^ 1;
      puStack_38 = (undefined1 *)0x4f92ba;
      (**(code **)(*local_8 + 0x60))();
      goto LAB_004f937b;
    }
  }
  puStack_2c = puVar1;
  puStack_38 = (undefined1 *)0x4f92c7;
  cVar2 = (**(code **)(*local_8 + 0x4c))();
  if (cVar2 == '\0') {
LAB_004f92f5:
    local_d = 1;
  }
  else {
    puStack_38 = (undefined1 *)0x4f92d3;
    cVar2 = (**(code **)(*local_8 + 0x50))();
    if (cVar2 != '\0') goto LAB_004f92f5;
    puStack_38 = (undefined1 *)0x4f92e2;
    (**(code **)(*local_8 + 0x70))(local_8,&local_1c);
    puStack_38 = (undefined1 *)0x4f92ed;
    iVar3 = FUN_00409838(local_1c,(undefined *)local_c);
    if (iVar3 != 0) goto LAB_004f92f5;
    local_d = 0;
  }
  if (local_d != 0) {
    local_15 = (undefined1)local_8[0xc];
    puStack_38 = (undefined1 *)0x4f9317;
    FUN_00403e48(&local_14,local_8[0xe]);
    puStack_38 = (undefined1 *)0x4f9325;
    FUN_00403e04(local_8 + 0xe,local_c);
    puStack_38 = (undefined1 *)0x4f932d;
    FUN_004969e4((int)local_8);
    puStack_3c = &LAB_004f934d;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_40;
    puStack_38 = &stack0xfffffffc;
    FUN_0045fa7c(local_8);
    *in_FS_OFFSET = uStack_40;
    puStack_38 = (undefined1 *)0x4f937b;
    FUN_0045f9d8(local_8);
  }
LAB_004f937b:
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004f93a0;
  puStack_30 = (undefined1 *)0x4f9390;
  FUN_00403db0((int *)&local_1c);
  puStack_30 = (undefined1 *)0x4f9398;
  FUN_00403db0(&local_14);
  return;
}

