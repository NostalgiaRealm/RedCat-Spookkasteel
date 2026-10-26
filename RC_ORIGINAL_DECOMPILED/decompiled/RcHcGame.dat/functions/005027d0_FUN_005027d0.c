/*
 * FUN_005027d0 at 005027d0
 * undefined FUN_005027d0(void)
 * Address ranges: 005027d0-005028ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005027d0(int *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
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
  pcVar1 = *(char **)(param_2 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,s_destroy_0069da44);
  if (iVar2 == 0) {
    FUN_005042c0(param_3,0);
    return 1;
  }
  pcVar1 = *(char **)(param_2 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,(char *)&DAT_0069da3c);
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x2c))(1);
    return 1;
  }
  pcVar1 = *(char **)(param_2 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,(char *)&DAT_00692e98);
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x30))();
    return 1;
  }
  return 0;
}

