/*
 * FUN_00574f80 at 00574f80
 * undefined FUN_00574f80(void)
 * Address ranges: 00574f80-005751bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f9ec slot 6 for .?AVCAdamEffectBeam@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f9ec slot 6 for
   .?AVCAdamEffectBeam@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_00574f80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006415e0;
  local_c = ExceptionList;
  pcVar2 = *(char **)(param_2 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  ExceptionList = &local_c;
  iVar3 = __strcmpi(pcVar2,s_enable_0068f0e4);
  if (iVar3 == 0) {
    FUN_00502350(1);
    *(undefined1 *)(param_1 + 0x238) = 1;
    ExceptionList = local_c;
    return 1;
  }
  pcVar2 = *(char **)(param_2 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar3 = __strcmpi(pcVar2,s_disable_0068f0dc);
  if (iVar3 != 0) {
    uVar6 = FUN_005027d0(param_2,param_3,param_4);
    ExceptionList = local_c;
    return uVar6;
  }
  if (*(int *)(param_1 + 0x23c) != 0) {
    if (*(int *)(param_1 + 0x23c) == 0) {
      local_1c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar2 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_00553130();
    param_2 = 0;
    iVar3 = *(int *)(param_1 + 0x23c);
    local_4 = 1;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + 0x14) + -1;
      *(int *)(iVar3 + 0x14) = iVar5;
      if (iVar5 == 0) {
        FUN_005abfc0(0);
      }
      *(undefined4 *)(param_1 + 0x23c) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00502350(0);
  }
  if (*(int *)(param_1 + 0x240) != 0) {
    if (*(int *)(param_1 + 0x240) == 0) {
      local_1c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar2 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_00553130();
    iVar3 = *(int *)(param_1 + 0x240);
    local_4 = 3;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + 0x14) + -1;
      *(int *)(iVar3 + 0x14) = iVar5;
      if (iVar5 == 0) {
        FUN_005abfc0(0);
      }
      *(undefined4 *)(param_1 + 0x240) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00502350(0);
  }
  FUN_00502350(0);
  ExceptionList = local_c;
  return 1;
}

