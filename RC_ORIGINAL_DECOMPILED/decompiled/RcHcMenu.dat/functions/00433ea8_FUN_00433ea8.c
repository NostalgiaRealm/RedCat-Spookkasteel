/*
 * FUN_00433ea8 at 00433ea8
 * undefined __register FUN_00433ea8(int * param_1)
 * Address ranges: 00433ea8-00433ee4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00433ea8(int *param_1)

{
  bool bVar1;
  
  (**(code **)(*param_1 + -0x10))();
  bVar1 = FUN_00432920(param_1);
  if (bVar1) {
    FUN_00432930(param_1,'\0');
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      FUN_00433700((int)param_1,0x202,0,0xffffffff);
      return;
    }
  }
  else {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffe;
  }
  return;
}

