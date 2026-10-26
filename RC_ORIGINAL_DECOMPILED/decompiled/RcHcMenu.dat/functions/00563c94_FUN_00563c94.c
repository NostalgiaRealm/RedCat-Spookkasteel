/*
 * FUN_00563c94 at 00563c94
 * undefined4 __register FUN_00563c94(int param_1)
 * Address ranges: 00563c94-00563cda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00563c94(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_00562a04(param_1);
  *(undefined4 *)(param_1 + 0x2d0) = 0x102;
  local_10 = 1;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x102,(DWORD_PTR)auStack_18);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return local_14;
}

