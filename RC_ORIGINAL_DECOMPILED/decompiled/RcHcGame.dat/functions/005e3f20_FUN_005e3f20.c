/*
 * FUN_005e3f20 at 005e3f20
 * undefined FUN_005e3f20(void)
 * Address ranges: 005e3f20-005e40a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005e3fc3) */

undefined4 * __fastcall FUN_005e3f20(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646643;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0x30);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_1 + 4);
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  FUN_0040cc00(param_1 + 4,0,0xffffffff);
  puVar3[5] = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(puVar3 + 6) = *(undefined1 *)(param_1 + 0x18);
  *puVar3 = &PTR_FUN_006509bc;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(puVar3 + 7) = *(undefined1 *)(param_1 + 0x1c);
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  uVar1 = *(uint *)(param_1 + 0x24);
  if (puVar3 + 7 == (undefined4 *)(param_1 + 0x1c)) {
    FUN_0040c9b0(uVar1,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_1 + 0x20);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = *(undefined1 **)(param_1 + 0x20);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        puVar3[8] = puVar4;
        puVar3[9] = *(undefined4 *)(param_1 + 0x24);
        puVar3[10] = *(undefined4 *)(param_1 + 0x28);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_005e406b;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(param_1 + 0x20);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar7 = (undefined4 *)puVar3[8];
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_00404190(uVar1);
    }
  }
LAB_005e406b:
  *puVar3 = &PTR_FUN_006509f8;
  puVar3[0xb] = *(undefined4 *)(param_1 + 0x2c);
  *puVar3 = &PTR_FUN_00650a0c;
  ExceptionList = local_c;
  return puVar3;
}

