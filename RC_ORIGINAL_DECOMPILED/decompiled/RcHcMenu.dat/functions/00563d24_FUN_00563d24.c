/*
 * FUN_00563d24 at 00563d24
 * char __register FUN_00563d24(int param_1)
 * Address ranges: 00563d24-00563d65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_00563d24(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  char local_14;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x2d0) = 0x102;
  local_10 = 4;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x814,0x102,(DWORD_PTR)auStack_18);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return local_14 + -0xc;
}

