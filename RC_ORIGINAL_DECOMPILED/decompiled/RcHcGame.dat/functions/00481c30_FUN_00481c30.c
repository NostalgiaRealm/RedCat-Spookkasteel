/*
 * FUN_00481c30 at 00481c30
 * undefined FUN_00481c30(void)
 * Address ranges: 00481c30-00481dcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00481ce3) */

void __thiscall FUN_00481c30(int param_1,undefined1 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00629487;
  local_c = ExceptionList;
  bVar1 = false;
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    local_18 = (undefined4 *)0x0;
    local_1c[0] = param_2._0_1_;
    local_14 = 0;
    local_10 = 0;
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    ExceptionList = &local_c;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_14 = uVar4;
      *(undefined1 *)((int)local_18 + uVar4) = 0;
    }
    bVar1 = true;
    param_2 = local_1c;
    local_4 = 0;
  }
  uVar4 = *(uint *)(param_2 + 8);
  if ((undefined1 *)(param_1 + 0x18) == param_2) {
    FUN_0040c9b0(uVar4,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar4 != 0) {
      puVar3 = *(undefined1 **)(param_2 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      if ((byte)puVar3[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar3 = *(undefined1 **)(param_2 + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 0x1c) = puVar3;
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0xc);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_00481d7c;
      }
    }
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(param_2 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x1c);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(uVar4);
    }
  }
LAB_00481d7c:
  if ((bVar1) && (local_18 != (undefined4 *)0x0)) {
    cVar2 = *(char *)((int)local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)((int)local_18 + -1) = cVar2 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0((char *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}

