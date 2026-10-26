/*
 * FUN_005a4b50 at 005a4b50
 * undefined FUN_005a4b50(void)
 * Address ranges: 005a4b50-005a4c6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005a4bba) */

void __fastcall FUN_005a4b50(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00645459;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006500e8;
  piVar3 = (int *)param_1[0xb];
  local_4 = 3;
  if (piVar3 != (int *)param_1[0xc]) {
    do {
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        FUN_005a57a0();
        FUN_005fe5f0(iVar2);
      }
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)param_1[0xc]);
  }
  param_1[0xc] = param_1[0xb];
  iVar2 = param_1[0x10];
  iVar4 = param_1[0xf];
  local_4 = CONCAT31(local_4._1_3_,2);
  for (; iVar4 != iVar2; iVar4 = iVar4 + 0x10) {
    FUN_004040a0(1);
  }
  FUN_005fe5f0(param_1[0xf]);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_005fe5f0(param_1[0xb]);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

