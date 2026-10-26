/*
 * FUN_00537a20 at 00537a20
 * undefined FUN_00537a20(void)
 * Address ranges: 00537a20-00537b62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00537a6f) */

undefined4 * __thiscall
FUN_00537a20(undefined4 *param_1,undefined1 *param_2,undefined4 *param_3,undefined4 param_4)

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
  puStack_8 = &LAB_0063ba83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  uVar1 = *(undefined1 *)param_3;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar2 = param_3[2];
  local_4 = 0;
  if (param_1 + 5 == param_3) {
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
        param_1[6] = puVar4;
        param_1[7] = param_3[2];
        param_1[8] = param_3[3];
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_00537b0f;
      }
    }
    cVar3 = FUN_00401940(uVar2,1);
    if (cVar3 != '\0') {
      puVar6 = (undefined4 *)param_3[1];
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
LAB_00537b0f:
  param_1[0xb] = param_4;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(param_1 + 0xc) = *param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  *param_1 = &PTR_FUN_0064f6f0;
  ExceptionList = local_c;
  return param_1;
}

