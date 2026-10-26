/*
 * FUN_00491fb0 at 00491fb0
 * undefined FUN_00491fb0(void)
 * Address ranges: 00491fb0-004920b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00491fb0(void)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b562;
  local_c = ExceptionList;
  bVar6 = false;
  ExceptionList = &local_c;
  FUN_005afe30(s_<*REDCAT*>Creating_CRCApplicatio_00693a90);
  pvVar2 = operator_new(0x6a4);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0xffffffff;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    pcVar7 = s_RedCat_006904e8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      pcVar7 = s_RedCat_006904e8;
      pcVar8 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_18[uVar4] = '\0';
      local_14 = uVar4;
    }
    bVar6 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar3 = FUN_00491f50(local_1c);
  }
  if ((bVar6) && (local_18 != (char *)0x0)) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return uVar3;
}

