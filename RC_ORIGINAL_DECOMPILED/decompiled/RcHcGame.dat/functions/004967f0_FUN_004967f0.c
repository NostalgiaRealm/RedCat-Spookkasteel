/*
 * FUN_004967f0 at 004967f0
 * undefined FUN_004967f0(void)
 * Address ranges: 004967f0-00496937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0049683e) */

undefined4 * __thiscall
FUN_004967f0(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 *param_4,
            uint param_5,undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 local_34 [4];
  undefined4 *local_30;
  uint local_2c;
  undefined1 *local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_5;
  puVar5 = param_4;
  puStack_8 = &LAB_0062bc68;
  local_c = ExceptionList;
  local_4 = 0;
  local_34[0] = param_3;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_28 = (undefined1 *)0x0;
  if (local_34 == &param_3) {
    ExceptionList = &local_c;
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
        ExceptionList = &local_c;
        FUN_004040a0(1);
        local_30 = (undefined4 *)&DAT_0064a3b4;
        if (puVar5 != (undefined4 *)0x0) {
          local_30 = puVar5;
        }
        local_2c = param_5;
        local_28 = (undefined1 *)param_6;
        *(char *)((int)local_30 + -1) = *(char *)((int)local_30 + -1) + '\x01';
        goto LAB_004968eb;
      }
    }
    ExceptionList = &local_c;
    cVar2 = FUN_00401940(param_5,1);
    if (cVar2 != '\0') {
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar3 = local_30;
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
LAB_004968eb:
  FUN_005a2e00(param_2);
  *param_1 = &PTR_FUN_0064e79c;
  if (puVar5 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)puVar5 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      local_28 = (undefined1 *)((int)puVar5 + -1);
      local_2c = 0x49691e;
      FUN_005fe5f0();
    }
    else {
      *(char *)((int)puVar5 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

