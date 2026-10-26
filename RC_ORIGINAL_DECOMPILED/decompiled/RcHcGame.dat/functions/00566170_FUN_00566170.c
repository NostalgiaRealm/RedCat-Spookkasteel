/*
 * FUN_00566170 at 00566170
 * undefined FUN_00566170(void)
 * Address ranges: 00566170-00566364
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_00566170(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00640060;
  pvStack_c = ExceptionList;
  cVar1 = '\x01';
  ExceptionList = &pvStack_c;
  if ((param_1 != 0) && (ExceptionList = &pvStack_c, iVar3 = FUN_004d0570(param_1), iVar3 != 0)) {
    cVar1 = FUN_005665b0(iVar3);
    cVar1 = cVar1 == '\0';
    if (((bool)cVar1) && (*(code **)(param_3 + 0x58) != (code *)0x0)) {
      cVar1 = (**(code **)(param_3 + 0x58))(iVar3,param_3);
    }
  }
  if (param_2 != 0) {
    iVar3 = FUN_005525c0();
    if (iVar3 == 0) {
      auStack_1c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      uStack_4 = 1;
      pcVar4 = (code *)FUN_005a07f0(s_userData____0_00699770,
                                    s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x1a3,auStack_1c);
      (*pcVar4)();
      uStack_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    else if ((*(uint *)(iVar3 + 0x14c) >> 3 & 1) == 0) {
      auStack_2c[0] = (undefined1)param_1;
      uVar5 = 0xffffffff;
      pcStack_28 = (char *)0x0;
      pcVar7 = s_collision_detected_when_not_allo_006a2154;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      uStack_24 = 0;
      uStack_20 = 0;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        pcVar7 = s_collision_detected_when_not_allo_006a2154;
        pcVar8 = pcStack_28;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        pcStack_28[uVar5] = '\0';
        uStack_24 = uVar5;
      }
      uStack_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a3db0,
                                    0x10d,auStack_2c);
      (*pcVar4)();
      if (pcStack_28 != (char *)0x0) {
        cVar1 = pcStack_28[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          pcStack_28[-1] = cVar1 + -1;
          ExceptionList = pvStack_c;
          return '\0';
        }
        FUN_005fe5f0(pcStack_28 + -1);
      }
      cVar1 = '\0';
    }
    else {
      cVar2 = FUN_00566380(iVar3);
      if (cVar2 == '\0') {
        if ((cVar1 != '\0') && (*(code **)(param_3 + 0x54) != (code *)0x0)) {
          cVar1 = (**(code **)(param_3 + 0x54))(iVar3,param_3);
        }
      }
      else {
        cVar1 = '\0';
      }
    }
  }
  ExceptionList = pvStack_c;
  return cVar1;
}

