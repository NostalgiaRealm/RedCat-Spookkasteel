/*
 * FUN_00476d10 at 00476d10
 * undefined FUN_00476d10(void)
 * Address ranges: 00476d10-00476d89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00476d10(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,s_enable_0068f0e4);
  if (iVar2 == 0) {
    FUN_00502350(1);
    return 1;
  }
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,s_disable_0068f0dc);
  if (iVar2 == 0) {
    FUN_00502350(0);
    return 1;
  }
  uVar3 = FUN_005027d0(param_1,param_2,param_3);
  return uVar3;
}

