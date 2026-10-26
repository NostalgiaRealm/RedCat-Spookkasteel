/*
 * FUN_005a2f50 at 005a2f50
 * undefined FUN_005a2f50(void)
 * Address ranges: 005a2f50-005a3146
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005a2f50(undefined1 *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  int iStack_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006451b8;
  pvStack_c = ExceptionList;
  local_1c[0] = param_1._0_1_;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4 = 0;
  iVar3 = FUN_005a1d60();
  pcVar4 = *(char **)(iVar3 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  if (*pcVar4 != '\\') {
    iVar3 = FUN_005a1d60();
    pcVar4 = *(char **)(iVar3 + 4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "";
    }
    pcVar4 = _strchr(pcVar4,0x3a);
    if (pcVar4 == (char *)0x0) {
      FUN_005a2980();
      uVar5 = FUN_005a2470();
      FUN_0040cc00(uVar5,0,0xffffffff);
      uVar6 = 0xffffffff;
      pcVar4 = &DAT_006a1548;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6 - 1;
      if (-local_14 - 1U <= uVar6) {
        FUN_005fe5fb();
      }
      if (uVar6 != 0) {
        iVar3 = local_14 + uVar6;
        cVar2 = FUN_00401940(iVar3,0);
        if (cVar2 != '\0') {
          puVar8 = (undefined4 *)&DAT_006a1548;
          puVar9 = (undefined4 *)(iStack_18 + local_14);
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          *(undefined1 *)(iStack_18 + iVar3) = 0;
          local_14 = iVar3;
        }
      }
      iVar3 = FUN_005a1d60();
      uVar6 = 0xffffffff;
      if (*(uint *)(iVar3 + 8) != 0xffffffff) {
        uVar6 = *(uint *)(iVar3 + 8);
      }
      if (-local_14 - 1U <= uVar6) {
        FUN_005fe5fb();
      }
      if (uVar6 != 0) {
        iVar1 = local_14 + uVar6;
        cVar2 = FUN_00401940(iVar1,0);
        if (cVar2 != '\0') {
          puVar8 = *(undefined4 **)(iVar3 + 4);
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)&DAT_0064a3b4;
          }
          puVar9 = (undefined4 *)(iStack_18 + local_14);
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_00404190(iVar1);
        }
      }
      goto LAB_005a30e4;
    }
  }
  uVar5 = FUN_005a1d60();
  FUN_0040cc00(uVar5,0,0xffffffff);
LAB_005a30e4:
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (iStack_18 != 0) {
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(iStack_18 + -1);
    }
    else {
      *(char *)(iStack_18 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

