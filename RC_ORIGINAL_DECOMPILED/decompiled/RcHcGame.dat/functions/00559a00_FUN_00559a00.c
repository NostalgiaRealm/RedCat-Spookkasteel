/*
 * FUN_00559a00 at 00559a00
 * undefined FUN_00559a00(void)
 * Address ranges: 00559a00-00559b16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00559a00(void)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ef42;
  local_c = ExceptionList;
  bVar6 = false;
  if (DAT_006ba7d8 == 0) {
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x104);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      DAT_006ba7d8 = 0;
    }
    else {
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = 0;
      uVar4 = 0xffffffff;
      pcVar7 = s_D3DRGBDriver_006a25ac;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        pcVar7 = s_D3DRGBDriver_006a25ac;
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
      puVar9 = local_1c;
      local_4 = CONCAT31(local_4._1_3_,1);
      uVar3 = FUN_005596b0(puVar9);
      DAT_006ba7d8 = FUN_005a0a70(uVar3,puVar9);
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
  }
  ExceptionList = local_c;
  return DAT_006ba7d8;
}

