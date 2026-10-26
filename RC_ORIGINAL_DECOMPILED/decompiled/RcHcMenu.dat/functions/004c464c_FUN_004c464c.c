/*
 * FUN_004c464c at 004c464c
 * undefined __register FUN_004c464c(undefined4 param_1, int param_2, undefined4 param_3, int * param_4, byte param_5, undefined4 * param_6)
 * Address ranges: 004c464c-004c478c;004c479b-004c47b0;004c47c4-004c4821;004c4866-004c487b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004c464c(undefined4 param_1,int param_2,undefined4 param_3,int *param_4,byte param_5,
                 undefined4 *param_6)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ULONG *in_FS_OFFSET;
  VARIANTARG *pVVar6;
  ULONG UStack_64;
  undefined1 *puStack_60;
  undefined4 *local_5c;
  _union_2683 local_58;
  _union_2683 local_48;
  _union_2683 local_38;
  ULONG local_28;
  undefined1 *local_24;
  int *local_20;
  
  iVar5 = 0x2b;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  local_20 = (int *)0x4c4673;
  FUN_004041e4(0);
  local_20 = (int *)0x4c467b;
  FUN_004041e4((int)param_6);
  local_24 = &LAB_004c48de;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)&local_28;
  local_38._8_4_ = &LAB_004c4899;
  local_38.decVal.Hi32 = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)&local_38.n2.wReserved2;
  local_38._0_4_ = 0x4c46ad;
  local_38._12_4_ = &stack0xfffffffc;
  local_20 = (int *)&stack0xfffffffc;
  local_38._0_4_ = FUN_004b8640(param_2);
  local_48._12_4_ = 0x4c46b9;
  FUN_004054ac((VARIANTARG *)&local_38.n2,(undefined4 *)0x0);
  uVar1 = local_38._0_4_;
  local_38._0_4_ = 0x4c46c2;
  iVar5 = FUN_004b83e0(uVar1,(VARIANTARG *)&local_38.n2);
  local_48._12_4_ = &LAB_004c487c;
  local_48._8_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_48.n2 + 8;
  local_48._0_4_ = &LAB_004c4822;
  local_58._12_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)((int)&local_58.n2.n3 + 4);
  local_58._8_4_ = 0x4c46ec;
  local_48.decVal.Hi32 = (ULONG)&stack0xfffffffc;
  local_38._0_4_ = &stack0xfffffffc;
  FUN_004054ac((VARIANTARG *)&local_48,param_6);
  local_58._8_4_ = 0x4c46f7;
  piVar2 = (int *)FUN_004b82b4(iVar5,(VARIANTARG *)&local_48);
  local_58._8_4_ = 0x4c4702;
  iVar3 = (**(code **)(*param_4 + 0x14))();
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    local_58._8_4_ = 0x4c470c;
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_28 = uVar4 + 1;
    local_24 = (undefined1 *)0x0;
    local_20 = (int *)0x0;
    local_58.decVal.Hi32 = (ULONG)&LAB_004c47b1;
    local_58._0_4_ = *in_FS_OFFSET;
    *in_FS_OFFSET = (ULONG)&local_58;
    puStack_60 = &LAB_004c478d;
    UStack_64 = *in_FS_OFFSET;
    *in_FS_OFFSET = (ULONG)&UStack_64;
    pVVar6 = (VARIANTARG *)PTR_DAT_005725ac;
    local_5c = (undefined4 *)&stack0xfffffffc;
    local_58._8_4_ = &stack0xfffffffc;
    (**(code **)(*param_4 + 0xc))(param_4,0,&local_5c);
    FUN_004054ac((VARIANTARG *)&local_58.n2,local_5c);
    local_20 = (int *)FUN_004bb9fc((ULONG)piVar2,(VARIANTARG *)&local_58.n2,PTR_DAT_005725ac,pVVar6)
    ;
    iVar5 = FUN_004bb8e4((int)piVar2);
    FUN_004b7564(iVar5,(int)local_20);
    *in_FS_OFFSET = (ULONG)pVVar6;
    *in_FS_OFFSET = (ULONG)local_5c;
    local_58.decVal.Hi32 = (ULONG)&DAT_004c47b8;
    local_58._0_4_ = 0x4c47b0;
    FUN_00403094(local_20);
    return;
  }
  if ((param_5 & 2) != 0) {
    local_58._8_4_ = 0x4c47d5;
    FUN_004bb560((int)piVar2);
  }
  if ((param_5 & 1) != 0) {
    local_58._8_4_ = 0x4c47e6;
    FUN_004bb834((int)piVar2);
  }
  if ((param_5 & 4) != 0) {
    local_58._8_4_ = 0x4c47f7;
    FUN_004bb610((int)piVar2);
  }
  if ((param_5 & 8) != 0) {
    local_58._8_4_ = 0x4c4808;
    FUN_004bb6c4((int)piVar2);
  }
  local_58._8_4_ = 0x4c4810;
  iVar5 = FUN_004b8020(iVar5);
  local_58._8_4_ = 0x4c4818;
  FUN_004b7564(iVar5,(int)piVar2);
  *in_FS_OFFSET = local_58._12_4_;
  *in_FS_OFFSET = local_48._8_4_;
  local_38._0_4_ = &LAB_004c4883;
  local_48._12_4_ = 0x4c487b;
  FUN_00403094(piVar2);
  return;
}

