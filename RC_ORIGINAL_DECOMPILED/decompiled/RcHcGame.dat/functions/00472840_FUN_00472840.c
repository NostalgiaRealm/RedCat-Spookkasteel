/*
 * FUN_00472840 at 00472840
 * undefined FUN_00472840(void)
 * Address ranges: 00472840-004728f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00472840(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(char **)(param_2 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,(char *)&DAT_00692e98);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x7c) != '\0') {
      FUN_00475720();
      return 1;
    }
    return 0;
  }
  pcVar1 = *(char **)(param_2 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,s_enable_0068f0e4);
  if (iVar2 == 0) {
    FUN_00502350(1);
    return 1;
  }
  pcVar1 = *(char **)(param_2 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,s_disable_0068f0dc);
  if (iVar2 == 0) {
    FUN_00502350(0);
    return 1;
  }
  uVar3 = FUN_005027d0(param_2,param_3,param_4);
  return uVar3;
}

