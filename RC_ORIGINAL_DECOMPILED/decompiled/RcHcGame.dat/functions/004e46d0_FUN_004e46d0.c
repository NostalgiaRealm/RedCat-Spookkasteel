/*
 * FUN_004e46d0 at 004e46d0
 * undefined FUN_004e46d0(void)
 * Address ranges: 004e46d0-004e477e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004e46d0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064ec04;
  DAT_006b953c = DAT_006b953c + -1;
  local_4 = 0;
  iVar2 = param_1[0x5c];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  iVar2 = param_1[0x5a];
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x5a] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

