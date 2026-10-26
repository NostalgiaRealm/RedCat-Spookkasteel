/*
 * FUN_005a12c0 at 005a12c0
 * undefined FUN_005a12c0(void)
 * Address ranges: 005a12c0-005a13f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005a130e) */

undefined4 * __thiscall FUN_005a12c0(undefined4 *param_1,undefined4 *param_2)

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
  puStack_8 = &LAB_00644eee;
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
    FUN_0040c9b0(uVar2,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar4 = (undefined1 *)param_2[1];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = (undefined1 *)param_2[1];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        param_1[6] = puVar4;
        param_1[7] = param_2[2];
        param_1[8] = param_2[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_005a13ae;
      }
    }
    cVar3 = FUN_00401940(uVar2,1);
    if (cVar3 != '\0') {
      puVar6 = (undefined4 *)param_2[1];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar7 = (undefined4 *)param_1[6];
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
LAB_005a13ae:
  *(undefined1 *)(param_1 + 9) = param_2._0_1_;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_006500b8;
  FUN_005a18c0(0);
  FUN_005a1490();
  ExceptionList = local_c;
  return param_1;
}

