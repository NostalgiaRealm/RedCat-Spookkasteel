/*
 * FUN_00556e90 at 00556e90
 * undefined FUN_00556e90(void)
 * Address ranges: 00556e90-00557090
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00556e90(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_3c [4];
  char *local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e820;
  local_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  if (DAT_006ba780 == 0) {
    ExceptionList = &local_c;
    pvVar5 = operator_new(0x6c);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      DAT_006ba780 = 0;
    }
    else {
      uVar7 = 0xffffffff;
      local_28 = 0;
      pcVar9 = s_Display_006975d8;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar4 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
      local_24 = 0;
      local_20 = 0;
      FUN_004040f0(s_Display_006975d8,~uVar7 - 1);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = s_SoftwareOnly_006a2404;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar4 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar4 = FUN_00401940(uVar7,1);
      if (cVar4 != '\0') {
        pcVar9 = s_SoftwareOnly_006a2404;
        pcVar10 = local_38;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
        local_38[uVar7] = '\0';
        local_34 = uVar7;
      }
      local_4 = 2;
      uVar6 = FUN_0043b0a0(local_1c);
      bVar3 = true;
      bVar2 = true;
      bVar1 = true;
      local_4 = 3;
      DAT_006ba780 = FUN_005ac9d0(local_3c,local_2c,0,uVar6,0);
    }
    if (bVar3) {
      if (local_18 != 0) {
        cVar4 = *(char *)(local_18 + -1);
        if ((cVar4 == '\0') || (cVar4 == -1)) {
          FUN_005fe5f0((char *)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = cVar4 + -1;
        }
      }
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
    }
    if (bVar1) {
      if (local_38 != (char *)0x0) {
        cVar4 = local_38[-1];
        if ((cVar4 == '\0') || (cVar4 == -1)) {
          FUN_005fe5f0(local_38 + -1);
        }
        else {
          local_38[-1] = cVar4 + -1;
        }
      }
      local_38 = (char *)0x0;
      local_34 = 0;
      local_30 = 0;
    }
    local_4 = 0xffffffff;
    if (bVar2) {
      if (local_28 != 0) {
        cVar4 = *(char *)(local_28 + -1);
        if ((cVar4 == '\0') || (cVar4 == -1)) {
          FUN_005fe5f0((char *)(local_28 + -1));
        }
        else {
          *(char *)(local_28 + -1) = cVar4 + -1;
        }
      }
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
    }
    FUN_005ad400(1);
  }
  ExceptionList = local_c;
  return DAT_006ba780;
}

