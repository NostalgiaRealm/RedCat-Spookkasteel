/*
 * FUN_005eacb0 at 005eacb0
 * undefined FUN_005eacb0(void)
 * Address ranges: 005eacb0-005eae11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005eacb0(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  char *_Buf;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *_MaxCount;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  char *pcStack00000008;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_0045da10(local_1c);
  local_4 = 0;
  iVar4 = FUN_0045da10(local_2c);
  uVar2 = *(uint *)(iVar3 + 8);
  pcStack00000008 = "";
  if (*(char **)(iVar3 + 4) != (char *)0x0) {
    pcStack00000008 = *(char **)(iVar3 + 4);
  }
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar6 = *(uint *)(iVar4 + 8);
    if ((uVar6 != 0) && (uVar2 <= uVar6)) {
      _Buf = *(char **)(iVar4 + 4);
      _MaxCount = (char *)(uVar6 + (1 - uVar2));
      pcVar5 = _memchr(_Buf,(int)*pcStack00000008,(size_t)_MaxCount);
      while (pcVar5 != (char *)0x0) {
        bVar9 = true;
        uVar6 = uVar2;
        pcVar7 = pcVar5;
        pcVar8 = pcStack00000008;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar9 = *pcVar7 == *pcVar8;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (bVar9);
        if (bVar9) {
          iVar3 = (int)pcVar5 - *(int *)(iVar4 + 4);
          goto LAB_005ead86;
        }
        _MaxCount = _Buf + (int)(_MaxCount + (-1 - (int)pcVar5));
        _Buf = pcVar5 + 1;
        pcVar5 = _memchr(_Buf,(int)*pcStack00000008,(size_t)_MaxCount);
      }
    }
    iVar3 = -1;
  }
LAB_005ead86:
  param_1[4] = iVar3;
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 2;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

