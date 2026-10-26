/*
 * FUN_00516b18 at 00516b18
 * undefined4 __register FUN_00516b18(int param_1, undefined * param_2)
 * Address ranges: 00516b18-00516b44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00516b18(int param_1,undefined *param_2)

{
  undefined4 local_c;
  char local_8 [4];
  
  FUN_00516bd4(param_1,param_2,(LPBYTE)&local_c,local_8,4);
  if (local_8[0] != '\x03') {
    FUN_00516728(param_2);
  }
  return local_c;
}

