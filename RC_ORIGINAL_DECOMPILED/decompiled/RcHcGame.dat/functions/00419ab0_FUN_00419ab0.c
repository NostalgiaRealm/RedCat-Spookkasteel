/*
 * FUN_00419ab0 at 00419ab0
 * undefined FUN_00419ab0(void)
 * Address ranges: 00419ab0-00419b24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00419ab0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    pcVar1 = *(char **)(param_2 + 4);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    iVar2 = __strcmpi(pcVar1,s_enable_0068f0e4);
    if (iVar2 != 0) goto LAB_00419ae1;
    uVar3 = 1;
  }
  else {
LAB_00419ae1:
    if (*(char *)(param_1 + 0x7c) == '\0') goto LAB_00419b0e;
    pcVar1 = *(char **)(param_2 + 4);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
    iVar2 = __strcmpi(pcVar1,s_disable_0068f0dc);
    if (iVar2 != 0) goto LAB_00419b0e;
    uVar3 = 0;
  }
  FUN_00422880(uVar3);
LAB_00419b0e:
  FUN_00423330(param_2,param_3,param_4);
  return;
}

