/*
 * FUN_00538230 at 00538230
 * undefined FUN_00538230(void)
 * Address ranges: 00538230-005383af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005382a9) */

undefined4 * __thiscall
FUN_00538230(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

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
  puStack_8 = &LAB_0063bb13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00537a20(param_2,param_3,param_5);
  *(undefined1 *)(param_1 + 0x10) = (undefined1)param_5;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_4 = 1;
  uVar1 = *(undefined1 *)param_4;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar2 = param_4[2];
  if (param_1 + 0x14 == param_4) {
    if (uVar2 != 0) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar4 = param_1[0x16] - uVar2;
    iVar7 = -1;
    if (iVar4 != -1) {
      iVar7 = iVar4;
    }
    if (iVar7 != 0) {
      FUN_0060ab50(param_1[0x15] + uVar2,param_1[0x15] + uVar2 + iVar7,iVar4 - iVar7);
      iVar4 = param_1[0x16];
      cVar3 = FUN_00401940(iVar4 - iVar7,0);
      if (cVar3 != '\0') {
        FUN_00404190(iVar4 - iVar7);
      }
    }
    FUN_0040ce10();
  }
  else {
    if (uVar2 != 0) {
      puVar5 = (undefined1 *)param_4[1];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar5 = (undefined1 *)param_4[1];
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0064a3b4;
        }
        param_1[0x15] = puVar5;
        param_1[0x16] = param_4[2];
        param_1[0x17] = param_4[3];
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_00538393;
      }
    }
    cVar3 = FUN_00401940(uVar2,1);
    if (cVar3 != '\0') {
      puVar8 = (undefined4 *)param_4[1];
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar9 = (undefined4 *)param_1[0x15];
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
      param_1[0x16] = uVar2;
      *(undefined1 *)(param_1[0x15] + uVar2) = 0;
    }
  }
LAB_00538393:
  *param_1 = &PTR_FUN_0064f700;
  ExceptionList = local_c;
  return param_1;
}

