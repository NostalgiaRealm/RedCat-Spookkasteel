/*
 * FUN_004253c0 at 004253c0
 * undefined FUN_004253c0(void)
 * Address ranges: 004253c0-0042556b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_004253c0(undefined1 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622838;
  pvStack_c = ExceptionList;
  local_1c[0] = (undefined1)param_2;
  uVar3 = 0xffffffff;
  pcVar6 = s___Settings__0068f9fc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  FUN_004040f0(s___Settings__0068f9fc,~uVar3 - 1);
  local_4 = 0;
  uVar3 = 0xffffffff;
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
    uVar3 = *(uint *)(param_2 + 8);
  }
  if (-local_14 - 1U <= uVar3) {
    FUN_005fe5fb();
  }
  if (uVar3 != 0) {
    iVar1 = local_14 + uVar3;
    cVar2 = FUN_00401940(iVar1,0);
    if (cVar2 != '\0') {
      puVar5 = *(undefined4 **)(param_2 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar7 = (undefined4 *)(local_14 + local_18);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_00404190(iVar1);
    }
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_0068f9f4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3 - 1;
  if (-local_14 - 1U <= uVar3) {
    FUN_005fe5fb();
  }
  if (uVar3 != 0) {
    iVar1 = local_14 + uVar3;
    cVar2 = FUN_00401940(iVar1,0);
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)&DAT_0068f9f4;
      puVar7 = (undefined4 *)(local_14 + local_18);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)(local_18 + iVar1) = 0;
      local_14 = iVar1;
    }
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_18 + -1) = cVar2 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_005fe5f0(local_18 + -1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

