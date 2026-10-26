/*
 * FUN_0045da10 at 0045da10
 * undefined FUN_0045da10(void)
 * Address ranges: 0045da10-0045db31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_0045da10(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627278;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 8) != 3) {
    local_1c[0] = param_2._0_1_;
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    uVar5 = ~uVar5 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar3 = FUN_00401940(uVar5,1);
    if (cVar3 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar5) = 0;
      local_14 = uVar5;
    }
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_IsStr___0069227c,s___Libs_daviscript_Include_Davi_S_00692284,
                                  0x44,local_1c);
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
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
  puVar2 = *(undefined1 **)(param_1 + 0x10);
  uVar1 = *puVar2;
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_0040cc00(puVar2,0,0xffffffff);
  ExceptionList = pvStack_c;
  return param_2;
}

