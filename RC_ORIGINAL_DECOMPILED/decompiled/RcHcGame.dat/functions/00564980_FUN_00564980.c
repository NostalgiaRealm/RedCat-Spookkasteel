/*
 * FUN_00564980 at 00564980
 * undefined FUN_00564980(void)
 * Address ranges: 00564980-00564a8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00564980(void)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fef8;
  local_c = ExceptionList;
  bVar1 = false;
  iVar6 = 0;
  ExceptionList = &local_c;
  do {
    cVar2 = FUN_00564a90(iVar6,iVar6 == 0);
    if (cVar2 != '\0') {
      bVar1 = true;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  if (!bVar1) {
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_foundOne_006a3a00,s_D__Work_RCHorror_AdamSource_Adam_006a26f8,
                                  0x8c6,local_1c);
    (*pcVar3)();
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
        ExceptionList = local_c;
        return 1;
      }
      FUN_005fe5f0((char *)((int)local_18 + -1));
    }
  }
  ExceptionList = local_c;
  return 1;
}

