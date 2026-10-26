/*
 * FUN_004178f8 at 004178f8
 * undefined __register FUN_004178f8(int param_1, int * param_2)
 * Address ranges: 004178f8-00417ba4;00417bac-00417be6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004178f8(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  undefined *local_130;
  byte local_12c [259];
  byte local_29;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  puStack_138 = &stack0xfffffffc;
  local_130 = (undefined *)0x0;
  puStack_13c = &LAB_00417c41;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_144 = (undefined1 *)0x41792e;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_2,local_12c);
  puStack_144 = (undefined1 *)0x417941;
  iVar2 = FUN_00404030(local_c[2]);
  if (*(int *)(local_8 + 0xc) - *(int *)(local_8 + 0x10) < (int)((uint)local_12c[0] + iVar2 + 9)) {
    puStack_144 = (undefined1 *)0x417962;
    FUN_004176f8(local_8);
  }
  puStack_144 = (undefined1 *)0x41796a;
  local_10 = FUN_004175bc(local_8);
  local_29 = 0;
  if ((*(byte *)((int)local_c + 0x21) & 2) == 0) {
    if (*(int *)(local_8 + 0x20) != 0) {
      local_29 = 1;
    }
  }
  else if (((*(int *)(local_8 + 0x20) == 0) || ((*(byte *)(local_c + 8) & 0x20) == 0)) ||
          (*(int *)(local_8 + 0x30) == 0)) {
    local_29 = 4;
  }
  else {
    local_29 = 1;
  }
  if ((*(int *)(local_8 + 0x30) != 0) &&
     (*(int *)(local_8 + 0x34) < *(int *)(*(int *)(local_8 + 0x30) + 8))) {
    if (*(int *)(local_8 + 0x20) != 0) {
      puStack_144 = (undefined1 *)0x4179e1;
      iVar2 = FUN_00412384(*(undefined4 **)(local_8 + 0x30),*(int *)(local_8 + 0x34));
      if (iVar2 == *(int *)(local_8 + 0x20)) goto LAB_004179ed;
    }
    local_29 = local_29 | 2;
  }
LAB_004179ed:
  puStack_144 = (undefined1 *)0x4179fe;
  FUN_00417e88(local_8,local_29,*(int *)(local_8 + 0x38));
  puStack_144 = (undefined1 *)0x417a0e;
  FUN_00402fe0(*local_c,local_12c);
  puStack_144 = (undefined1 *)0x417a1f;
  FUN_00403fd4((int *)&local_130,local_12c);
  puStack_144 = (undefined1 *)0x417a2d;
  FUN_00418df0(local_8,local_130,extraout_ECX);
  puStack_144 = (undefined1 *)0x417a3b;
  FUN_00418df0(local_8,(undefined *)local_c[2],extraout_ECX_00);
  puStack_144 = (undefined1 *)0x417a43;
  local_14 = FUN_004175bc(local_8);
  if ((*(int *)(local_8 + 0x30) != 0) &&
     (*(int *)(local_8 + 0x34) < *(int *)(*(int *)(local_8 + 0x30) + 8))) {
    if (*(int *)(local_8 + 0x20) != 0) {
      *(int *)(local_8 + 0x34) = *(int *)(local_8 + 0x34) + 1;
    }
    *(int *)(local_8 + 0x38) = *(int *)(local_8 + 0x38) + 1;
  }
  puStack_144 = (undefined1 *)0x417a7b;
  FUN_00417ecc(local_8,local_c);
  puStack_144 = (undefined1 *)0x417a83;
  FUN_00417e80(local_8,extraout_EDX,extraout_ECX_01);
  local_18 = *(undefined4 *)(local_8 + 0x30);
  local_1c = *(undefined4 *)(local_8 + 0x34);
  local_20 = *(undefined4 *)(local_8 + 0x38);
  local_24 = *(undefined4 *)(local_8 + 0x18);
  local_28 = *(undefined4 *)(local_8 + 0x28);
  puStack_148 = &LAB_00417be7;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  *(undefined4 *)(local_8 + 0x30) = 0;
  *(undefined4 *)(local_8 + 0x34) = 0;
  *(undefined4 *)(local_8 + 0x38) = 0;
  if (*(char *)(local_8 + 0x24) == '\0') {
    puStack_154 = &LAB_00417ba5;
    uStack_158 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_158;
    uVar4 = extraout_ECX_02;
    puStack_150 = &stack0xfffffffc;
    puStack_144 = &stack0xfffffffc;
    if (*(int **)(local_8 + 0x20) != (int *)0x0) {
      puStack_150 = &stack0xfffffffc;
      puStack_144 = &stack0xfffffffc;
      uVar3 = FUN_0040320c(*(int **)(local_8 + 0x20),(int)&PTR_FUN_00411384);
      uVar4 = extraout_ECX_03;
      if ((char)uVar3 != '\0') {
        piVar1 = *(int **)(local_8 + 0x20);
        uVar4 = FUN_0040320c(piVar1,(int)&PTR_FUN_00411384);
        if (((char)uVar4 != '\0') && ((*(byte *)((int)piVar1 + 0x21) & 2) != 0)) {
          *(int **)(local_8 + 0x28) = piVar1;
        }
        uVar4 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_04);
        *(undefined4 *)(local_8 + 0x30) = uVar4;
        FUN_00403270(*(int **)(local_8 + 0x20),*(undefined4 *)(local_8 + 0x28),extraout_ECX_05);
        uVar4 = extraout_ECX_06;
      }
    }
    if ((*(byte *)((int)local_c + 0x21) & 2) != 0) {
      *(int **)(local_8 + 0x18) = local_c;
    }
    FUN_00403270(local_c,*(undefined4 *)(local_8 + 0x18),uVar4);
    *in_FS_OFFSET = &LAB_0041781c;
    FUN_00403094(*(int **)(local_8 + 0x30));
    return;
  }
  *in_FS_OFFSET = uStack_14c;
  *(undefined4 *)(local_8 + 0x30) = local_18;
  *(undefined4 *)(local_8 + 0x34) = local_1c;
  *(undefined4 *)(local_8 + 0x38) = local_20;
  *(undefined4 *)(local_8 + 0x18) = local_24;
  *(undefined4 *)(local_8 + 0x28) = local_28;
  return;
}

