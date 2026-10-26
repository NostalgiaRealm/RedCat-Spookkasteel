/*
 * FUN_005e3020 at 005e3020
 * undefined FUN_005e3020(void)
 * Address ranges: 005e3020-005e3161
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005e3068) */

undefined4 * __thiscall
FUN_005e3020(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 *param_4,
            uint param_5,undefined4 param_6,undefined1 param_7)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_5;
  puVar5 = param_4;
  puStack_8 = &LAB_006464d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_1 + 1 == (undefined4 *)&param_3) {
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
        param_1[2] = puVar3;
        param_1[3] = param_5;
        param_1[4] = param_6;
        *(char *)((int)puVar3 + -1) = *(char *)((int)puVar3 + -1) + '\x01';
        goto LAB_005e3117;
      }
    }
    cVar2 = FUN_00401940(param_5,1);
    if (cVar2 != '\0') {
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar3 = (undefined4 *)param_1[2];
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
      puVar5 = param_4;
    }
  }
LAB_005e3117:
  param_1[5] = param_2;
  *(undefined1 *)(param_1 + 6) = param_7;
  *param_1 = &PTR_FUN_006509bc;
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

