/*
 * FUN_00485dfc at 00485dfc
 * undefined4 __register FUN_00485dfc(int param_1)
 * Address ranges: 00485dfc-00485e26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00485dfc(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x168);
  uVar2 = thunk_FUN_00479465(uVar1);
  FUN_0047fe48(uVar2);
  return uVar1;
}

