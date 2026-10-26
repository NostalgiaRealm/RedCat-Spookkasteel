/*
 * FUN_00448364 at 00448364
 * int __register FUN_00448364(undefined4 param_1)
 * Address ranges: 00448364-0044839d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00448364(undefined4 param_1)

{
  DWORD dwThreadId;
  code *lpfn;
  LPARAM lParam;
  
  DAT_0056f9e0 = 0;
  DAT_0056f9e4 = 0;
  lParam = 0;
  lpfn = FUN_00448300;
  DAT_0056f9dc = param_1;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  if (DAT_0056f9e0 != 0) {
    return DAT_0056f9e0;
  }
  return DAT_0056f9e4;
}

