/*
 * FUN_00425220 at 00425220
 * undefined FUN_00425220(void)
 * Address ranges: 00425220-00425387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0042526f) */

undefined4 * __thiscall FUN_00425220(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  uVar1 = *(undefined1 *)param_2;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar2 = param_2[2];
  local_4 = 0;
  if (param_1 + 5 == param_2) {
    if (uVar2 != 0) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar4 = param_1[7] - uVar2;
    iVar7 = -1;
    if (iVar4 != -1) {
      iVar7 = iVar4;
    }
    if (iVar7 != 0) {
      FUN_0060ab50(uVar2 + param_1[6],uVar2 + param_1[6] + iVar7,iVar4 - iVar7);
      iVar4 = param_1[7];
      cVar3 = FUN_00401940(iVar4 - iVar7,0);
      if (cVar3 != '\0') {
        FUN_00404190(iVar4 - iVar7);
      }
    }
    FUN_0040ce10();
  }
  else {
    if (uVar2 != 0) {
      puVar5 = (undefined1 *)param_2[1];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar5 = (undefined1 *)param_2[1];
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0064a3b4;
        }
        param_1[6] = puVar5;
        param_1[7] = param_2[2];
        param_1[8] = param_2[3];
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_004252cd;
      }
    }
    cVar3 = FUN_00401940(uVar2,1);
    if (cVar3 != '\0') {
      puVar8 = (undefined4 *)param_2[1];
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar9 = (undefined4 *)param_1[6];
      for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      param_1[7] = uVar2;
      *(undefined1 *)(param_1[6] + uVar2) = 0;
      *param_1 = &PTR_FUN_0064bca0;
      ExceptionList = local_c;
      return param_1;
    }
  }
LAB_004252cd:
  *param_1 = &PTR_FUN_0064bca0;
  ExceptionList = local_c;
  return param_1;
}

