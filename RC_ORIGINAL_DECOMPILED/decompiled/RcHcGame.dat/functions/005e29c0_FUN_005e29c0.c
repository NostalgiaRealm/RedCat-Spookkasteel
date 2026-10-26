/*
 * FUN_005e29c0 at 005e29c0
 * undefined FUN_005e29c0(void)
 * Address ranges: 005e29c0-005e2a3d;005e2a4a-005e2a60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005e29c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0064645b;
  local_c = ExceptionList;
  if (param_1 == param_2) {
    return param_1;
  }
  ExceptionList = &local_c;
  if ((*(int *)(param_1 + 8) == 3) &&
     (iVar3 = *(int *)(param_1 + 0x10), ExceptionList = &local_c, iVar3 != 0)) {
    iVar2 = *(int *)(iVar3 + 4);
    ExceptionList = &local_c;
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        ExceptionList = &local_c;
        FUN_005fe5f0((char *)(iVar2 + -1));
      }
      else {
        ExceptionList = &local_c;
        *(char *)(iVar2 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    FUN_005fe5f0(iVar3);
  }
  iVar3 = *(int *)(param_2 + 8);
  *(int *)(param_1 + 8) = iVar3;
                    /* WARNING: Could not recover jumptable at 0x005e2a37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (*(code *)(&PTR_LAB_005e2bc4)[iVar3])();
  return iVar3;
}

