/*
 * FUN_00408ff0 at 00408ff0
 * undefined FUN_00408ff0(void)
 * Address ranges: 00408ff0-00409196
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a920 slot 1 for .?AV?$CRcSpiderAttack@VCRcTouchSpider@@@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a920 slot 1 for
   .?AV?$CRcSpiderAttack@VCRcTouchSpider@@@@. Original bytes unchanged; names and types still
   inferred. */

void __thiscall FUN_00408ff0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620623;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar9 = param_3;
  FUN_00402a80(param_2,param_3);
  FUN_00402d20(param_2,uVar9);
  iVar2 = FUN_00402cf0();
  if (iVar2 == 0) {
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 != '\0') {
      FUN_00408d10();
    }
  }
  else if (iVar2 == 1) {
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 != '\0') {
      puVar4 = operator_new(0x40);
      local_4 = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        uVar9 = *(undefined4 *)(param_1 + 0x28);
        FUN_00405530(uVar9);
        puVar4[0xb] = uVar9;
        puVar4[0xf] = 0;
        *puVar4 = &PTR_FUN_0064a950;
      }
      local_4 = 0xffffffff;
      FUN_00402a10(2,puVar4);
    }
  }
  else if (iVar2 == 2) {
    FUN_00402a80();
    cVar1 = FUN_00402d10();
    if (cVar1 != '\0') {
      FUN_00402d00();
    }
  }
  else {
    uVar5 = 0xffffffff;
    pcVar7 = s_CRcSpiderAttack<Spider>__DoOnFra_0068e134;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    local_1c[0] = (undefined1)param_3;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      pcVar7 = s_CRcSpiderAttack<Spider>__DoOnFra_0068e134;
      pcVar8 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_18[uVar5] = '\0';
      local_14 = uVar5;
    }
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcSpid_0068e108,0x9b,
                                  local_1c);
    (*pcVar3)();
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

