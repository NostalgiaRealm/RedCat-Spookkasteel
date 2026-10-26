/*
 * FUN_004ae560 at 004ae560
 * undefined FUN_004ae560(void)
 * Address ranges: 004ae560-004ae740
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004ae5b8) */

undefined4 * __thiscall FUN_004ae560(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e3c8;
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
      puVar5 = (undefined1 *)param_3[1];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar5 = (undefined1 *)param_3[1];
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0064a3b4;
        }
        param_1[0x15] = puVar5;
        param_1[0x16] = param_3[2];
        param_1[0x17] = param_3[3];
        puVar5[-1] = puVar5[-1] + '\x01';
        goto LAB_004ae65e;
      }
    }
    cVar3 = FUN_00401940(uVar2,1);
    if (cVar3 != '\0') {
      puVar8 = (undefined4 *)&DAT_0064a3b4;
      if ((undefined4 *)param_3[1] != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)param_3[1];
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
      FUN_00404190(uVar2);
    }
  }
LAB_004ae65e:
  param_1[0x18] = 1000;
  *param_1 = &PTR_FUN_0064ead0;
  puVar8 = param_1 + 0x19;
  for (iVar7 = 0x1c; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  param_1[0x19] = s_CreateDynamicLight_006965ac;
  param_1[0x1e] = 0x32;
  param_1[0x1f] = 300;
  param_1[0x20] = 1;
  uVar4 = FUN_0061f613(&DAT_006965c0);
  param_1[0x21] = uVar4;
  param_1[0x23] = 0x431b0000;
  param_1[0x24] = 0x431b0000;
  param_1[0x25] = 0x431b0000;
  param_1[0x22] = 0;
  param_1[0x26] = 0x437f0000;
  param_1[0x27] = 0x425c0000;
  param_1[0x28] = 0x425c0000;
  param_1[0x29] = 0x425c0000;
  param_1[0x2a] = 0x437f0000;
  param_1[0x2b] = 1;
  uVar4 = FUN_0061f613(&DAT_006965c0);
  param_1[0x31] = 1;
  param_1[0x34] = 1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = uVar4;
  ExceptionList = local_c;
  return param_1;
}

