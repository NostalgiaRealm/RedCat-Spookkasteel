/*
 * FUN_0056f830 at 0056f830
 * undefined FUN_0056f830(void)
 * Address ranges: 0056f830-0056f997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0056f830(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640f8f;
  local_c = ExceptionList;
  bVar4 = *(int *)(param_2 + 8) == 0;
  ExceptionList = &local_c;
  if (bVar4) {
    ExceptionList = &local_c;
    param_2 = FUN_005033a0(local_1c,param_3);
    local_4 = 0;
  }
  FUN_0049b240(param_2,param_3);
  local_4 = 2;
  if (bVar4) {
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  param_1[0xa8] = 0xffffffff;
  param_1[0xa9] = 0xffffffff;
  param_1[0xaa] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xab) = 1;
  param_1[0xb8] = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)((int)param_1 + 0x2e5) = 0;
  *(undefined1 *)((int)param_1 + 0x2e6) = 0;
  *(undefined1 *)((int)param_1 + 0x2e7) = 0;
  param_1[0xba] = 0x42c80000;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0xffffffff;
  param_1[0xbd] = 0xffffffff;
  param_1[0xbe] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xbf) = 1;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *param_1 = &PTR_FUN_0064f8f8;
  puVar3 = param_1 + 0xaf;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  FUN_0049df30(0);
  ExceptionList = local_c;
  return param_1;
}

