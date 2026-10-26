/*
 * FUN_004eb240 at 004eb240
 * undefined __register FUN_004eb240(int * param_1, int * param_2)
 * Address ranges: 004eb240-004eb36c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 12 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 12 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004eb240(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  _union_2683 local_48;
  byte local_38 [28];
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_5c = &stack0xfffffffc;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48._0_4_ = 0;
  local_48.decVal.Hi32 = 0;
  local_48._8_4_ = 0;
  local_48._12_4_ = 0;
  puStack_60 = &LAB_004eb395;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  puStack_68 = (undefined1 *)0x4eb27c;
  local_c = param_2;
  local_8 = param_1;
  FUN_0045f830((int)param_2);
  puStack_6c = &LAB_004eb36d;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  puStack_68 = &stack0xfffffffc;
  FUN_00459af0(-0x11);
  FUN_00494398(local_c);
  iVar1 = FUN_00471d88(local_8[0xc]);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar2 + 1;
    local_10 = 0;
    do {
      FUN_004eb46c(local_8,local_10,(undefined4 *)local_38);
      FUN_00494e38(local_c,local_38,'\x01',&local_18,&local_14);
      uVar4 = (*(byte *)(local_14 + 0x18) & 0x20) == 0;
      if ((bool)uVar4) {
LAB_004eb322:
        piVar3 = (int *)FUN_00468730(*(int *)(local_8[0xc] + 0x24),local_10);
        (**(code **)(*piVar3 + 0x5c))(piVar3,&local_58);
        FUN_004964d0(local_18,&local_58);
      }
      else {
        piVar3 = (int *)FUN_00468730(*(int *)(local_8[0xc] + 0x24),local_10);
        (**(code **)(*piVar3 + 0x5c))(piVar3,&local_48);
        FUN_00405abc((VARIANTARG *)&local_48.n2,(VARIANTARG *)PTR_DAT_00572068);
        if (!(bool)uVar4) goto LAB_004eb322;
        (**(code **)(*local_18 + 0x68))();
      }
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_004eb374;
  puStack_6c = (undefined1 *)0x4eb367;
  FUN_0045f898(local_c);
  puStack_6c = (undefined1 *)0x4eb36c;
  FUN_00459b04();
  return;
}

