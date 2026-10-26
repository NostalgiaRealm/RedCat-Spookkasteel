/*
 * FUN_005ea360 at 005ea360
 * undefined FUN_005ea360(void)
 * Address ranges: 005ea360-005ea4bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005ea3f8) */

undefined1 * __thiscall FUN_005ea360(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646db3;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4 = 0;
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_0040cc00(param_2 + 0x10,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar2 = *(uint *)(param_2 + 0x28);
  if (param_1 + 0x20 == param_2 + 0x20) {
    FUN_0040c9b0(uVar2,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar2 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 0x24);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = *(undefined1 **)(param_2 + 0x24);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 0x24) = puVar4;
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_005ea49c;
      }
    }
    cVar3 = FUN_00401940(uVar2,1);
    if (cVar3 != '\0') {
      puVar6 = (undefined4 *)&DAT_0064a3b4;
      if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)(param_2 + 0x24);
      }
      puVar7 = *(undefined4 **)(param_1 + 0x24);
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
LAB_005ea49c:
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

