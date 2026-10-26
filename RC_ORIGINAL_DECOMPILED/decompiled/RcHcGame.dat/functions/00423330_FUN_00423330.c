/*
 * FUN_00423330 at 00423330
 * undefined FUN_00423330(void)
 * Address ranges: 00423330-004233cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00423330(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(char **)(param_2 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,s_enable_0068f0e4);
  if (iVar2 == 0) {
    uVar3 = 1;
    (**(code **)(*param_1 + 0x9c))(1);
    FUN_00502350(uVar3);
    FUN_00502350(1);
    return 1;
  }
  pcVar1 = *(char **)(param_2 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,s_disable_0068f0dc);
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x9c))(0);
    FUN_00502350(iVar2);
    FUN_00502350(0);
    return 1;
  }
  uVar3 = FUN_005027d0(param_2,param_3,param_4);
  return uVar3;
}

