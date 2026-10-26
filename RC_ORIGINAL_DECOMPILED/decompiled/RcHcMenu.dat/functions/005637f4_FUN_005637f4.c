/*
 * FUN_005637f4 at 005637f4
 * undefined __register FUN_005637f4(int param_1)
 * Address ranges: 005637f4-0056381f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005637f4(int param_1)

{
  undefined1 auStack_c [8];
  
  FUN_00562a04(param_1);
  mciSendCommandA((uint)*(ushort *)(param_1 + 0x2da),0x807,0x102,(DWORD_PTR)auStack_c);
  return;
}

