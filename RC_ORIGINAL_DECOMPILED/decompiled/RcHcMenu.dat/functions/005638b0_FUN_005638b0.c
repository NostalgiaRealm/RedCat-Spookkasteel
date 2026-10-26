/*
 * FUN_005638b0 at 005638b0
 * undefined __register FUN_005638b0(int param_1, byte param_2)
 * Address ranges: 005638b0-005638eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005638b0(int param_1,byte param_2)

{
  MCIERROR MVar1;
  undefined1 auStack_14 [4];
  uint local_10;
  
  *(undefined4 *)(param_1 + 0x2d0) = 0x401;
  local_10 = (uint)param_2;
  MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x80d,0x401,(DWORD_PTR)auStack_14);
  *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  return;
}

