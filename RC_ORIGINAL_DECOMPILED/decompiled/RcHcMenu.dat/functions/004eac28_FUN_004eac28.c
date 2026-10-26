/*
 * FUN_004eac28 at 004eac28
 * undefined __register FUN_004eac28(int * param_1)
 * Address ranges: 004eac28-004ead7d;004ead92-004eada7;004eadaf-004eadd5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 16 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 16 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004eac28(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  _union_2683 local_30;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_30._0_4_ = 0;
  local_30.decVal.Hi32 = 0;
  local_30._8_4_ = 0;
  local_30._12_4_ = 0;
  local_20 = 0;
  puStack_44 = &LAB_004eadd6;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_8 = param_1;
  if (param_1[10] == -1) {
    puStack_4c = (undefined1 *)0x4eac6b;
    uVar1 = FUN_004cf1d0((int *)param_1[1]);
    puStack_4c = (undefined1 *)0x4eac7b;
    local_18 = (int *)FUN_004cf3c8((int *)local_8[1],(byte)uVar1 ^ 1);
    puStack_50 = &LAB_004eada8;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    puStack_58 = (undefined1 *)0x4eac94;
    puStack_4c = &stack0xfffffffc;
    (**(code **)(*local_18 + 100))();
    puStack_58 = (undefined1 *)0x4eaca8;
    FUN_004eaa48(*(int **)(local_8[0xc] + 0x238),&local_20);
    puStack_58 = (undefined1 *)0x4eacb3;
    (**(code **)(*local_18 + 0x60))(local_18,local_20);
    puStack_5c = &LAB_004ead7e;
    uStack_60 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_60;
    puStack_58 = &stack0xfffffffc;
    iVar2 = FUN_00403224(local_18,(int)&PTR_FUN_004ea51c);
    FUN_0045b8fc(*(undefined4 **)(iVar2 + 0x20));
    iVar2 = FUN_004d68f0((int)local_8);
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if (-1 < (int)uVar3) {
      local_1c = uVar3 + 1;
      local_10 = 0;
      do {
        iVar2 = FUN_004d6728(local_8,local_10);
        local_14 = FUN_004d4de4((int *)&PTR_FUN_004ccb54,'\x01',*(undefined4 **)(iVar2 + 4));
        iVar2 = FUN_004d6728(local_8,local_10);
        FUN_004d4e9c(iVar2,(VARIANT *)&local_30.n2);
        FUN_004d4ebc(local_14,(undefined4 *)&local_30);
        iVar2 = FUN_00403224(local_18,(int)&PTR_FUN_004ea51c);
        (**(code **)(**(int **)(iVar2 + 0x20) + 0x24))(*(int **)(iVar2 + 0x20),local_10,local_14);
        local_10 = local_10 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    FUN_004d5dc0(local_18);
    piVar4 = (int *)FUN_004d6540(local_18,0);
    iVar2 = FUN_004d4d8c(piVar4);
    local_8[10] = iVar2;
    *in_FS_OFFSET = uStack_60;
    *in_FS_OFFSET = uStack_54;
    puStack_4c = (undefined1 *)0x4eadaf;
    puStack_50 = (undefined1 *)0x4eada7;
    FUN_00403094(local_18);
    return;
  }
  local_c = param_1[10];
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_004eaddd;
  puStack_44 = (undefined1 *)0x4eadcd;
  FUN_00405bcc((VARIANTARG *)&local_30.n2);
  puStack_44 = (undefined1 *)0x4eadd5;
  FUN_00403db0(&local_20);
  return;
}

