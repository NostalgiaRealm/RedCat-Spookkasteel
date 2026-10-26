/*
 * FUN_005a2480 at 005a2480
 * undefined FUN_005a2480(void)
 * Address ranges: 005a2480-005a27c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005a2480(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_144 [4];
  int local_140;
  undefined1 local_134 [4];
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124 [4];
  int local_120;
  char local_114 [264];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006450e7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005a2950();
  FUN_005a2d00();
  piVar2 = (int *)FUN_00596e40();
  uVar3 = param_3;
  if (*piVar2 == 1) {
    uVar3 = param_3 | 8;
  }
  uVar4 = FUN_005a1d60();
  puVar7 = local_144;
  FUN_005a2d00(puVar7,uVar4);
  iVar5 = FUN_005a3150(puVar7,uVar4);
  pcVar6 = *(char **)(iVar5 + 4);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = "";
  }
  uVar8 = 0xffffffff;
  do {
    pcVar10 = pcVar6;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar10 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar10;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar6 = pcVar10 + -uVar8;
  pcVar10 = local_114;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar10 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar10 = pcVar10 + 1;
  }
  FUN_004040a0(1);
  puVar7 = local_144;
  FUN_005a2d00(puVar7);
  iVar5 = FUN_005a2f50(puVar7);
  puVar7 = *(undefined1 **)(iVar5 + 4);
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &DAT_0064a3b4;
  }
  uVar4 = FUN_005cd0a0(puVar7,0,uVar3);
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  FUN_004040a0(1);
  if ((*(int *)(param_1 + 0x34) == 0) && (param_3 == 1)) {
    FUN_005a2d00();
    iVar5 = FUN_005a1d60();
    puVar7 = *(undefined1 **)(iVar5 + 4);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_144,s_Cannot_open_folder__s_006a7b14,puVar7);
    local_4 = 0;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a7a50,0x88,uVar4);
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_005a2d00();
      piVar2 = (int *)FUN_00596e40();
      if (*piVar2 == 3) {
        iVar5 = FUN_005cd0a0(0,0,param_3 | 8);
        *(int *)(param_1 + 0x38) = iVar5;
        if (iVar5 == 0) {
          uVar4 = FUN_005ae390(local_144,s_Cannot_open_virtual_Genesis_file_006a7af0,local_114);
          local_4 = 2;
          FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a7a50,0xc0,uVar4);
          if (local_140 != 0) {
            cVar1 = *(char *)(local_140 + -1);
            if ((cVar1 != '\0') && (cVar1 != -1)) {
              *(char *)(local_140 + -1) = cVar1 + -1;
              FUN_005cd320();
              *(undefined4 *)(param_1 + 0x34) = 0;
              ExceptionList = local_c;
              return 0;
            }
            FUN_005fe5f0((char *)(local_140 + -1));
          }
          FUN_005cd320();
          *(undefined4 *)(param_1 + 0x34) = 0;
          ExceptionList = local_c;
          return 0;
        }
      }
      FUN_005a2cf0(param_3);
      iVar5 = FUN_005cd200(param_3);
      if (iVar5 != 0) {
        ExceptionList = local_c;
        return iVar5;
      }
      puVar7 = local_124;
      FUN_005a2d00(puVar7);
      iVar5 = FUN_005a2f50(puVar7);
      puVar7 = *(undefined1 **)(iVar5 + 4);
      local_4 = 3;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      uVar4 = FUN_005a2cf0(puVar7);
      uVar4 = FUN_005ae390(local_134,s_Cannot_open_Genesis_file__s_in_G_006a7abc,uVar4);
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a7a50,0xdb,uVar4);
      if (local_130 != 0) {
        cVar1 = *(char *)(local_130 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_130 + -1));
        }
        else {
          *(char *)(local_130 + -1) = cVar1 + -1;
        }
      }
      local_130 = 0;
      local_12c = 0;
      local_128 = 0;
      if (local_120 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      cVar1 = *(char *)(local_120 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_120 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return 0;
      }
      FUN_005fe5f0((char *)(local_120 + -1));
      ExceptionList = local_c;
      return 0;
    }
    uVar4 = FUN_005ae390(local_144,s_Cannot_open_folder__s_006a7b14,local_114);
    local_4 = 1;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a7a50,0xad,uVar4);
  }
  if (local_140 != 0) {
    cVar1 = *(char *)(local_140 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_140 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return 0;
    }
    FUN_005fe5f0((char *)(local_140 + -1));
  }
  ExceptionList = local_c;
  return 0;
}

