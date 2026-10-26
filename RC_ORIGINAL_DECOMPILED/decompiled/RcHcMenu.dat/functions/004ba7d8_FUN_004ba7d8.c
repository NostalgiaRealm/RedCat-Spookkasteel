/*
 * FUN_004ba7d8 at 004ba7d8
 * undefined __register FUN_004ba7d8(int param_1, undefined4 param_2, undefined4 param_3, VARIANTARG * param_4, VARIANTARG * param_5, VARIANTARG * param_6, VARIANTARG * param_7, VARIANTARG * param_8, VARIANTARG * param_9, VARIANTARG * param_10, VARIANTARG * param_11, VARIANTARG * param_12, VARIANTARG * param_13, VARIANTARG * param_14, VARIANTARG * param_15)
 * Address ranges: 004ba7d8-004ba9c0;004baa0f-004baa32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004ba7d8(int param_1,undefined4 param_2,undefined4 param_3,VARIANTARG *param_4,
                 VARIANTARG *param_5,VARIANTARG *param_6,VARIANTARG *param_7,VARIANTARG *param_8,
                 VARIANTARG *param_9,VARIANTARG *param_10,VARIANTARG *param_11,VARIANTARG *param_12,
                 VARIANTARG *param_13,VARIANTARG *param_14,VARIANTARG *param_15)

{
  int *piVar1;
  int iVar2;
  ULONG *unaff_EBX;
  ULONG *unaff_ESI;
  ULONG *unaff_EDI;
  ULONG *in_FS_OFFSET;
  _union_2683 local_10c;
  _union_2683 local_fc;
  _union_2683 local_ec;
  _union_2683 local_dc;
  _union_2683 local_cc;
  _union_2683 local_bc;
  _union_2683 local_ac;
  _union_2683 local_9c;
  _union_2683 local_8c;
  _union_2683 local_7c;
  _union_2683 local_6c;
  _union_2683 local_5c;
  _union_2683 local_4c;
  ULONG *local_3c;
  ULONG *local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  ULONG *local_2c;
  ULONG *local_28;
  ULONG *local_24;
  ULONG *local_14;
  ULONG *local_10;
  ULONG *local_c;
  int local_8;
  
  local_24 = (ULONG *)&stack0xfffffffc;
  local_14 = (ULONG *)0x20;
  do {
    local_c = (ULONG *)0x0;
    local_14 = (ULONG *)((int)local_14 + -1);
  } while (local_14 != (ULONG *)0x0);
  LOCK();
  UNLOCK();
  local_28 = &DAT_004baa33;
  local_2c = (ULONG *)*in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)&local_2c;
  local_30 = (undefined1 *)0x4ba811;
  local_8 = param_1;
  FUN_004b73dc((VARIANTARG *)0x0,(VARIANT *)&local_4c.n2,&local_c);
  local_30 = (undefined1 *)0x4ba81f;
  FUN_004b73dc(param_15,(VARIANT *)&local_5c.n2,&local_10);
  local_30 = (undefined1 *)0x4ba82d;
  FUN_004b73dc(param_14,(VARIANT *)&local_6c.n2,&local_14);
  local_30 = (undefined1 *)0x4ba83b;
  FUN_004b73dc(param_13,(VARIANT *)&local_7c.n2,(undefined4 *)&stack0xffffffe8);
  local_30 = (undefined1 *)0x4ba84c;
  FUN_004b73dc(param_12,(VARIANT *)&local_8c.n2,(undefined4 *)&stack0xffffffe4);
  local_30 = (undefined1 *)0x4ba85d;
  FUN_004b73dc(param_11,(VARIANT *)&local_9c.n2,(undefined4 *)&stack0xffffffe0);
  local_30 = (undefined1 *)0x4ba86e;
  FUN_004b73dc(param_10,(VARIANT *)&local_ac.n2,&local_24);
  local_30 = (undefined1 *)0x4ba87f;
  FUN_004b73dc(param_9,(VARIANT *)&local_bc.n2,&local_28);
  local_30 = (undefined1 *)0x4ba890;
  FUN_004b73dc(param_8,(VARIANT *)&local_cc.n2,&local_2c);
  local_30 = (undefined1 *)0x4ba8a1;
  FUN_004b73dc(param_7,(VARIANT *)&local_dc.n2,&local_30);
  local_30 = (undefined1 *)0x4ba8b2;
  FUN_004b73dc(param_6,(VARIANT *)&local_ec.n2,&local_34);
  local_30 = (undefined1 *)0x4ba8c3;
  FUN_004b73dc(param_5,(VARIANT *)&local_fc.n2,&local_38);
  local_30 = (undefined1 *)0x4ba8d4;
  FUN_004b73dc(param_4,(VARIANT *)&local_10c.n2,&local_3c);
  local_30 = (undefined1 *)0x4ba8d9;
  FUN_004b6e60();
  local_34 = &DAT_004ba9c1;
  local_38 = (ULONG *)*in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)&local_38;
  local_4c._12_4_ = local_3c[2];
  local_4c._8_4_ = local_3c[1];
  local_4c.decVal.Hi32 = *local_3c;
  local_4c._0_4_ = local_38[3];
  local_5c._12_4_ = local_38[2];
  local_5c._8_4_ = local_38[1];
  local_5c.decVal.Hi32 = *local_38;
  local_5c._0_4_ = 0x4ba9da00;
  local_6c._12_4_ = 0x45e84400;
  local_6c._8_4_ = 0x2ff;
  local_6c.decVal.Hi32 = 0xf48ca6e9;
  local_6c._0_4_ = param_5;
  local_7c._12_4_ = param_4;
  local_7c._0_4_ = local_2c[3];
  local_8c._12_4_ = local_2c[2];
  local_8c._8_4_ = local_2c[1];
  local_8c.decVal.Hi32 = *local_2c;
  local_8c._0_4_ = local_28[3];
  local_9c._12_4_ = local_28[2];
  local_9c._8_4_ = local_28[1];
  local_9c.decVal.Hi32 = *local_28;
  local_9c._0_4_ = local_24[3];
  local_ac._12_4_ = local_24[2];
  local_ac._8_4_ = local_24[1];
  local_ac.decVal.Hi32 = *local_24;
  local_ac._0_4_ = unaff_EDI[3];
  local_bc._12_4_ = unaff_EDI[2];
  local_bc._8_4_ = unaff_EDI[1];
  local_bc.decVal.Hi32 = *unaff_EDI;
  local_bc._0_4_ = unaff_ESI[3];
  local_cc._12_4_ = unaff_ESI[2];
  local_cc._8_4_ = unaff_ESI[1];
  local_cc.decVal.Hi32 = *unaff_ESI;
  local_cc._0_4_ = unaff_EBX[3];
  local_dc._12_4_ = unaff_EBX[2];
  local_dc._8_4_ = unaff_EBX[1];
  local_dc.decVal.Hi32 = *unaff_EBX;
  local_dc._0_4_ = local_14[3];
  local_ec._12_4_ = local_14[2];
  local_ec._8_4_ = local_14[1];
  local_ec.decVal.Hi32 = *local_14;
  local_ec._0_4_ = local_10[3];
  local_fc._12_4_ = local_10[2];
  local_fc._8_4_ = local_10[1];
  local_fc.decVal.Hi32 = *local_10;
  local_fc._0_4_ = local_c[3];
  local_10c._12_4_ = local_c[2];
  local_10c._8_4_ = local_c[1];
  local_10c.decVal.Hi32 = *local_c;
  piVar1 = *(int **)(local_8 + 0xc);
  local_10c._0_4_ = param_2;
  local_3c = (ULONG *)local_3c[3];
  local_30 = &stack0xfffffffc;
  iVar2 = (**(code **)(*piVar1 + 0xf4))();
  FUN_00406b9c(iVar2);
  FUN_004b6e4c();
  *in_FS_OFFSET = (ULONG)piVar1;
  *in_FS_OFFSET = local_10c._8_4_;
  local_fc._0_4_ = 0x4baa3a;
  local_10c._12_4_ = 0x4baa32;
  FUN_00404878((VARIANTARG *)&local_10c.n2,"\f\nOleVariantp\x11@",0xd);
  return;
}

