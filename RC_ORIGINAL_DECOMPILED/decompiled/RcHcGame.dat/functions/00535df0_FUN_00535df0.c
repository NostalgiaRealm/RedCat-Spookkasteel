/*
 * FUN_00535df0 at 00535df0
 * undefined FUN_00535df0(void)
 * Address ranges: 00535df0-00535f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00535eb2) */
/* WARNING: Removing unreachable block (ram,0x00535eba) */
/* WARNING: Removing unreachable block (ram,0x00535ec4) */
/* WARNING: Removing unreachable block (ram,0x00535ebe) */

int __thiscall FUN_00535df0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_20 [4];
  int iStack_1c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063b880;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
  if (iVar2 == 0) {
    uVar5 = 0xffffffff;
    pcVar7 = s_DoCreateSubLevelSettings___retur_006a0c68;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    puVar6 = (undefined1 *)(~uVar5 - 1);
    cVar1 = FUN_00401940(puVar6,1);
    if (cVar1 != '\0') {
      pcVar7 = s_DoCreateSubLevelSettings___retur_006a0c68;
      pcVar8 = (char *)0x0;
      for (uVar5 = (uint)puVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = (uint)puVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *puVar6 = 0;
    }
    puStack_8 = (undefined1 *)0x0;
    pcVar3 = (code *)FUN_005a07f0(s_result__NULL_006a0c04,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x878,&stack0xffffffd0
                                 );
    (*pcVar3)();
    puStack_8 = (undefined1 *)0xffffffff;
  }
  FUN_0060a613(iVar2);
  uVar4 = FUN_0060b060();
  uVar4 = FUN_005ae390(auStack_20,s_CAdamGame__CreateSubLevelSetting_006a0c34,uVar4);
  puStack_8 = (undefined1 *)0x1;
  FUN_005aff00(uVar4);
  if (iStack_1c != 0) {
    cVar1 = *(char *)(iStack_1c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_1c + -1));
    }
    else {
      *(char *)(iStack_1c + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_10;
  return iVar2;
}

