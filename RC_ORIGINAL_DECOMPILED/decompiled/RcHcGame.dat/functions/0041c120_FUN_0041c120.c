/*
 * FUN_0041c120 at 0041c120
 * undefined FUN_0041c120(void)
 * Address ranges: 0041c120-0041c1f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b7a4 slot 6 for .?AVCRcDungeonMax@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b7a4 slot 6 for
   .?AVCRcDungeonMax@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_0041c120(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar2 = *(char **)(param_2 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar3 = __strcmpi(pcVar2,s_enable_0068f0e4);
  if (iVar3 == 0) {
    if (param_1[0x8c] != 0) {
      FUN_00502350(1);
    }
    FUN_00422880(1);
    FUN_00502350(1);
    cVar1 = (**(code **)(*param_1 + 0xa8))();
    if (cVar1 == '\0') {
      return 1;
    }
    uVar4 = 1;
  }
  else {
    pcVar2 = *(char **)(param_2 + 4);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    iVar3 = __strcmpi(pcVar2,s_disable_0068f0dc);
    if (iVar3 != 0) {
      uVar4 = FUN_00423330(param_2,param_3,param_4);
      return uVar4;
    }
    if (param_1[0x8c] != 0) {
      FUN_00502350(0);
    }
    FUN_00422880(0);
    FUN_00502350(0);
    cVar1 = (**(code **)(*param_1 + 0xa8))();
    if (cVar1 == '\0') {
      return 1;
    }
    uVar4 = 0;
  }
  (**(code **)(*param_1 + 0x9c))(uVar4);
  FUN_00502350(uVar4);
  return 1;
}

