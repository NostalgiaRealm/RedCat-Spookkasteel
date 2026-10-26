/*
 * FUN_00548870 at 00548870
 * undefined FUN_00548870(void)
 * Address ranges: 00548870-00548a60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00548870(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *_Str2;
  int local_38;
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d3f0;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  local_38 = 0;
  ExceptionList = &pvStack_c;
  do {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x38;
    }
    if (iVar5 <= local_38) goto LAB_00548999;
    _Str2 = "";
    if (*(char **)(param_3 + 4) != (char *)0x0) {
      _Str2 = *(char **)(param_3 + 4);
    }
    if ((iVar6 < 0) || (iVar5 = FUN_00549ae0(), iVar5 <= local_38)) {
      FUN_004040a0();
      iVar5 = -1;
      pcVar3 = &DAT_006b3f70;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0();
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0();
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    pcVar3 = *(char **)(iVar6 + 4 + *(int *)(param_1 + 0x18));
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar5 = __strcmpi(pcVar3,_Str2);
    if (iVar5 == 0) {
      if (local_38 == -1) {
LAB_00548999:
        FUN_005ae390();
        local_4 = 1;
        pcVar2 = (code *)FUN_005a07f0();
        (*pcVar2)();
        local_4 = 0xffffffff;
        if (iStack_18 != 0) {
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *(char *)(iStack_18 + -1) = cVar1 + -1;
          }
        }
      }
      uVar4 = FUN_005494c0();
      FUN_005413b0(uVar4);
      FUN_00543590(param_2);
      ExceptionList = pvStack_c;
      return param_2;
    }
    local_38 = local_38 + 1;
    iVar6 = iVar6 + 0x38;
  } while( true );
}

