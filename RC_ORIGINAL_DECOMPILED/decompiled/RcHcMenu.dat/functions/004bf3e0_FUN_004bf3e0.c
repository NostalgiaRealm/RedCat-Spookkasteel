/*
 * FUN_004bf3e0 at 004bf3e0
 * undefined __register FUN_004bf3e0(int * param_1, int * param_2)
 * Address ranges: 004bf3e0-004bf537;004bf5a1-004bf5d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 12 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 12 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004bf3e0(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  undefined1 *puStack_174;
  int local_64 [2];
  _union_2683 local_5c;
  _union_2683 local_4c;
  byte local_3c [28];
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_174 = &stack0xfffffffc;
  local_64[1] = 0;
  local_64[0] = 0;
  local_5c._0_4_ = 0;
  local_5c.decVal.Hi32 = 0;
  local_5c._8_4_ = 0;
  local_5c._12_4_ = 0;
  local_4c._0_4_ = 0;
  local_4c.decVal.Hi32 = 0;
  local_4c._8_4_ = 0;
  local_4c._12_4_ = 0;
  puStack_178 = &LAB_004bf5d7;
  uStack_17c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_17c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0xd] == 0) {
    puStack_180 = (undefined1 *)0x4bf43d;
    FUN_00403d94("TAppDAOQuery.DoLoadAppObj: No recordset.");
    puVar1 = puStack_174;
  }
  puStack_174 = puVar1;
  puStack_180 = (undefined1 *)0x4bf445;
  FUN_0045f830((int)local_c);
  puStack_184 = &LAB_004bf538;
  uStack_188 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_188;
  puStack_180 = &stack0xfffffffc;
  FUN_00494398(local_c);
  local_1c = FUN_004ba1d8(local_8[0xd]);
  sVar3 = FUN_004b74a4(local_1c);
  uVar4 = (int)sVar3 - 1;
  if (SBORROW4((int)sVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_20 = uVar4 + 1;
    local_10 = 0;
    do {
      FUN_004bdc34(local_8,local_10,(undefined4 *)local_3c);
      FUN_00494e38(local_c,local_3c,'\x01',&local_18,&local_14);
      if ((*(byte *)(local_14 + 0x18) & 0x20) == 0) {
LAB_004bf4f5:
        puVar5 = (undefined4 *)FUN_004bf310((int)local_8);
        piVar6 = (int *)(**(code **)*puVar5)(puVar5,local_10);
        iVar7 = FUN_00403224(piVar6,(int)&PTR_FUN_004b6ae0);
        FUN_004bae4c(iVar7,(VARIANT *)&local_5c.n2);
        FUN_004964d0(local_18,(undefined4 *)&local_5c);
      }
      else {
        puVar5 = (undefined4 *)FUN_004bf310((int)local_8);
        piVar6 = (int *)(**(code **)*puVar5)(puVar5,local_10);
        iVar7 = FUN_00403224(piVar6,(int)&PTR_FUN_004b6ae0);
        FUN_004bae4c(iVar7,(VARIANT *)&local_4c.n2);
        bVar2 = FUN_00405c2c((short *)&local_4c);
        if (!bVar2) goto LAB_004bf4f5;
        (**(code **)(*local_18 + 0x68))();
      }
      local_10 = local_10 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *in_FS_OFFSET = uStack_188;
  puStack_180 = (undefined1 *)0x4bf5a9;
  FUN_0045f898(local_c);
  *in_FS_OFFSET = uStack_17c;
  puStack_174 = &LAB_004bf5de;
  puStack_178 = (undefined1 *)0x4bf5c3;
  FUN_00403dd4(local_64,2);
  puStack_178 = (undefined1 *)0x4bf5d6;
  FUN_00404878((VARIANTARG *)&local_5c.n2,&DAT_00401108,2);
  return;
}

