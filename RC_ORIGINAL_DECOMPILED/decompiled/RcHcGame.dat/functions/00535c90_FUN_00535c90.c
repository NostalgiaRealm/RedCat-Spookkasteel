/*
 * FUN_00535c90 at 00535c90
 * undefined FUN_00535c90(void)
 * Address ranges: 00535c90-00535de1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00535c90(int *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063b860;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 0x10))();
  if (iVar2 == 0) {
    uVar5 = 0xffffffff;
    pcVar7 = s_DoCreatePlayer___returns_NULL_006a0c14;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    pcStack_28 = (char *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      pcVar7 = s_DoCreatePlayer___returns_NULL_006a0c14;
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
    uStack_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_result__NULL_006a0c04,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x86b,auStack_2c);
    (*pcVar3)();
    uStack_4 = 0xffffffff;
    if (pcStack_28 != (char *)0x0) {
      cVar1 = pcStack_28[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(pcStack_28 + -1);
      }
      else {
        pcStack_28[-1] = cVar1 + -1;
      }
    }
  }
  FUN_0060a613(iVar2);
  uVar4 = FUN_0060b060();
  uVar4 = FUN_005ae390(auStack_1c,s_CAdamGame__CreatePlayer___create_006a0bd8,uVar4);
  uStack_4 = 1;
  FUN_005aff00(uVar4);
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return iVar2;
    }
    FUN_005fe5f0((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return iVar2;
}

