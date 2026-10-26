/*
 * FUN_0044afa0 at 0044afa0
 * undefined FUN_0044afa0(void)
 * Address ranges: 0044afa0-0044b0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0044aff3) */

void __thiscall FUN_0044afa0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab450(param_2);
  local_4 = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x14);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = *(uint *)(param_2 + 0x1c);
  if (param_1 + 5 == (undefined4 *)(param_2 + 0x14)) {
    if (uVar1 != 0) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar3 = param_1[7] - uVar1;
    iVar6 = -1;
    if (iVar3 != -1) {
      iVar6 = iVar3;
    }
    if (iVar6 != 0) {
      FUN_0060ab50(uVar1 + param_1[6],iVar6 + uVar1 + param_1[6],iVar3 - iVar6);
      iVar3 = param_1[7];
      cVar2 = FUN_00401940(iVar3 - iVar6,0);
      if (cVar2 != '\0') {
        FUN_00404190(iVar3 - iVar6);
      }
    }
    FUN_0040ce10();
  }
  else {
    if (uVar1 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = *(undefined1 **)(param_2 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        param_1[6] = puVar4;
        param_1[7] = *(undefined4 *)(param_2 + 0x1c);
        param_1[8] = *(undefined4 *)(param_2 + 0x20);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_0044b0cf;
      }
    }
    cVar2 = FUN_00401940(uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = *(undefined4 **)(param_2 + 0x18);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar8 = (undefined4 *)param_1[6];
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(uVar1);
    }
  }
LAB_0044b0cf:
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  *param_1 = &PTR_FUN_0064aba4;
  ExceptionList = local_c;
  return;
}

