/*
 * FUN_005ae5f0 at 005ae5f0
 * undefined FUN_005ae5f0(void)
 * Address ranges: 005ae5f0-005ae76c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_005ae5f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
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
  
  pvVar1 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645f12;
  local_c = ExceptionList;
  bVar6 = false;
  ExceptionList = &local_c;
  *param_1 = 0;
  if (DAT_006cada2 != '\0') {
    ExceptionList = pvVar1;
    return param_1;
  }
  DAT_006cada2 = 1;
  puVar3 = operator_new(0x18);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_1c[0] = (undefined1)param_2;
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
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
      *(undefined1 *)(uVar4 + (int)local_18) = 0;
      local_14 = uVar4;
    }
    bVar6 = true;
    *puVar3 = param_2;
    puVar3[1] = param_3;
    local_4 = CONCAT31(local_4._1_3_,1);
    *(undefined1 *)(puVar3 + 2) = local_1c[0];
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    FUN_0040cc00(local_1c,0,0xffffffff);
  }
  local_4 = 0xffffffff;
  if (bVar6) {
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
  FUN_005ae7e0(puVar3);
  *param_1 = 1;
  DAT_006cada2 = 0;
  ExceptionList = local_c;
  return param_1;
}

