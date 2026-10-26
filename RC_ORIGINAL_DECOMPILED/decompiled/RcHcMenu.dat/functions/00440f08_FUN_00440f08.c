/*
 * FUN_00440f08 at 00440f08
 * undefined4 __register FUN_00440f08(int param_1)
 * Address ranges: 00440f08-00440f38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00440f08(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0043dafc(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00403224(*(int **)(param_1 + 0x10),(int)&PTR_FUN_0043d40c);
    if (*(short *)(iVar2 + 0x68) == *(short *)(*(int *)(param_1 + 0x18) + 0x54)) {
      return CONCAT31((int3)(CONCAT22((short)((uint)iVar2 >> 0x10),*(short *)(iVar2 + 0x68)) >> 8),1
                     );
    }
  }
  return 0;
}

