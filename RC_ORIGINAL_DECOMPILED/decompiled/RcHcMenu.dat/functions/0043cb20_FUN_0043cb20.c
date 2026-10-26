/*
 * FUN_0043cb20 at 0043cb20
 * int __register FUN_0043cb20(int param_1)
 * Address ranges: 0043cb20-0043cb4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0043cb20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)PTR_DAT_00572210)();
  iVar2 = -iVar1;
  *(bool *)(param_1 + 0x20) = iVar1 != 0;
  if (iVar1 != 0) {
    iVar2 = SystemParametersInfoA(0x68,0,(PVOID)(param_1 + 0x10),0);
  }
  return iVar2;
}

