/*
 * FUN_005a0700 at 005a0700
 * undefined FUN_005a0700(void)
 * Address ranges: 005a0700-005a07e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005a0700(undefined *param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644d68;
  local_c = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    local_1c[0] = 0;
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &local_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar3) = 0;
      local_14 = uVar3;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Func__0_006a77c8,s_D__Work_RCHorror_AdamSource_Davi_006a7774,
                                  0x1e,local_1c);
    (*pcVar2)();
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
  }
  PTR_FUN_006a7770 = param_1;
  ExceptionList = local_c;
  return;
}

