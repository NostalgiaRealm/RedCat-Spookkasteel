/*
 * FUN_0050e290 at 0050e290
 * undefined FUN_0050e290(void)
 * Address ranges: 0050e290-0050e464
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0050e290(int param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  int iStack_30;
  undefined1 uStack_2c;
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636ed8;
  pvStack_c = ExceptionList;
  if (-1 < *(int *)(param_1 + 0x1c)) {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2;
    }
    ExceptionList = &pvStack_c;
    if (*(int *)(param_1 + 0x1c) < iVar2) goto LAB_0050e345;
  }
  ExceptionList = &pvStack_c;
  FUN_005ae390();
  local_4 = 0;
  pcVar3 = (code *)FUN_005a07f0();
  (*pcVar3)();
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
LAB_0050e345:
  iVar2 = *(int *)(param_1 + 0x1c);
  if ((iVar2 < 0) || (iVar4 = FUN_0044e4c0(), iVar4 <= iVar2)) {
    uStack_2c = param_2;
    FUN_004040a0();
    iVar4 = -1;
    pcVar5 = &DAT_006b3f70;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0();
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0();
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  iStack_30 = *(int *)(*(int *)(param_1 + 0x28) + iVar2 * 4);
  if (iStack_30 != 0) {
    *(int *)(iStack_30 + 0x14) = *(int *)(iStack_30 + 0x14) + 1;
  }
  local_4 = 2;
  if (iStack_30 != 0) {
    FUN_00449760(&iStack_30);
    FUN_005614e0();
  }
  local_4 = 0xffffffff;
  if ((iStack_30 != 0) &&
     (iVar2 = *(int *)(iStack_30 + 0x14) + -1, *(int *)(iStack_30 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

