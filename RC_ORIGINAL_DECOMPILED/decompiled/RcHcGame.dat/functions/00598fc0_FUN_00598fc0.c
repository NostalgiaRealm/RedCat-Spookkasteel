/*
 * FUN_00598fc0 at 00598fc0
 * undefined FUN_00598fc0(void)
 * Address ranges: 00598fc0-00599115
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00598fc0(undefined1 param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00644250;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_0059b1f0();
  if (cVar1 == '\0') {
    local_1c[0] = param_1;
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar5) = 0;
      local_14 = uVar5;
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_WayPointId_IsValid___006a6d1c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6cec,0x18e,local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
  iVar8 = 0;
  do {
    iVar3 = FUN_0059b1e0();
    iVar4 = FUN_0059b1e0();
    if (iVar3 == iVar4) {
      FUN_0059b200();
      local_4 = 0xffffffff;
      FUN_005630e0();
      ExceptionList = pvStack_c;
      return 1;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  local_4 = 0xffffffff;
  FUN_005630e0();
  ExceptionList = pvStack_c;
  return 0;
}

