/*
 * FUN_005639b4 at 005639b4
 * undefined __register FUN_005639b4(int param_1)
 * Address ranges: 005639b4-005639ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005639b4(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  if ((*(char *)(param_1 + 0x2c9) != '\0') && (*(char *)(param_1 + 0x2cf) != '\0')) {
    *(undefined4 *)(param_1 + 0x2d0) = 0x10002;
    local_14 = 0;
    MVar1 = mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x841,0x10002,(DWORD_PTR)auStack_18);
    *(MCIERROR *)(param_1 + 0x2ec) = MVar1;
  }
  return;
}

