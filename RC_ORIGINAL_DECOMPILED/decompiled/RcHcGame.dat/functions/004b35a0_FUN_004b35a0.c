/*
 * FUN_004b35a0 at 004b35a0
 * undefined FUN_004b35a0(void)
 * Address ranges: 004b35a0-004b3749
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004b362f) */

undefined4 * __thiscall
FUN_004b35a0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ea08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004ad7d0(param_2);
  param_1[0x14] = param_4;
  param_1[0x15] = param_5;
  param_1[0x16] = param_6;
  param_1[0x17] = param_9;
  param_1[0x18] = param_10;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = param_11;
  param_1[0x1c] = param_12;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)param_3;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  uVar1 = param_3[2];
  if (param_1 + 0x1d == param_3) {
    if (uVar1 != 0) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar3 = param_1[0x1f] - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      FUN_0060ab50(param_1[0x1e] + uVar1,param_1[0x1e] + uVar1 + iVar6,iVar3 - iVar6);
      iVar3 = param_1[0x1f];
      cVar2 = FUN_00401940(iVar3 - iVar6,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar3 - iVar6);
      }
    }
    FUN_0040ce10();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = (undefined1 *)param_3[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = (undefined1 *)param_3[1];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        param_1[0x1e] = puVar4;
        param_1[0x1f] = param_3[2];
        param_1[0x20] = param_3[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004b3719;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)param_3[1];
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar8 = (undefined4 *)param_1[0x1e];
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      param_1[0x1f] = uVar1;
      *(undefined1 *)(param_1[0x1e] + uVar1) = 0;
    }
  }
LAB_004b3719:
  param_1[0x22] = param_8;
  param_1[0x21] = param_7;
  *param_1 = &PTR_FUN_0064eb68;
  ExceptionList = local_c;
  return param_1;
}

