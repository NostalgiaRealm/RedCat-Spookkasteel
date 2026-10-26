/*
 * FUN_004848a0 at 004848a0
 * undefined4 __register FUN_004848a0(int * param_1)
 * Address ranges: 004848a0-004848ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004848a0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x84))();
  if (*(char *)((int)param_1 + 0x8d) == '\x05') {
    iVar1 = param_1[0x15];
  }
  else {
    iVar1 = FUN_004730d8((int)param_1);
  }
  return *(undefined4 *)(iVar1 + (uint)*(ushort *)(param_1 + 0x7b));
}

