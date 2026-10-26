/*
 * FUN_004969b0 at 004969b0
 * undefined FUN_004969b0(void)
 * Address ranges: 004969b0-00496cbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e594 slot 6 for .?AVCRCGame@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e594 slot 6 for
   .?AVCRCGame@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall
FUN_004969b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
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
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062bd00;
  local_c = ExceptionList;
  switch(param_3) {
  case 0:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x5c);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_0051ade0(param_1,0,param_4);
      ExceptionList = local_c;
      return uVar3;
    }
    break;
  case 1:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x1b4);
    local_4 = 2;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_004851a0(param_1,1,param_4);
      ExceptionList = local_c;
      return uVar3;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x94);
    local_4 = 3;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00484fb0(param_1,2,param_4);
      ExceptionList = local_c;
      return uVar3;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    pvVar2 = operator_new(100);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00483bf0(param_1,3,param_4);
      ExceptionList = local_c;
      return uVar3;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x2e8);
    local_4 = 4;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_0048ae00(param_1,4,param_4);
      ExceptionList = local_c;
      return uVar3;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x6c);
    local_4 = 7;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00488210(param_1,5,param_4);
      ExceptionList = local_c;
      return uVar3;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x7c);
    local_4 = 5;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_0051c820(param_1,6,param_4);
      ExceptionList = local_c;
      return uVar3;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x1a0);
    local_4 = 6;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_004882e0(param_1,7,param_4);
      ExceptionList = local_c;
      return uVar3;
    }
    break;
  default:
    local_1c[0] = (undefined1)param_4;
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &local_c;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
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
    local_4 = 8;
    pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RCGame_00694968,0x1b5
                                  ,local_1c);
    (*pcVar4)();
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return 0;
      }
      FUN_005fe5f0((char *)((int)local_18 + -1));
    }
  }
  ExceptionList = local_c;
  return 0;
}

