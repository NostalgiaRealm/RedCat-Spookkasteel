/*
 * FUN_005a2b90 at 005a2b90
 * undefined FUN_005a2b90(void)
 * Address ranges: 005a2b90-005a2cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005a2bef) */

undefined4 * __thiscall
FUN_005a2b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            uint param_5,undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0064514b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  uVar1 = param_5;
  puVar5 = param_4;
  *(undefined1 *)(param_1 + 5) = (undefined1)param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_0064abb0;
  param_1[9] = param_2;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (param_1 + 5 == &param_3) {
    FUN_0040c9b0(param_5,0xffffffff);
    FUN_0040c9b0(0,0);
    puVar5 = param_4;
  }
  else {
    if (param_5 != 0) {
      puVar3 = (undefined4 *)&DAT_0064a3b4;
      if (param_4 != (undefined4 *)0x0) {
        puVar3 = param_4;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004040a0(1);
        puVar3 = (undefined4 *)&DAT_0064a3b4;
        if (puVar5 != (undefined4 *)0x0) {
          puVar3 = puVar5;
        }
        param_1[6] = puVar3;
        param_1[7] = param_5;
        param_1[8] = param_6;
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_005a2ca2;
      }
    }
    cVar2 = FUN_00401940(param_5,1);
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)&DAT_0064a3b4;
      if (puVar5 != (undefined4 *)0x0) {
        puVar3 = puVar5;
      }
      puVar5 = (undefined4 *)param_1[6];
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
      param_1[7] = uVar1;
      *(undefined1 *)(uVar1 + param_1[6]) = 0;
      puVar5 = param_4;
    }
  }
LAB_005a2ca2:
  FUN_005a2ce0();
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

