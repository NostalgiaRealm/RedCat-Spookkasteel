/*
 * FUN_005a0290 at 005a0290
 * undefined FUN_005a0290(void)
 * Address ranges: 005a0290-005a048f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005a0322) */
/* WARNING: Removing unreachable block (ram,0x005a032c) */
/* WARNING: Removing unreachable block (ram,0x005a0336) */
/* WARNING: Removing unreachable block (ram,0x005a0330) */
/* WARNING: Removing unreachable block (ram,0x005a041d) */
/* WARNING: Removing unreachable block (ram,0x005a0427) */
/* WARNING: Removing unreachable block (ram,0x005a0431) */
/* WARNING: Removing unreachable block (ram,0x005a042b) */

void FUN_005a0290(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iStack_3c;
  char *pcStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644d00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == 0) {
    iVar4 = -1;
    pcVar7 = &DAT_006b3f70;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &pvStack_c;
    FUN_004040f0();
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_SubLevel____0_0069c4d8);
    (*pcVar2)();
  }
  local_4 = 0xffffffff;
  FUN_00457240();
  iVar4 = FUN_0041e8e0();
  iStack_3c = 0;
  if (0 < iVar4) {
    do {
      FUN_00457240(param_1);
      iVar3 = FUN_005a0490();
      pcVar7 = *(char **)(iVar3 + 0xc);
      if ((pcVar7 != (char *)0x0) && (*(int *)(iVar3 + 0x28) != 0)) {
        uVar5 = 0xffffffff;
        pcStack_28 = (char *)0x0;
        pcVar8 = pcVar7;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        puVar6 = (undefined1 *)(~uVar5 - 1);
        cVar1 = FUN_00401940();
        if (cVar1 != '\0') {
          for (uVar5 = (uint)puVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pcStack_28 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcStack_28 = pcStack_28 + 4;
          }
          for (uVar5 = (uint)puVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcStack_28 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcStack_28 = pcStack_28 + 1;
          }
          *puVar6 = 0;
        }
        local_4 = 1;
        iVar3 = FUN_0059c970();
        local_4 = 0xffffffff;
        if ((iVar3 != 0) && (iVar3 = FUN_004cd4d0(), iVar3 != 0)) {
          FUN_004cdd70();
        }
      }
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < iVar4);
  }
  ExceptionList = pvStack_c;
  return;
}

