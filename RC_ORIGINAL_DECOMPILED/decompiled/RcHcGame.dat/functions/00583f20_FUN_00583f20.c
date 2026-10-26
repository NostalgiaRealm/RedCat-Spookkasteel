/*
 * FUN_00583f20 at 00583f20
 * undefined FUN_00583f20(void)
 * Address ranges: 00583f20-00584197
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00583f20(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642838;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == -1) {
    local_1c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      puVar13 = local_18;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_FadeTime____ADAMTIME_NONE_006a5c18,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a53d4,0x301,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    piVar9 = (int *)(param_1 + 0xfc);
    do {
      iVar5 = *piVar9;
      if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) && (*(int *)(iVar5 + 0x2c) == -1)) {
        iVar3 = FUN_005193b0();
        iVar5 = *(int *)(iVar3 + 100);
        if (iVar5 == -0x80000000) {
          puVar4 = *(undefined1 **)(iVar3 + 0x18);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0064a3b4;
          }
          iVar5 = FUN_0060af10(puVar4);
          *(int *)(iVar3 + 100) = iVar5;
        }
        if (iVar5 != 0) {
          puVar4 = *(undefined1 **)(param_1 + 0x60);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0064a3b4;
          }
          uVar6 = FUN_005ae390(local_1c,s__s_removes__one__planetoid___d___006a5bf4,puVar4,iVar11);
          local_4 = 1;
          FUN_005aff00(uVar6);
          local_4 = 0xffffffff;
          if (local_18 != (undefined4 *)0x0) {
            cVar1 = *(char *)((int)local_18 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005fe5f0((char *)((int)local_18 + -1));
            }
            else {
              *(char *)((int)local_18 + -1) = cVar1 + -1;
            }
          }
        }
        iVar11 = *(int *)(param_1 + 0xfc + iVar11 * 4);
        if ((param_2 == -1) || (-1 < param_2)) goto LAB_00584178;
        auStack_2c[0] = (undefined1)param_2;
        uVar7 = 0xffffffff;
        puStack_28 = (undefined4 *)0x0;
        pcVar12 = &DAT_006b3f70;
        goto code_r0x005840ee;
      }
      iVar11 = iVar11 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x17c));
  }
  ExceptionList = pvStack_c;
  return 0;
  while( true ) {
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    if (cVar1 == '\0') break;
code_r0x005840ee:
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7 - 1;
  uStack_24 = 0;
  uStack_20 = 0;
  cVar1 = FUN_00401940(uVar7,1);
  if (cVar1 != '\0') {
    puVar10 = (undefined4 *)&DAT_006b3f70;
    puVar13 = puStack_28;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    FUN_00404190(uVar7);
  }
  local_4 = 2;
  pcVar2 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,auStack_2c);
  (*pcVar2)();
  if (puStack_28 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puStack_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)puStack_28 + -1));
    }
    else {
      *(char *)((int)puStack_28 + -1) = cVar1 + -1;
    }
  }
LAB_00584178:
  *(undefined4 *)(iVar11 + 0x30) = 0xffffffff;
  *(int *)(iVar11 + 0x2c) = param_2;
  *(undefined4 *)(iVar11 + 0x34) = 0x3f800000;
  *(undefined1 *)(iVar11 + 0x38) = 1;
  ExceptionList = pvStack_c;
  return 1;
}

