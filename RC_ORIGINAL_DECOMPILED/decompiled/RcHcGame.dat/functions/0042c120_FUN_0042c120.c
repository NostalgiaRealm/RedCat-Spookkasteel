/*
 * FUN_0042c120 at 0042c120
 * undefined FUN_0042c120(void)
 * Address ranges: 0042c120-0042c271
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_0042c120(int param_1,uint *param_2)

{
  uint *puVar1;
  void **ppvVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_25;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006232d8;
  local_c = ExceptionList;
  puVar1 = *(uint **)(param_1 + 0x30);
  puVar7 = (uint *)*puVar1;
  local_25 = 0;
  ppvVar2 = &local_c;
  if (puVar7 == puVar1) {
    return (uint)puVar1 & 0xffffff00;
  }
  do {
    ExceptionList = ppvVar2;
    if (puVar7[2] == 0) {
      local_1c[0] = param_2._0_1_;
      uVar5 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      uVar5 = ~uVar5 - 1;
      local_18 = (undefined4 *)0x0;
      local_14 = 0;
      local_10 = 0;
      cVar3 = FUN_00401940(uVar5,1);
      if (cVar3 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        puVar10 = local_18;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(undefined1 *)((int)local_18 + uVar5) = 0;
        local_14 = uVar5;
      }
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s__i____0_0069002c,s_D__Work_RCHorror_RCSource_RCTarg_00690034,
                                    0x30,local_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      if (local_18 != (undefined4 *)0x0) {
        cVar3 = *(char *)((int)local_18 + -1);
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0((char *)((int)local_18 + -1));
        }
        else {
          *(char *)((int)local_18 + -1) = cVar3 + -1;
        }
      }
    }
    if (*param_2 == puVar7[2]) {
      local_25 = 1;
    }
    puVar7 = (uint *)*puVar7;
    ppvVar2 = ExceptionList;
    if (puVar7 == *(uint **)(param_1 + 0x30)) {
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)puVar7 >> 8),local_25);
    }
  } while( true );
}

