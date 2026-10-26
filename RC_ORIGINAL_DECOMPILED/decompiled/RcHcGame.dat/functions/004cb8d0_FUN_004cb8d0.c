/*
 * FUN_004cb8d0 at 004cb8d0
 * undefined FUN_004cb8d0(void)
 * Address ranges: 004cb8d0-004cb99f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bba4 slot 6 for .?AVCRcButtonModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bba4 slot 6 for
   .?AVCRcButtonModel@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_004cb8d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x168);
  if ((((iVar3 == 1) || (iVar3 == 6)) || (iVar3 == 7)) || (iVar3 == 8)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  pcVar2 = *(char **)(param_2 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar3 = __strcmpi(pcVar2,s_switch_00698d1c);
  if (iVar3 == 0) {
    FUN_004cb110();
    return 1;
  }
  pcVar2 = *(char **)(param_2 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar3 = __strcmpi(pcVar2,(char *)&DAT_00698d10);
  if (iVar3 == 0) {
    if (!bVar1) {
      FUN_004cb110();
    }
  }
  else {
    pcVar2 = *(char **)(param_2 + 4);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    iVar3 = __strcmpi(pcVar2,s_SwitchOff_00698d04);
    if (iVar3 != 0) {
      uVar4 = FUN_004d1940(param_2,param_3,param_4);
      return uVar4;
    }
    if (bVar1) {
      FUN_004cb110();
      return 1;
    }
  }
  return 1;
}

