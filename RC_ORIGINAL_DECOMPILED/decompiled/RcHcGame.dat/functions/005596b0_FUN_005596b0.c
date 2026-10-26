/*
 * FUN_005596b0 at 005596b0
 * undefined FUN_005596b0(void)
 * Address ranges: 005596b0-005597b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005596b0(void)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063eeb2;
  local_c = ExceptionList;
  bVar5 = false;
  if (DAT_006ba7cc == 0) {
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x34);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      DAT_006ba7cc = 0;
    }
    else {
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = 0;
      uVar3 = 0xffffffff;
      pcVar6 = s___Settings_Startup_INI_006a2588;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      cVar1 = FUN_00401940(uVar3,1);
      if (cVar1 != '\0') {
        pcVar6 = s___Settings_Startup_INI_006a2588;
        pcVar7 = local_18;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        local_18[uVar3] = '\0';
        local_14 = uVar3;
      }
      bVar5 = true;
      local_4 = CONCAT31(local_4._1_3_,1);
      DAT_006ba7cc = FUN_005a12c0(local_1c);
    }
    if ((bVar5) && (local_18 != (char *)0x0)) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return DAT_006ba7cc;
}

