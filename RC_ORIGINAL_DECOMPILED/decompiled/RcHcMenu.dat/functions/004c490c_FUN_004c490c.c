/*
 * FUN_004c490c at 004c490c
 * undefined __register FUN_004c490c(undefined4 param_1, ULONG param_2, undefined4 param_3, LPCSTR param_4, undefined4 * param_5, undefined4 * param_6, undefined4 * param_7)
 * Address ranges: 004c490c-004c4a37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004c490c(undefined4 param_1,ULONG param_2,undefined4 param_3,LPCSTR param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  ULONG UVar2;
  int *piVar3;
  int iVar4;
  ULONG *in_FS_OFFSET;
  OLECHAR local_60 [2];
  undefined4 local_5c;
  VARIANTARG *pVVar5;
  ULONG UStack_54;
  undefined1 *puStack_50;
  undefined4 local_4c;
  undefined4 uVar6;
  undefined4 uVar7;
  ULONG UStack_40;
  undefined1 local_3c [16];
  _union_2683 local_2c;
  
  iVar4 = 0x2c;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  LOCK();
  UNLOCK();
  local_2c._12_4_ = 0x4c4933;
  FUN_004041e4(0);
  local_2c._12_4_ = 0x4c493b;
  FUN_004041e4((int)param_7);
  local_2c._12_4_ = 0x4c4943;
  FUN_004041e4((int)param_6);
  local_2c._12_4_ = 0x4c494b;
  FUN_004041e4((int)param_5);
  local_2c._12_4_ = 0x4c4953;
  FUN_004041e4((int)param_4);
  local_2c._8_4_ = &LAB_004c4b4c;
  local_2c.decVal.Hi32 = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)&local_2c.n2.wReserved2;
  local_3c._12_4_ = &LAB_004c4af4;
  local_3c._8_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)&(((_union_2683 *)local_3c)->n2).n3;
  local_3c._0_4_ = &LAB_004c4a5c;
  UStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)&UStack_40;
  local_3c._4_4_ = &stack0xfffffffc;
  local_2c._0_4_ = &stack0xfffffffc;
  local_2c._12_4_ = &stack0xfffffffc;
  FUN_004054ac((VARIANTARG *)&local_2c.n2,param_5);
  uVar7 = &local_2c;
  local_4c = 0x4c49a6;
  uVar6 = PTR_DAT_005725ac;
  FUN_004054ac((VARIANTARG *)&((_union_2683 *)local_3c)->n2,param_7);
  local_4c = local_3c;
  puStack_50 = (undefined1 *)0x4c49b5;
  FUN_004054ac((VARIANTARG *)&stack0xffffffb4,(undefined4 *)0x0);
  uVar1 = local_4c;
  local_4c = 0x4c49c1;
  UVar2 = FUN_004b8b54(param_2,(VARIANTARG *)&stack0xffffffb4,uVar1,(VARIANTARG *)uVar6,
                       (VARIANTARG *)uVar7);
  puStack_50 = &LAB_004c4a38;
  UStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)&UStack_54;
  local_5c = 0x4c49e8;
  pVVar5 = (VARIANTARG *)PTR_DAT_005725ac;
  local_4c = &stack0xfffffffc;
  FUN_004054ac((VARIANTARG *)(local_60 + 2),param_6);
  local_5c = 0x4c49f9;
  piVar3 = (int *)FUN_004bc250(UVar2,(VARIANTARG *)(local_60 + 2),PTR_DAT_005725ac,pVVar5);
  local_5c = 0x4c4a07;
  FUN_004045b8(local_60,param_4);
  local_5c = 0x4c4a12;
  FUN_004bb294((int)piVar3);
  local_5c = 0x4c4a1a;
  iVar4 = FUN_004bc134(UVar2);
  local_5c = 0x4c4a22;
  FUN_004b7564(iVar4,(int)piVar3);
  *in_FS_OFFSET = (ULONG)pVVar5;
  puStack_50 = &LAB_004c4a3f;
  UStack_54 = 0x4c4a37;
  FUN_00403094(piVar3);
  return;
}

