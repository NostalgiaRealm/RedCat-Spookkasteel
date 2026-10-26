/*
 * FUN_004ac120 at 004ac120
 * undefined FUN_004ac120(void)
 * Address ranges: 004ac120-004ac244
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004ac173) */

undefined4 * __thiscall
FUN_004ac120(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e0a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004ad7d0(param_2);
  uVar1 = *(undefined1 *)param_3;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar2 = param_3[2];
  local_4 = 0;
  if (param_1 + 0x14 == param_3) {
    FUN_0040c9b0(uVar2,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar2 != 0) {
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
        param_1[0x15] = puVar4;
        param_1[0x16] = param_3[2];
        param_1[0x17] = param_3[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004ac213;
      }
    }
    cVar3 = FUN_00401940(uVar2,1);
    if (cVar3 != '\0') {
      puVar6 = (undefined4 *)param_3[1];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar7 = (undefined4 *)param_1[0x15];
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_00404190(uVar2);
    }
  }
LAB_004ac213:
  param_1[0x18] = param_4;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x3f800000;
  *param_1 = &PTR_FUN_0064e9f4;
  ExceptionList = local_c;
  return param_1;
}

