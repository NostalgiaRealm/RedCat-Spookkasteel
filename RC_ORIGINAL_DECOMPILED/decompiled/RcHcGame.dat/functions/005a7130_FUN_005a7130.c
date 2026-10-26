/*
 * FUN_005a7130 at 005a7130
 * undefined FUN_005a7130(void)
 * Address ranges: 005a7130-005a7305
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005a71f1) */
/* WARNING: Removing unreachable block (ram,0x005a71fb) */
/* WARNING: Removing unreachable block (ram,0x005a71ff) */
/* WARNING: Removing unreachable block (ram,0x005a721b) */

void FUN_005a7130(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_28 [4];
  char *pcStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00645730;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*DAT_006cad4c + 0x24))(DAT_006cad4c,0x100,&DAT_006cac40);
  auStack_28[0] = (undefined1)((uint)unaff_ESI >> 0x18);
  if (iVar2 != -0x7ff8ffe2) {
    if (iVar2 < 0) {
      uVar3 = 0xffffffff;
      pcVar5 = s_Warning_failed_to_read_DIKeyboar_006a83d4;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      pcStack_24 = (char *)0x0;
      uStack_20 = 0;
      uStack_1c = 0;
      cVar1 = FUN_00401940(uVar3,1);
      if (cVar1 != '\0') {
        pcVar5 = s_Warning_failed_to_read_DIKeyboar_006a83d4;
        pcVar6 = pcStack_24;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar6 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        }
        FUN_00404190(uVar3);
      }
      uStack_10 = 1;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x195,auStack_28);
      if (pcStack_24 != (char *)0x0) {
        cVar1 = pcStack_24[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          pcStack_24[-1] = cVar1 + -1;
          ExceptionList = pvStack_18;
          return;
        }
        FUN_005fe5f0(pcStack_24 + -1);
      }
    }
    ExceptionList = pvStack_18;
    return;
  }
  uVar3 = 0xffffffff;
  pcVar5 = s_Keyboard_not_acquired__006a83fc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_Keyboard_not_acquired__006a83fc;
    pcVar6 = (char *)0x0;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00404190(uVar3);
  }
  uStack_10 = 0;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x18d,&stack0xffffffc8);
  uStack_10 = 0xffffffff;
  FUN_005a6c60();
  ExceptionList = pvStack_18;
  return;
}

