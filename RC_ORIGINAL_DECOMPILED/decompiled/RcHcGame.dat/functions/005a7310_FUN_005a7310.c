/*
 * FUN_005a7310 at 005a7310
 * undefined FUN_005a7310(void)
 * Address ranges: 005a7310-005a7540
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005a73cd) */
/* WARNING: Removing unreachable block (ram,0x005a73d7) */
/* WARNING: Removing unreachable block (ram,0x005a73db) */
/* WARNING: Removing unreachable block (ram,0x005a73f2) */

undefined4 FUN_005a7310(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_ESI;
  char *pcVar7;
  char *pcVar8;
  char cStack_3d;
  undefined4 uStack_3c;
  undefined1 auStack_2c [4];
  int iStack_28;
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00645758;
  pvStack_c = ExceptionList;
  uStack_3c = 0;
  cStack_3d = '\0';
  ExceptionList = &pvStack_c;
  iVar3 = DirectInputCreateA(param_1,0x700);
  puVar1 = puStack_8;
  if (iVar3 == 0) {
    if (((char)uStack_4 != '\0') && (cStack_3d = FUN_005a6530(puStack_8), cStack_3d == '\0')) {
      uVar4 = FUN_005ae390(&uStack_3c,s__s__d___Init_keyboard_failed__006a8430,
                           s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x1aa);
      uStack_14 = 1;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x1aa,uVar4);
      uStack_14 = 0xffffffff;
      if (unaff_ESI != 0) {
        cVar2 = *(char *)(unaff_ESI + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0((char *)(unaff_ESI + -1));
        }
        else {
          *(char *)(unaff_ESI + -1) = cVar2 + -1;
        }
      }
    }
    if (((char)param_1 == '\0') || (cVar2 = FUN_005a67a0(puVar1,param_2), cVar2 != '\0')) {
      if (cStack_3d != '\0') {
        ExceptionList = pvStack_1c;
        return 1;
      }
    }
    else {
      uVar4 = FUN_005ae390(auStack_2c,s__s__d___Init_Mouse_failed__006a8414,
                           s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x1b1);
      uStack_14 = 2;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x1b1,uVar4);
      if (iStack_28 != 0) {
        cVar2 = *(char *)(iStack_28 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0((char *)(iStack_28 + -1));
          ExceptionList = pvStack_1c;
          return 0;
        }
        *(char *)(iStack_28 + -1) = cVar2 + -1;
      }
    }
    ExceptionList = pvStack_1c;
    return 0;
  }
  uStack_3c = CONCAT31(uStack_3c._1_3_,(char)uStack_4);
  uVar5 = 0xffffffff;
  pcVar7 = s_Couldn_t_create_DirectInput_006a8450;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar2 = FUN_00401940(uVar5,1);
  if (cVar2 != '\0') {
    pcVar7 = s_Couldn_t_create_DirectInput_006a8450;
    pcVar8 = (char *)0x0;
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
    FUN_00404190(uVar5);
  }
  uStack_14 = 0;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x1a2,&uStack_3c);
  ExceptionList = pvStack_1c;
  return 0;
}

