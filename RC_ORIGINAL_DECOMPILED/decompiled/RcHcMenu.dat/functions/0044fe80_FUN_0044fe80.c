/*
 * FUN_0044fe80 at 0044fe80
 * bool __register FUN_0044fe80(void)
 * Address ranges: 0044fe80-0044fead
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0044fe80(void)

{
  BOOL BVar1;
  undefined4 local_8;
  int local_4;
  
  local_8 = 8;
  BVar1 = SystemParametersInfoA(0x48,8,&local_8,0);
  if (BVar1 != 0) {
    return local_4 != 0;
  }
  return false;
}

