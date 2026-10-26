/*
 * FUN_00467240 at 00467240
 * undefined FUN_00467240(void)
 * Address ranges: 00467240-004672ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d9e4 slot 6 for .?AVCRcParticleSystem@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d9e4 slot 6 for
   .?AVCRcParticleSystem@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_00467240(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_00502350(1);
    FUN_004041b0(*(undefined4 *)(param_1 + 0x14b0));
    FUN_004041b0(*(undefined4 *)(param_1 + 0x16ac));
    return 1;
  }
  pcVar1 = *(char **)(param_2 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  iVar2 = __strcmpi(pcVar1,s_disable_0068f0dc);
  if (iVar2 == 0) {
    FUN_004041b0(0xffffffff);
    FUN_004041b0(0);
    return 1;
  }
  uVar3 = FUN_005027d0(param_2,param_3,param_4);
  return uVar3;
}

