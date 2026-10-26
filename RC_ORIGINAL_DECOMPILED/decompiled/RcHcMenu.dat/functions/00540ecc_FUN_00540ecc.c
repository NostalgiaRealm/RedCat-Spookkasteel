/*
 * FUN_00540ecc at 00540ecc
 * undefined __register FUN_00540ecc(int * param_1, UINT * param_2)
 * Address ranges: 00540ecc-005411f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x540184 slot 27 for TAppObjComboEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x540184 slot 27 for
   TAppObjComboEdit. Original bytes unchanged; names and types still inferred. */

void FUN_00540ecc(int *param_1,UINT *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  HWND pHVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar5;
  UINT UVar6;
  UINT UVar7;
  WPARAM WVar8;
  UINT UVar9;
  char local_e;
  byte local_d;
  UINT *local_c;
  int *local_8;
  
  local_e = '\0';
  local_c = param_2;
  local_8 = param_1;
  piVar2 = (int *)FUN_00540710(param_1);
  (**(code **)(*piVar2 + 0xe8))(piVar2,local_c,&local_e);
  if (local_e != '\0') {
    return;
  }
  UVar9 = *local_c;
  if (UVar9 != 0x100) {
    uVar5 = extraout_ECX;
    if (UVar9 == 0x102) {
      if ((((short)local_c[1] == 8) &&
          (iVar3 = (**(code **)(*local_8 + 0xb8))(), uVar5 = extraout_ECX_03, 0 < iVar3)) &&
         (iVar3 = (**(code **)(*local_8 + 0xbc))(), uVar5 = extraout_ECX_04, 0 < iVar3)) {
        *(undefined1 *)(local_8 + 0x8b) = 1;
        FUN_004361cc(local_8,local_c,extraout_ECX_04);
        *(undefined1 *)(local_8 + 0x8b) = 0;
        uVar5 = extraout_ECX_05;
      }
      goto LAB_005411e3;
    }
    if (UVar9 != 0x104) goto LAB_005411e3;
  }
  local_d = FUN_004486a4(local_c[2]);
  piVar2 = (int *)FUN_00540710(local_8);
  FUN_004efe68(piVar2,(ushort *)(local_c + 1),local_d);
  iVar3 = FUN_00540710(local_8);
  if ((*(char *)(iVar3 + 0x205) != '\0') &&
     (((short)local_c[1] == 0x21 || ((short)local_c[1] == 0x22)))) {
    if ((local_d == 4) && ((short)local_c[1] == 0x21)) {
      UVar9 = local_c[2];
      WVar8 = 0x24;
      UVar6 = *local_c;
      iVar3 = FUN_00540710(local_8);
      piVar2 = (int *)FUN_0053eb74(*(int *)(iVar3 + 0x280));
      pHVar4 = (HWND)FUN_00438988(piVar2);
      SendMessageA(pHVar4,UVar6,WVar8,UVar9);
    }
    else if ((local_d == 4) && ((short)local_c[1] == 0x22)) {
      UVar9 = local_c[2];
      WVar8 = 0x23;
      UVar6 = *local_c;
      iVar3 = FUN_00540710(local_8);
      piVar2 = (int *)FUN_0053eb74(*(int *)(iVar3 + 0x280));
      pHVar4 = (HWND)FUN_00438988(piVar2);
      SendMessageA(pHVar4,UVar6,WVar8,UVar9);
    }
    else {
      UVar9 = local_c[2];
      UVar6 = local_c[1];
      UVar7 = *local_c;
      iVar3 = FUN_00540710(local_8);
      piVar2 = (int *)FUN_0053eb74(*(int *)(iVar3 + 0x280));
      pHVar4 = (HWND)FUN_00438988(piVar2);
      SendMessageA(pHVar4,UVar7,UVar6,UVar9);
    }
    piVar2 = (int *)FUN_00540710(local_8);
    (**(code **)(*piVar2 + 200))();
    return;
  }
  uVar5 = extraout_ECX_00;
  if (((short)local_c[1] == 0x26) &&
     (iVar3 = FUN_00540710(local_8), uVar5 = extraout_ECX_01, *(char *)(iVar3 + 0x206) == '\0')) {
    iVar3 = FUN_00540710(local_8);
    if (*(char *)(iVar3 + 0x205) == '\0') {
      iVar3 = FUN_00540710(local_8);
      cVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x280) + 0x214) + 100))();
      if (cVar1 == '\0') {
        iVar3 = FUN_00540710(local_8);
        FUN_00547e4c(*(int **)(*(int *)(iVar3 + 0x280) + 0x214));
      }
    }
    else {
      UVar9 = local_c[2];
      UVar6 = local_c[1];
      UVar7 = *local_c;
      iVar3 = FUN_00540710(local_8);
      piVar2 = (int *)FUN_0053eb74(*(int *)(iVar3 + 0x280));
      pHVar4 = (HWND)FUN_00438988(piVar2);
      SendMessageA(pHVar4,UVar7,UVar6,UVar9);
    }
    piVar2 = (int *)FUN_00540710(local_8);
    (**(code **)(*piVar2 + 200))();
    return;
  }
  if (((short)local_c[1] == 0x28) &&
     (iVar3 = FUN_00540710(local_8), uVar5 = extraout_ECX_02, *(char *)(iVar3 + 0x206) == '\0')) {
    iVar3 = FUN_00540710(local_8);
    if (*(char *)(iVar3 + 0x205) == '\0') {
      iVar3 = FUN_00540710(local_8);
      cVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x280) + 0x214) + 100))();
      if (cVar1 == '\0') {
        iVar3 = FUN_00540710(local_8);
        FUN_00547c54(*(int **)(*(int *)(iVar3 + 0x280) + 0x214));
      }
    }
    else {
      UVar9 = local_c[2];
      UVar6 = local_c[1];
      UVar7 = *local_c;
      iVar3 = FUN_00540710(local_8);
      piVar2 = (int *)FUN_0053eb74(*(int *)(iVar3 + 0x280));
      pHVar4 = (HWND)FUN_00438988(piVar2);
      SendMessageA(pHVar4,UVar7,UVar6,UVar9);
    }
    piVar2 = (int *)FUN_00540710(local_8);
    (**(code **)(*piVar2 + 200))();
    return;
  }
LAB_005411e3:
  FUN_004361cc(local_8,local_c,uVar5);
  return;
}

