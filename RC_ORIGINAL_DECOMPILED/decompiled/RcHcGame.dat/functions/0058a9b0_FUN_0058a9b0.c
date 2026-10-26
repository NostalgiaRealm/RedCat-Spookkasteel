/*
 * FUN_0058a9b0 at 0058a9b0
 * undefined FUN_0058a9b0(void)
 * Address ranges: 0058a9b0-0058aab1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_0058a9b0(undefined1 *param_1,undefined1 *param_2,undefined1 param_3)

{
  int iVar1;
  char cVar2;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643148;
  pvStack_c = ExceptionList;
  local_1c[0] = *param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4 = 0;
  if (-local_14 - 1U < 2) {
    FUN_005fe5fb();
  }
  iVar1 = local_14 + 1;
  cVar2 = FUN_00401940(iVar1,0);
  if (cVar2 != '\0') {
    *(undefined1 *)(local_14 + local_18) = param_3;
    *(undefined1 *)(local_18 + iVar1) = 0;
    local_14 = iVar1;
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(local_18 + -1) = cVar2 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_005fe5f0((char *)(local_18 + -1));
  }
  ExceptionList = pvStack_c;
  return param_1;
}

