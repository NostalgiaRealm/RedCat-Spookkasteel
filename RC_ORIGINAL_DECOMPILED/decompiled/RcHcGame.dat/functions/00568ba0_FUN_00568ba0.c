/*
 * FUN_00568ba0 at 00568ba0
 * undefined FUN_00568ba0(void)
 * Address ranges: 00568ba0-00568c9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00568ba0(undefined1 *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  void **ppvVar2;
  char cVar3;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006403b8;
  pvStack_c = ExceptionList;
  local_1c[0] = param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  ppvVar2 = &pvStack_c;
  if (0 < param_3) {
    do {
      if (-local_14 - 1U < 2) {
        FUN_005fe5fb();
      }
      iVar1 = local_14 + 1;
      cVar3 = FUN_00401940(iVar1,0);
      if (cVar3 != '\0') {
        *(undefined1 *)(local_14 + local_18) = param_2;
        *(undefined1 *)(local_18 + iVar1) = 0;
        local_14 = iVar1;
      }
      param_3 = param_3 + -1;
      ppvVar2 = ExceptionList;
    } while (param_3 != 0);
  }
  ExceptionList = ppvVar2;
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar3 = *(char *)(local_18 + -1);
    if ((cVar3 != '\0') && (cVar3 != -1)) {
      *(char *)(local_18 + -1) = cVar3 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_005fe5f0(local_18 + -1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

