/*
 * FUN_00554ab0 at 00554ab0
 * undefined FUN_00554ab0(void)
 * Address ranges: 00554ab0-00554af5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_00554ab0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (*param_1 == '\0') {
    pcVar3 = (char *)0x0;
    param_1 = (char *)0x0;
  }
  else {
    pcVar3 = param_1 + 0x10;
    param_1 = param_1 + 4;
  }
  uVar1 = FUN_00554660(param_1,pcVar3,param_2,param_3,0x43,6,param_4,0,0,param_5);
  iVar2 = FUN_005b7d80(uVar1);
  return iVar2 != 0;
}

