/*
 * FUN_004bf8f0 at 004bf8f0
 * undefined FUN_004bf8f0(void)
 * Address ranges: 004bf8f0-004bfa2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004bf942) */

undefined4 * __thiscall
FUN_004bf8f0(undefined4 *param_1,undefined1 param_2,undefined4 *param_3,uint param_4,
            undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062fd40;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0060b338();
  uVar1 = param_4;
  puVar5 = param_3;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(param_1 + 3) = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_1 + 3 == (undefined4 *)&param_2) {
    FUN_0040c9b0(param_4,0xffffffff);
    FUN_0040c9b0(0,0);
    puVar5 = param_3;
  }
  else {
    if (param_4 != 0) {
      puVar3 = (undefined4 *)&DAT_0064a3b4;
      if (param_3 != (undefined4 *)0x0) {
        puVar3 = param_3;
      }
      if (*(byte *)((int)puVar3 + -1) < 0xfe) {
        FUN_004040a0(1);
        puVar3 = (undefined4 *)&DAT_0064a3b4;
        if (puVar5 != (undefined4 *)0x0) {
          puVar3 = puVar5;
        }
        param_1[4] = puVar3;
        param_1[5] = param_4;
        param_1[6] = param_5;
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_004bf9f1;
      }
    }
    cVar2 = FUN_00401940(param_4,1);
    if (cVar2 != '\0') {
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar3 = (undefined4 *)param_1[4];
      for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      FUN_00404190(uVar1);
      puVar5 = param_3;
    }
  }
LAB_004bf9f1:
  *param_1 = &PTR_FUN_0064ee2c;
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

