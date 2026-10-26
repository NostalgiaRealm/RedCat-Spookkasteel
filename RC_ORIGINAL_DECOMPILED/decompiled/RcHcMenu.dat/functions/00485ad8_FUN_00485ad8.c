/*
 * FUN_00485ad8 at 00485ad8
 * undefined4 * __register FUN_00485ad8(int param_1, undefined4 * param_2)
 * Address ranges: 00485ad8-00485b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00485ad8(int param_1,undefined4 *param_2)

{
  FUN_00402cfc(param_2,*(ushort *)(param_1 + 0x1e8) + 6,0);
  thunk_FUN_004799e2(*(undefined4 *)(param_1 + 0x168));
  return param_2;
}

