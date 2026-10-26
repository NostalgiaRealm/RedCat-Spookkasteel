/*
 * FUN_0040a3ff at 0040a3ff
 * bool __cdecl FUN_0040a3ff(LPCSTR param_1)
 * Address ranges: 0040a3ff-0040a43f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __cdecl FUN_0040a3ff(LPCSTR param_1)

{
  BOOL BVar1;
  
  FUN_0040a6db(param_1,0);
  BVar1 = RemoveDirectoryA(param_1);
  if (((DAT_004136ec != 0) && (BVar1 != 0)) && (DAT_00413b8c != (code *)0x0)) {
    (*DAT_00413b8c)(0x10,1,param_1,0);
  }
  return BVar1 == 0;
}

