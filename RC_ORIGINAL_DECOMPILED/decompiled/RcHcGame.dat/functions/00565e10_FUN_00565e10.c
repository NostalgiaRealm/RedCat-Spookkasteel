/*
 * FUN_00565e10 at 00565e10
 * undefined FUN_00565e10(void)
 * Address ranges: 00565e10-00566166
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_00565e10(int param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24 [12];
  undefined4 local_18 [3];
  undefined1 auStack_c [12];
  
  puVar8 = (undefined4 *)(param_1 + 0x60);
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = (undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  *puVar8 = *param_2;
  *(undefined4 *)(param_1 + 0x28) = param_2[1];
  *(undefined4 *)(param_1 + 0x2c) = param_2[2];
  *(undefined4 *)(param_1 + 0x30) = *param_3;
  *(int *)(param_1 + 0x34) = param_3[1];
  puVar4 = param_3 + 2;
  param_2 = (undefined4 *)0x0;
  param_3 = (int *)0x0;
  *(undefined4 *)(param_1 + 0x38) = *puVar4;
  if (*(char *)(param_1 + 0x14) != '\0') {
    param_2 = (undefined4 *)0x4;
  }
  if (*(char *)(param_1 + 0x15) != '\0') {
    param_2 = (undefined4 *)((uint)param_2 | 2);
  }
  cVar1 = FUN_00565de0();
  fVar7 = (float)param_2;
  if (cVar1 != '\0') {
    fVar7 = (float)((uint)param_2 | 1);
  }
  piVar6 = (int *)0x40;
  if (*(char *)(param_1 + 0x17) == '\0') {
    piVar6 = param_3;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    piVar6 = (int *)((uint)piVar6 | 4);
  }
  if (*(char *)(param_1 + 0x16) != '\0') {
    piVar6 = (int *)((uint)piVar6 | 1);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar6 = (int *)((uint)piVar6 | 2);
  }
  if (((*(char *)(param_1 + 0x14) != '\0') || (fVar7 != 0.0)) || (piVar6 != (int *)0x0)) {
    if ((*(char *)(param_1 + 0x15) == '\0') && (*(char *)(param_1 + 0x14) == '\0')) {
      pcVar2 = (code *)0x0;
    }
    else {
      pcVar2 = FUN_00566170;
    }
    uVar3 = FUN_00565da0(param_1 + 0x48,puVar8,(undefined4 *)(param_1 + 0x30),piVar6,fVar7,
                         *(undefined4 *)(param_1 + 0x1c),pcVar2,param_1,
                         (undefined4 *)(param_1 + 0x60));
    uVar3 = FUN_00565da0(param_1 + 0x3c,uVar3);
    FUN_00421430(uVar3);
    uVar3 = FUN_004fcb90();
    iVar5 = FUN_005b7d80(uVar3);
    *(bool *)(param_1 + 0x8c) = iVar5 != 0;
  }
  if (*(char *)(param_1 + 0x1a) != '\0') {
    iVar5 = FUN_00421430();
    param_3 = *(int **)(iVar5 + 0x360);
    if (param_3 != (int *)0x0) {
      FUN_004dc0d0();
      puVar4 = (undefined4 *)FUN_00554a20();
      puVar9 = local_18;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar4 = (undefined4 *)(**(code **)(*param_3 + 0x48))(local_24);
      uStack_48 = *puVar4;
      uStack_44 = puVar4[1];
      uStack_40 = puVar4[2];
      FUN_005b3000(local_18);
      FUN_005b3000(auStack_c);
      if (*(char *)(param_1 + 0x8c) == '\0') {
        param_2 = (undefined4 *)0x4b189680;
      }
      else {
        fVar10 = (float10)FUN_005b30a0();
        param_2 = (undefined4 *)(float)fVar10;
      }
      uVar3 = FUN_00565da0(param_1 + 0x48,puVar8,param_1 + 0x30,local_18,&param_2,&uStack_3c,
                           &uStack_30,&uStack_4c);
      uVar3 = FUN_00565da0(param_1 + 0x3c,uVar3);
      iVar5 = FUN_005cbed0(uVar3);
      *(bool *)(param_1 + 0xac) = iVar5 != 0;
      if (iVar5 != 0) {
        *(undefined1 *)(param_1 + 0x8c) = 1;
        *(undefined4 *)(param_1 + 0x6c) = uStack_3c;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x70) = uStack_38;
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x74) = uStack_34;
        *(undefined4 *)(param_1 + 0x88) = uStack_4c;
        *(undefined4 *)(param_1 + 0x7c) = uStack_30;
        *(undefined4 *)(param_1 + 0x80) = uStack_2c;
        *(undefined4 *)(param_1 + 0x84) = uStack_28;
      }
    }
  }
  if (*(char *)(param_1 + 0x8c) != '\0') {
    puVar4 = (undefined4 *)(param_1 + 0xa8);
    iVar5 = param_1 + 0x30;
    FUN_005b14c0(param_1 + 0x60,puVar8,iVar5,puVar4);
    FUN_005b1520(param_1 + 0x60,puVar8,iVar5,0,*puVar4,param_1 + 0x90);
    param_2 = *(undefined4 **)(param_1 + 0x5c);
    if ((float)param_2 != 0.0) {
      FUN_005b1520(param_1 + 0x60,puVar8,iVar5,param_2,*puVar4,param_1 + 0x9c);
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      iVar5 = FUN_00554c20(*(int *)(param_1 + 0x68));
      if (iVar5 != 0) {
        *(int *)(param_1 + 0xb0) = iVar5;
      }
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar5 = FUN_004d0570(*(int *)(param_1 + 0x60));
      if (iVar5 != 0) {
        *(int *)(param_1 + 0xb4) = iVar5;
      }
    }
  }
  return *(undefined1 *)(param_1 + 0x8c);
}

