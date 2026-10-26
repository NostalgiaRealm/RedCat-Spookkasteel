/*
 * FUN_004b3ef0 at 004b3ef0
 * undefined FUN_004b3ef0(void)
 * Address ranges: 004b3ef0-004b405c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004b3f6f) */

undefined4 * __thiscall
FUN_004b3ef0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 *param_5,uint param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062eaa0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004b8dd0(param_2,param_3,param_10,param_11);
  uVar1 = param_6;
  puVar5 = param_5;
  param_1[0x5c] = param_8;
  param_1[0x5d] = param_9;
  *(undefined1 *)(param_1 + 0x5e) = param_4;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_1 + 0x5e == (undefined4 *)&param_4) {
    FUN_0040c9b0(param_6,0xffffffff);
    FUN_0040c9b0(0,0);
    puVar5 = param_5;
  }
  else {
    if (param_6 != 0) {
      puVar3 = (undefined4 *)&DAT_0064a3b4;
      if (param_5 != (undefined4 *)0x0) {
        puVar3 = param_5;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004040a0(1);
        puVar3 = (undefined4 *)&DAT_0064a3b4;
        if (puVar5 != (undefined4 *)0x0) {
          puVar3 = puVar5;
        }
        param_1[0x5f] = puVar3;
        param_1[0x60] = param_6;
        param_1[0x61] = param_7;
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_004b4020;
      }
    }
    cVar2 = FUN_00401940(param_6,1);
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)&DAT_0064a3b4;
      if (puVar5 != (undefined4 *)0x0) {
        puVar3 = puVar5;
      }
      puVar5 = (undefined4 *)param_1[0x5f];
      for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_00404190(uVar1);
      puVar5 = param_5;
    }
  }
LAB_004b4020:
  *param_1 = &PTR_FUN_0064eb84;
  if (puVar5 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puVar5 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((undefined1 *)((int)puVar5 + -1));
    }
    else {
      *(char *)((int)puVar5 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

