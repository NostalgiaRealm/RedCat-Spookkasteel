/*
 * FUN_00536030 at 00536030
 * undefined4 __register FUN_00536030(int param_1, undefined4 param_2)
 * Address ranges: 00536030-00536064
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00536030(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = FUN_00501798(param_1);
  uVar2 = func_0x004f258c(*(undefined4 *)(param_1 + 0x2f8),param_1,bVar1,param_2);
  return uVar2;
}

