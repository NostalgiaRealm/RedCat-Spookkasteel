/*
 * FUN_00434230 at 00434230
 * undefined FUN_00434230(void)
 * Address ranges: 00434230-00434420
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00434230(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_2c [4];
  char *local_28;
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
  puStack_8 = &LAB_00623c04;
  local_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  ExceptionList = &local_c;
  pvVar5 = operator_new(0x52c);
  local_4 = 0;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00457e00(param_1);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x250) = uVar6;
  pvVar5 = operator_new(0x2ac);
  local_4 = 1;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar7 = 0xffffffff;
    pcVar9 = s_RedCat_act_006904f0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar4 != '\0');
    uVar7 = ~uVar7 - 1;
    local_28 = (char *)0x0;
    local_24 = 0;
    local_20 = 0;
    cVar4 = FUN_00401940(uVar7,1);
    if (cVar4 != '\0') {
      pcVar9 = s_RedCat_act_006904f0;
      pcVar10 = local_28;
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
      FUN_00404190(uVar7);
    }
    uVar7 = 0xffffffff;
    local_4 = CONCAT31(local_4._1_3_,2);
    pcVar9 = s_RedCat_006904e8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar4 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(s_RedCat_006904e8,~uVar7 - 1);
    bVar3 = true;
    bVar2 = true;
    local_4 = 3;
    uVar6 = FUN_0042dfa0(local_1c,local_2c);
  }
  puVar1 = (undefined4 *)(param_1 + 0x254);
  *puVar1 = uVar6;
  if (bVar2) {
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
  local_4 = 0xffffffff;
  if (bVar3) {
    if (local_28 != (char *)0x0) {
      cVar4 = local_28[-1];
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        FUN_005fe5f0(local_28 + -1);
      }
      else {
        local_28[-1] = cVar4 + -1;
      }
    }
    local_28 = (char *)0x0;
    local_24 = 0;
    local_20 = 0;
  }
  FUN_00509a90(*(undefined4 *)(param_1 + 0x250),(undefined4 *)(param_1 + 0x250));
  FUN_00509a90(*puVar1,puVar1);
  ExceptionList = local_c;
  return 1;
}

