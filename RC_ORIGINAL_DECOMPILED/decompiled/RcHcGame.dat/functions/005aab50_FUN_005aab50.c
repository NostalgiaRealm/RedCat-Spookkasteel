/*
 * FUN_005aab50 at 005aab50
 * undefined FUN_005aab50(void)
 * Address ranges: 005aab50-005aac63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005aab50(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
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
  puStack_8 = &LAB_00645ac8;
  local_c = ExceptionList;
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  if (param_2 == 0) {
    local_1c[0] = 0;
    local_18 = (undefined4 *)0x0;
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
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_Handle____0_006a8bf4,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0x4fc,local_1c);
    (*pcVar3)();
    if (local_18 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
      ExceptionList = local_c;
      return uVar1;
    }
    cVar2 = *(char *)((int)local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)((int)local_18 + -1) = cVar2 + -1;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      ExceptionList = local_c;
      return uVar1;
    }
    FUN_005fe5f0((char *)((int)local_18 + -1));
  }
  *(int *)(param_1 + 0x9c) = param_2;
  ExceptionList = local_c;
  return uVar1;
}

