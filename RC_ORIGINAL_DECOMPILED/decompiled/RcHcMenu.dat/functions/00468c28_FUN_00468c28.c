/*
 * FUN_00468c28 at 00468c28
 * undefined __register FUN_00468c28(int * param_1)
 * Address ranges: 00468c28-00468ce6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468c28(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ULONG *in_FS_OFFSET;
  VARIANTARG local_44;
  undefined1 local_34 [8];
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  _union_2683 local_24;
  
  local_24._12_4_ = &stack0xfffffffc;
  iVar3 = 8;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_24._8_4_ = &LAB_00468ce7;
  local_24.decVal.Hi32 = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)&local_24.n2.wReserved2;
  if ((char)param_1[0x1a] == '\0') {
    if (param_1[0x16] != 0) {
      local_24._0_4_ = 0x468c8e;
      uVar2 = FUN_004714b4(param_1[0x16]);
      if ((char)uVar2 != '\0') {
        local_24._0_4_ = param_1[0x19];
        puStack_28 = local_34;
        uStack_2c = 0x468ca8;
        FUN_00471f68(param_1[10],(char *)param_1[0x17],&local_44);
        uStack_2c = 0x468cb9;
        (**(code **)(*(int *)param_1[0x16] + 0x23c))((int *)param_1[0x16],param_1[0x18],&local_44);
        uStack_2c = 0x468cc6;
        (**(code **)(*param_1 + 0xa4))(param_1,local_34);
      }
    }
  }
  else {
    local_24._0_4_ = 0x468c5d;
    local_24._12_4_ = &stack0xfffffffc;
    FUN_00471f68(param_1[10],(char *)param_1[0x17],(VARIANTARG *)&local_24.n2);
    local_24._0_4_ = &local_24;
    puStack_28 = (undefined1 *)0x468c68;
    iVar3 = FUN_00469460((int)param_1,extraout_EDX,extraout_ECX);
    uVar1 = local_24._0_4_;
    local_24._0_4_ = 0x468c71;
    FUN_00468028(iVar3,(VARIANTARG *)uVar1,(VARIANT *)&stack0xffffffec);
    local_24._0_4_ = 0x468c7e;
    (**(code **)(*param_1 + 0xa4))(param_1,&stack0xffffffec);
  }
  *in_FS_OFFSET = local_24.decVal.Hi32;
  local_24._12_4_ = &LAB_00468cee;
  local_24._8_4_ = 0x468ce6;
  FUN_00404878(&local_44,&DAT_00401108,4);
  return;
}

