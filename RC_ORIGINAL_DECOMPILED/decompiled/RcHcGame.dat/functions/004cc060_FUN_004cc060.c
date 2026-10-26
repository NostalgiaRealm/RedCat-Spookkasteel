/*
 * FUN_004cc060 at 004cc060
 * undefined FUN_004cc060(void)
 * Address ranges: 004cc060-004cc128
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004cc060(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00630d58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064eeb8;
  local_4 = 0;
  FUN_005fe5f0(param_1[0x6d]);
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  iVar2 = param_1[0x69];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  iVar2 = param_1[100];
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    param_1[100] = 0;
  }
  local_4 = 0xffffffff;
  FUN_004cfb70();
  ExceptionList = pvStack_c;
  return;
}

