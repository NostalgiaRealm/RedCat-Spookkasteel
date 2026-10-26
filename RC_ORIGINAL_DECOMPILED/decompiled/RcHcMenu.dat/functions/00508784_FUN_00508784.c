/*
 * FUN_00508784 at 00508784
 * undefined __register FUN_00508784(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00508784-00508b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00508784(int param_1,undefined4 param_2,undefined4 param_3)

{
  double dVar1;
  longlong lVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 extraout_ECX;
  int iVar13;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  LONG *pLVar14;
  LONG *pLVar15;
  undefined4 *in_FS_OFFSET;
  byte bVar16;
  bool bVar17;
  float10 in_ST0;
  float10 fVar18;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar19;
  int *piVar20;
  undefined4 uStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined *local_74;
  int local_70 [4];
  undefined *local_60;
  LONG local_5c [4];
  int *local_4c;
  byte local_45;
  int *local_44;
  ushort local_3e;
  ushort local_3c;
  short local_3a;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined8 local_24;
  double local_1c;
  undefined8 local_14;
  int local_8;
  
  bVar16 = 0;
  puStack_84 = &stack0xfffffffc;
  local_74 = (undefined *)0x0;
  local_60 = (undefined *)0x0;
  puStack_88 = &LAB_00508b2d;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  puStack_90 = (undefined1 *)0x5087b2;
  local_8 = param_1;
  local_44 = FUN_0041b974((int *)&PTR_FUN_0041a454,'\x01',param_3);
  puStack_94 = &LAB_00508b08;
  uStack_98 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_98;
  puStack_90 = &stack0xfffffffc;
  uVar10 = FUN_0040aed8(CONCAT22((short)((uint)local_8 >> 0x10),*(undefined2 *)(local_8 + 0x26c)),
                        *(ushort *)(local_8 + 0x26a),1);
  dVar1 = (double)in_ST0;
  local_14._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
  uVar12 = local_14._4_4_;
  local_14._0_4_ = SUB84(dVar1,0);
  uVar9 = (undefined4)local_14;
  local_14 = dVar1;
  uVar11 = FUN_0040b0b0(uVar10,extraout_EDX,extraout_ECX,uVar9,uVar12);
  if (uVar11 == 1) {
    local_34 = 7;
  }
  else {
    local_34 = uVar11 - 1;
    if (SBORROW4(uVar11,1)) {
      thunk_FUN_00402874(uVar11);
    }
  }
  local_24 = (local_14 - (double)local_34) + 1.0;
  local_2c = 0x1d;
  local_30 = 0x50;
  local_28 = 1;
  fVar19 = in_ST7;
  local_1c = local_24;
  do {
    FUN_0040b090(&local_3a,&local_3c,(short *)&local_3e,(undefined4)local_24,local_24._4_4_);
    local_4c = *(int **)(local_8 + 0x1f0);
    uVar11 = local_30 + 0x19;
    fVar18 = in_ST1;
    fVar3 = in_ST2;
    fVar4 = in_ST3;
    fVar5 = in_ST4;
    fVar6 = in_ST5;
    fVar7 = in_ST6;
    fVar8 = in_ST7;
    if (SCARRY4(local_30,0x19)) {
      uVar11 = thunk_FUN_00402874(uVar11);
      fVar18 = in_ST1;
      fVar3 = in_ST2;
      fVar4 = in_ST3;
      fVar5 = in_ST4;
      fVar6 = in_ST5;
      fVar7 = in_ST6;
      fVar8 = in_ST7;
    }
    in_ST7 = fVar19;
    in_ST6 = fVar8;
    in_ST5 = fVar7;
    in_ST4 = fVar6;
    in_ST3 = fVar5;
    in_ST2 = fVar4;
    in_ST1 = fVar3;
    pLVar14 = local_5c;
    iVar13 = local_2c + 0x19;
    if (SCARRY4(local_2c,0x19)) {
      thunk_FUN_00402874((uint)pLVar14);
      iVar13 = extraout_ECX_00;
    }
    FUN_00411624(local_2c,local_30,iVar13,pLVar14,uVar11);
    local_45 = 0;
    FUN_0040b0d8();
    if (fVar18 == (float10)local_24) {
      local_45 = local_45 | 2;
    }
    if (*(ushort *)(local_8 + 0x26a) != local_3c) {
      local_45 = local_45 | 4;
    }
    if (local_24 == *(double *)(local_8 + 0x270)) {
      local_45 = local_45 | 1;
    }
    if (*(int *)(local_8 + 0x264) == local_28) {
      local_45 = local_45 | 8;
    }
    FUN_005096b0(local_8,local_5c,local_45);
    (**(code **)(*local_44 + 8))(local_44,local_4c[3]);
    if (*(short *)(local_8 + 0x882) != 0) {
      (**(code **)(local_8 + 0x880))
                (*(undefined4 *)(local_8 + 0x884),local_8,local_4c[3],(undefined4)local_24,
                 local_24._4_4_);
    }
    FUN_00409bd8((uint)local_3e,(int *)&local_60);
    FUN_00507b68(local_8,local_5c,local_60);
    (**(code **)(*(int *)local_4c[3] + 8))((int *)local_4c[3],local_44);
    uVar12 = FUN_0041bb48((int *)local_4c[3],-0x7fffffee,extraout_ECX_01);
    iVar13 = FUN_0040b0b0(uVar12,extraout_EDX_00,extraout_ECX_02,(undefined4)local_24,local_24._4_4_
                         );
    if (iVar13 == 2) {
      FUN_0041c318((int *)local_4c[5],*(undefined4 *)(local_8 + 0x60));
      local_38 = FUN_005094bc(local_8,extraout_EDX_01,extraout_ECX_03,(undefined4)local_24,
                              local_24._4_4_);
      uVar11 = local_30 + 0x19;
      if (SCARRY4(local_30,0x19)) {
        uVar11 = thunk_FUN_00402874(uVar11);
      }
      FUN_00411624(6,local_30,0x1d,local_70,uVar11);
      piVar20 = local_70;
      FUN_00409bd8(local_38,(int *)&local_74);
      FUN_00507b68(local_8,piVar20,local_74);
      FUN_0041c318((int *)local_4c[5],0x80000005);
      if (7 < local_28) {
        FUN_0041c034((int *)local_4c[4],0x80000010);
        FUN_0041cad0(local_4c,6,local_30);
        FUN_0041ca70(local_4c,0x1d,local_30);
      }
    }
    uVar11 = local_28 - 1;
    if (0x29 < uVar11) {
      uVar11 = thunk_FUN_00402874(uVar11);
    }
    lVar2 = (longlong)(int)(uVar11 + 1) * 4;
    uVar11 = (uint)lVar2;
    if ((int)uVar11 != lVar2) {
      uVar11 = thunk_FUN_00402874(uVar11);
    }
    pLVar14 = local_5c;
    pLVar15 = (LONG *)(local_8 + 600 + uVar11 * 8);
    for (iVar13 = 4; iVar13 != 0; iVar13 = iVar13 + -1) {
      *pLVar15 = *pLVar14;
      pLVar14 = pLVar14 + (uint)bVar16 * -2 + 1;
      pLVar15 = pLVar15 + (uint)bVar16 * -2 + 1;
    }
    uVar11 = local_28 - 1;
    if (0x29 < uVar11) {
      uVar11 = thunk_FUN_00402874(uVar11);
    }
    lVar2 = (longlong)(int)(uVar11 + 1) * 4;
    uVar11 = (uint)lVar2;
    if ((int)uVar11 != lVar2) {
      uVar11 = thunk_FUN_00402874(uVar11);
    }
    *(undefined4 *)(local_8 + 0x268 + uVar11 * 8) = (undefined4)local_24;
    *(undefined4 *)(local_8 + 0x26c + uVar11 * 8) = local_24._4_4_;
    uVar11 = local_28 - 1;
    if (0x29 < uVar11) {
      uVar11 = thunk_FUN_00402874(uVar11);
    }
    lVar2 = (longlong)(int)(uVar11 + 1) * 4;
    uVar11 = (uint)lVar2;
    if ((int)uVar11 != lVar2) {
      uVar11 = thunk_FUN_00402874(uVar11);
    }
    *(bool *)(local_8 + 0x270 + uVar11 * 8) = *(ushort *)(local_8 + 0x26a) == local_3c;
    local_24 = local_24 + 1.0;
    bVar17 = SCARRY4(local_2c,0x19);
    local_2c = local_2c + 0x19;
    fVar19 = in_ST7;
    if (bVar17) {
      thunk_FUN_00402874(uVar11);
    }
    if ((local_28 % 7 == 0) && (6 < local_28)) {
      local_2c = 0x1d;
      bVar17 = SCARRY4(local_30,0x19);
      local_30 = local_30 + 0x19;
      if (bVar17) {
        thunk_FUN_00402874(local_28 / 7);
      }
    }
    local_28 = local_28 + 1;
  } while (local_28 != 0x2b);
  *in_FS_OFFSET = uStack_98;
  puStack_90 = &LAB_00508b0f;
  puStack_94 = (undefined1 *)0x508b07;
  FUN_00403094(local_44);
  return;
}

