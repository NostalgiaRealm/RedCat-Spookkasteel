/*
 * FUN_004797e0 at 004797e0
 * undefined FUN_004797e0(void)
 * Address ranges: 004797e0-00479860
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e294 slot 6 for .?AVCRcFairy@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e294 slot 6 for
   .?AVCRcFairy@@. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004797e0(int param_1,undefined4 param_2,undefined4 param_3)

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
    FUN_0047cdb0();
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

