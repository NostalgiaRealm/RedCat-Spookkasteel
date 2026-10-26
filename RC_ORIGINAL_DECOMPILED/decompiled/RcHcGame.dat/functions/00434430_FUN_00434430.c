/*
 * FUN_00434430 at 00434430
 * undefined FUN_00434430(void)
 * Address ranges: 00434430-004348f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 24 for .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 24 for
   .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred. */

void __thiscall
FUN_00434430(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  float unaff_EBX;
  float10 fVar9;
  float10 fVar10;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [12];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [48];
  
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  piVar4 = (int *)FUN_0060a6f2(param_5,0,&CAdamPlayerInput::RTTI_Type_Descriptor,
                               &CRcPlayerInput::RTTI_Type_Descriptor,0);
  cVar2 = (**(code **)(*piVar4 + 0x3c))();
  FUN_004368d0();
  piVar5 = (int *)FUN_0060a6f2(*(undefined4 *)(param_1 + 0x1f0),0,
                               &CAdamPlayerGameProperties::RTTI_Type_Descriptor,
                               &CRcPlayerProperties::RTTI_Type_Descriptor,0);
  cVar3 = (**(code **)(*piVar4 + 0x34))();
  if ((((cVar3 == '\0') || (*(char *)(param_1 + 0x104) == '\0')) ||
      (*(char *)(param_1 + 0x371) != '\0')) ||
     (cVar3 = (**(code **)(*piVar5 + 0x24))(), cVar3 != '\0')) {
    uVar8 = (**(code **)(*param_4 + 0x28))(auStack_64);
    FUN_00437750(uVar8);
    return;
  }
  puVar6 = (undefined4 *)FUN_00434f20(&uStack_7c,piVar4);
  uStack_48 = *puVar6;
  uStack_44 = puVar6[1];
  uStack_40 = puVar6[2];
  FUN_005b3070();
  fVar9 = (float10)FUN_005b1600(auStack_3c,&uStack_48);
  fVar10 = (float10)FUN_005b1630((float)fVar9);
  fVar9 = (float10)FUN_004d6960();
  fVar9 = (float10)FUN_005b1630((float)fVar9);
  fStack_84 = (float)fVar9;
  if (*(char *)(param_1 + 0x364) == '\0') {
LAB_00434629:
    fStack_88 = fStack_84;
    if (cVar2 == '\0') {
      fVar9 = (float10)FUN_005b1600(auStack_3c,&uStack_48);
      fVar9 = (float10)FUN_005b1630((float)fVar9);
      goto LAB_00434655;
    }
  }
  else {
    if (*(int *)(param_1 + 0x35c) == 0) {
      if (*(int *)(param_1 + 0x360) == 0) goto LAB_00434629;
    }
    else {
      iVar7 = (**(code **)(**(int **)(param_1 + 0x254) + 0x48))(auStack_64);
      uStack_7c = *(undefined4 *)(iVar7 + 4);
      uStack_78 = *(undefined4 *)(iVar7 + 8);
      puVar6 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x35c) + 0x48))(&uStack_68);
      uStack_70 = *puVar6;
      uStack_6c = puVar6[1];
      uStack_68 = puVar6[2];
      fVar10 = (float10)FUN_005b1600(&uStack_7c,&uStack_70);
    }
    fStack_88 = (float)fVar10;
    if (*(int *)(param_1 + 0x360) != 0) {
      iVar7 = (**(code **)(**(int **)(param_1 + 0x254) + 0x48))(auStack_64);
      uStack_7c = *(undefined4 *)(iVar7 + 4);
      uStack_78 = *(undefined4 *)(iVar7 + 8);
      puVar6 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x360) + 0x48))(&uStack_68);
      uStack_70 = *puVar6;
      uStack_6c = puVar6[1];
      uStack_68 = puVar6[2];
      fVar9 = (float10)FUN_005b1600(&uStack_7c,&uStack_70);
LAB_00434655:
      fStack_88 = (float)fVar9;
    }
  }
  uStack_58 = 0;
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  fStack_80 = 0.0;
  if (fStack_84 < 0.0) {
LAB_004346e5:
    if ((0.0 <= fStack_88) && (-1.5707964 < fStack_84)) {
      fStack_84 = fStack_84 + 1.5707964;
      fStack_80 = 1.5707964;
      fStack_88 = fStack_88 + 1.5707964;
    }
    if ((fStack_84 < 0.0) && (fStack_84 = fStack_84 + 6.2831855, fStack_84 < 0.0)) {
      fStack_88 = fStack_88 + 6.2831855;
    }
  }
  else {
    if ((fStack_88 < 0.0) && (fStack_84 < 1.5707964)) {
      fStack_84 = fStack_84 + 1.5707964;
      fStack_80 = 1.5707964;
      fStack_88 = fStack_88 + 1.5707964;
    }
    if (fStack_84 < 0.0) goto LAB_004346e5;
  }
  FUN_005b5540(fStack_84);
  FUN_005b5540(fStack_88);
  if (0.3926991 <= ABS(fStack_88 - fStack_84)) {
    fStack_88 = 2.4;
    iVar7 = (**(code **)(*piVar4 + 0x24))(auStack_64);
    if (*(float *)(iVar7 + 8) != 0.0) {
      fStack_88 = 6.1;
    }
    fVar10 = (float10)FUN_00409e30(param_3);
    fVar9 = (float10)fStack_88;
    fStack_88 = (float)(fVar10 * fVar9);
    if (fVar10 * fVar9 <= (float10)1.0) goto LAB_00434800;
  }
  fStack_88 = 1.0;
LAB_00434800:
  FUN_005b59f0(fStack_88,auStack_30);
  FUN_005b5d80();
  FUN_005b5570(&fStack_4c);
  fVar9 = (float10)FUN_005b1630(fStack_4c - fStack_80);
  fVar1 = (float)fVar9;
  puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x24))(auStack_64);
  _DAT_00690170 = *puVar6;
  _DAT_00690174 = puVar6[1];
  _DAT_00690178 = puVar6[2];
  if ((DAT_006b52c4 & 1) == 0) {
    DAT_006b52c4 = DAT_006b52c4 | 1;
    _DAT_006b52b8 = _DAT_00690170;
    _DAT_006b52c0 = _DAT_00690178;
  }
  if (cVar2 == '\0') {
    fVar1 = unaff_EBX;
  }
  _DAT_006b52bc = fVar1 - 1.5707964;
  FUN_00437750(&DAT_006b52b8);
  return;
}

