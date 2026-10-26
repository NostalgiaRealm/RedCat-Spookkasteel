/*
 * FUN_005421c4 at 005421c4
 * undefined __register FUN_005421c4(int * param_1)
 * Address ranges: 005421c4-005422ec;005422f7-005424cc;005424d7-00542620;00542630-00542730;00542738-00542777
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 49 for TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 49 for
   TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_005421c4(int *param_1)

{
  bool bVar1;
  VARIANTARG *pVVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar9;
  int iVar10;
  int extraout_EDX;
  int *piVar11;
  uint *in_FS_OFFSET;
  bool bVar12;
  undefined1 uVar13;
  byte bVar14;
  int local_60;
  undefined4 *local_5c;
  VARIANTARG local_58;
  int local_48;
  VARIANTARG *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  uint local_28 [3];
  uint *local_c;
  int *local_8;
  
  bVar14 = 0;
  local_28[2] = (uint)&stack0xfffffffc;
  iVar8 = 0xb;
  do {
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_28[1] = (uint)&LAB_00542778;
  local_28[0] = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)local_28;
  local_2c = (undefined4 *)0x5421f0;
  local_8 = param_1;
  uVar5 = FUN_005416c0((int)param_1);
  if (((char)uVar5 == '\0') || (*(char *)(local_8[0x9f] + 0x22c) != '\0')) {
LAB_00542738:
    *in_FS_OFFSET = local_28[0];
    local_28[2] = (uint)&LAB_0054277f;
    local_28[1] = 0x542752;
    FUN_00403dd4(&local_60,2);
    local_28[1] = 0x54275a;
    FUN_00405bcc(&local_58);
    local_28[1] = 0x542767;
    FUN_00403dd4(&local_48,8);
    local_28[1] = 0x54276f;
    FUN_00405bcc((VARIANTARG *)local_28);
    local_28[1] = 0x542777;
    FUN_00403db0((int *)&local_c);
    return;
  }
  *(undefined1 *)(local_8[0x9f] + 0x22c) = 1;
  local_2c = (undefined4 *)0x542232;
  cVar4 = (**(code **)(**(int **)(local_8[0xa0] + 0x214) + 100))();
  if (cVar4 != '\0') {
    if ((char)local_8[0x8a] == '\0') {
      local_2c = (undefined4 *)0x542250;
      FUN_00541e48((int)local_8,(uint *)0x0);
    }
    local_2c = (undefined4 *)0x54225e;
    FUN_00494398((int *)local_8[0x8b]);
    local_2c = (undefined4 *)0x54226c;
    FUN_00494340((int *)local_8[0x8b]);
    piVar6 = local_8 + 0x90;
    piVar7 = (int *)(local_8[0x9f] + 0x208);
    for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + (uint)bVar14 * -2 + 1;
      piVar7 = piVar7 + (uint)bVar14 * -2 + 1;
    }
    local_2c = (undefined4 *)0x542293;
    FUN_004efd24((int)local_8);
    local_2c = (undefined4 *)0x5422a3;
    FUN_00432800(local_8[0x9f]);
    *(undefined1 *)(local_8 + 0xa6) = 0;
    local_30 = &LAB_005422ed;
    local_34 = (uint *)*in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&local_34;
    local_38 = (uint *)0x5422c6;
    local_2c = (undefined4 *)&stack0xfffffffc;
    FUN_005418bc((int)local_8,(int *)&local_2c);
    local_38 = (uint *)0x5422d1;
    FUN_004054ac((VARIANTARG *)local_28,local_2c);
    local_38 = local_28;
    local_3c = (uint *)0x5422dd;
    piVar6 = (int *)FUN_00541708((int)local_8);
    puVar3 = local_38;
    local_38 = (uint *)0x5422e3;
    FUN_004964d0(piVar6,puVar3);
    *in_FS_OFFSET = (uint)local_34;
    if ((char)local_8[0x8a] != '\0') {
      local_2c = (undefined4 *)0x54230b;
      cVar4 = FUN_00543134((int)local_8);
      if (cVar4 == '\0') {
        local_2c = (undefined4 *)0x542329;
        FUN_0041bb48(*(int **)(local_8[0x9f] + 0x58),local_8[0x8f],extraout_ECX);
        *(undefined1 *)(local_8 + 0xa6) = 1;
      }
    }
    *(undefined1 *)(local_8[0x9f] + 0x22c) = 0;
    local_2c = (undefined4 *)0x54234e;
    (**(code **)(*local_8 + 0xbc))();
    *(undefined1 *)((int)local_8 + 0x239) = 0;
    goto LAB_00542738;
  }
  local_2c = (undefined4 *)0x542371;
  piVar6 = (int *)FUN_0054843c(*(int **)(local_8[0xa0] + 0x214));
  local_2c = (undefined4 *)0x542385;
  iVar8 = (**(code **)(*(int *)local_8[0x9f] + 0xbc))();
  local_2c = (undefined4 *)0x542393;
  FUN_005418bc((int)local_8,(int *)&local_30);
  bVar12 = local_30 != (undefined1 *)0x0;
  uVar13 = 1;
  local_30 = &LAB_00542731;
  local_34 = (uint *)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&local_34;
  local_38 = (uint *)0x5423b4;
  local_2c = (undefined4 *)&stack0xfffffffc;
  FUN_0054294c((int)local_8,(int *)&local_34);
  local_38 = local_34;
  local_3c = (uint *)0x5423c3;
  FUN_005418bc((int)local_8,(int *)&local_38);
  puVar3 = local_38;
  local_38 = (uint *)0x5423cc;
  FUN_00404140(puVar3,puVar3);
  uVar9 = extraout_ECX_00;
  if (!(bool)uVar13) {
    local_38 = (uint *)0x5423d9;
    cVar4 = (**(code **)(*local_8 + 0xec))();
    uVar9 = extraout_ECX_01;
    if (cVar4 == '\0') {
      bVar1 = false;
      goto LAB_005423e3;
    }
  }
  bVar1 = true;
LAB_005423e3:
  uVar13 = !bVar1;
  if (!(bool)uVar13) {
    local_38 = (uint *)0x5423f7;
    FUN_0054294c((int)local_8,(int *)&local_3c);
    local_38 = local_3c;
    local_3c = (uint *)0x542406;
    FUN_005418bc((int)local_8,(int *)&local_40);
    puVar3 = local_38;
    local_38 = (uint *)0x54240f;
    FUN_00404140(puVar3,local_40);
    uVar9 = extraout_ECX_02;
    if ((bool)uVar13) {
      *(undefined1 *)((int)local_8 + 0x239) = 0;
    }
  }
  if ((bVar1) && (*(char *)((int)local_8 + 0x239) == '\0')) {
    local_38 = (uint *)0x542449;
    piVar7 = (int *)FUN_00549b80(*(int *)(local_8[0xa0] + 0x214));
    local_38 = (uint *)0x542453;
    FUN_00541a50(local_8,piVar7);
    local_38 = (uint *)0x54245b;
    FUN_004efd24((int)local_8);
    local_38 = (uint *)0x54246b;
    FUN_00432800(local_8[0x9f]);
    *(undefined1 *)(local_8 + 0xa6) = 0;
    local_3c = (uint *)&LAB_005424cd;
    local_40 = (uint *)*in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&local_40;
    local_44 = (VARIANTARG *)0x542491;
    local_38 = (uint *)&stack0xfffffffc;
    iVar8 = FUN_0053eb74(local_8[0xa0]);
    local_44 = (VARIANTARG *)0x542496;
    bVar12 = FUN_00438c84(iVar8);
    if (bVar12) {
      local_44 = (VARIANTARG *)0x5424ae;
      local_44 = (VARIANTARG *)(**(code **)(**(int **)(local_8[0xa0] + 0x214) + 4))();
      local_48 = 0x5424bd;
      piVar7 = (int *)FUN_0053eb74(local_8[0xa0]);
      pVVar2 = local_44;
      local_44 = (VARIANTARG *)0x5424c3;
      FUN_0042c778(piVar7,(WPARAM)pVVar2);
    }
    uVar13 = 1;
    *in_FS_OFFSET = (uint)local_40;
    local_38 = (uint *)0x5424e2;
    FUN_0054294c((int)local_8,(int *)&local_c);
    local_38 = (uint *)0x5424ed;
    FUN_005418bc((int)local_8,(int *)&local_44);
    local_38 = (uint *)0x5424f8;
    FUN_00404140((uint *)local_44,local_c);
    if (!(bool)uVar13) {
      local_38 = (uint *)0x542509;
      FUN_005418bc((int)local_8,&local_48);
      local_38 = (uint *)0x542511;
      iVar8 = FUN_00404030(local_48);
      local_38 = (uint *)0x54251f;
      FUN_00541e48((int)local_8,local_c);
      local_38 = (uint *)0x542533;
      (**(code **)(*(int *)local_8[0x9f] + 200))((int *)local_8[0x9f],iVar8);
      local_38 = (uint *)0x54253b;
      uVar5 = FUN_00404030((int)local_c);
      if (SBORROW4(uVar5,iVar8)) {
        local_38 = (uint *)0x542547;
        thunk_FUN_00402874(uVar5);
      }
      local_38 = (uint *)0x542558;
      (**(code **)(*(int *)local_8[0x9f] + 0xc4))();
    }
  }
  else {
    if ((char)local_8[0x8a] != '\0') {
      local_38 = (uint *)0x542583;
      FUN_0041bb48(*(int **)(local_8[0x9f] + 0x58),local_8[0x8f],uVar9);
      *(undefined1 *)(local_8 + 0xa6) = 1;
    }
    if (((char)local_8[0x8a] == '\0') && (bVar12)) {
      local_38 = (uint *)0x542647;
      FUN_00548598(*(int **)(local_8[0xa0] + 0x214),(int)piVar6);
      local_38 = (uint *)0x54265b;
      piVar7 = (int *)FUN_00549b80(*(int *)(local_8[0xa0] + 0x214));
      local_38 = (uint *)0x542665;
      FUN_00541a50(local_8,piVar7);
      local_38 = (uint *)0x54266d;
      FUN_004efd24((int)local_8);
      local_38 = (uint *)0x54267d;
      FUN_00432800(local_8[0x9f]);
      *(undefined1 *)(local_8 + 0xa6) = 0;
      local_38 = (uint *)0x542698;
      uVar5 = (**(code **)(*(int *)local_8[0x9f] + 0xd4))();
      if (iVar8 != 0) {
        if (SBORROW4(iVar8,1)) {
          local_38 = (uint *)0x5426ab;
          thunk_FUN_00402874(uVar5);
        }
        local_38 = (uint *)0x5426bc;
        (**(code **)(*(int *)local_8[0x9f] + 200))();
        local_38 = (uint *)0x5426c7;
        FUN_005418bc((int)local_8,&local_60);
        local_38 = (uint *)0x5426cf;
        uVar5 = FUN_00404030(local_60);
        iVar10 = uVar5 - iVar8;
        if (SBORROW4(uVar5,iVar8)) {
          local_38 = (uint *)0x5426db;
          uVar5 = thunk_FUN_00402874(uVar5);
          iVar10 = extraout_EDX;
        }
        if (SCARRY4(iVar10,1)) {
          local_38 = (uint *)0x5426e5;
          thunk_FUN_00402874(uVar5);
        }
        local_38 = (uint *)0x5426f6;
        (**(code **)(*(int *)local_8[0x9f] + 0xc4))();
      }
    }
    else {
      local_38 = (uint *)0x5425b1;
      FUN_00494398((int *)local_8[0x8b]);
      local_38 = (uint *)0x5425bf;
      FUN_00494340((int *)local_8[0x8b]);
      piVar7 = local_8 + 0x90;
      piVar11 = (int *)(local_8[0x9f] + 0x208);
      for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar11 = *piVar7;
        piVar7 = piVar7 + (uint)bVar14 * -2 + 1;
        piVar11 = piVar11 + (uint)bVar14 * -2 + 1;
      }
      local_3c = (uint *)&LAB_00542621;
      local_40 = (uint *)*in_FS_OFFSET;
      *in_FS_OFFSET = (uint)&local_40;
      local_44 = (VARIANTARG *)0x5425f7;
      local_38 = (uint *)&stack0xfffffffc;
      FUN_005418bc((int)local_8,(int *)&local_5c);
      local_44 = (VARIANTARG *)0x542602;
      FUN_004054ac(&local_58,local_5c);
      local_44 = &local_58;
      local_48 = 0x54260e;
      piVar7 = (int *)FUN_00541708((int)local_8);
      pVVar2 = local_44;
      local_44 = (VARIANTARG *)0x542614;
      FUN_004964d0(piVar7,(undefined4 *)pVVar2);
      *in_FS_OFFSET = (uint)local_40;
    }
  }
  *(undefined1 *)((int)local_8 + 0x239) = 0;
  *in_FS_OFFSET = (uint)local_34;
  local_2c = (undefined4 *)0x542738;
  *(undefined1 *)(local_8[0x9f] + 0x22c) = 0;
  local_30 = (undefined1 *)0x542725;
  FUN_00403094(piVar6);
  local_30 = (undefined1 *)0x542730;
  (**(code **)(*local_8 + 0xbc))();
  return;
}

