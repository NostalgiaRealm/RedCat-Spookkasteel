/*
 * FUN_005a57a0 at 005a57a0
 * undefined FUN_005a57a0(void)
 * Address ranges: 005a57a0-005a589f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005a5803) */

void __fastcall FUN_005a57a0(int param_1)

{
  char cVar1;
  int iVar2;
  void **ppvVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00645581;
  local_c = ExceptionList;
  piVar4 = *(int **)(param_1 + 0x18);
  local_4 = 2;
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (piVar4 != *(int **)(param_1 + 0x1c)) {
    do {
      iVar2 = *piVar4;
      if (iVar2 != 0) {
        FUN_005a5cf0();
        FUN_005fe5f0(iVar2);
      }
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
      ppvVar3 = ExceptionList;
    } while (piVar4 != *(int **)(param_1 + 0x1c));
  }
  ExceptionList = ppvVar3;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_005fe5f0(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return;
}

