/*
 * FUN_00563da8 at 00563da8
 * undefined1 __register FUN_00563da8(int param_1)
 * Address ranges: 00563da8-00563dee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00563da8(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined1 local_14;
  undefined4 local_10;
  
  FUN_00562a04(param_1);
  *(undefined4 *)(param_1 + 0x2d0) = 0x102;
  local_10 = 6;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x102,(DWORD_PTR)auStack_18);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return local_14;
}

