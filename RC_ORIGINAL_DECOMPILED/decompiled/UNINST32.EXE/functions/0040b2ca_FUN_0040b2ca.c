/*
 * FUN_0040b2ca at 0040b2ca
 * undefined __cdecl FUN_0040b2ca(LPSTR param_1)
 * Address ranges: 0040b2ca-0040b30b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040b2ca(LPSTR param_1)

{
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  wsprintfA(param_1,s__02d__02d__02d__d__02d_00412ea0,(uint)local_14.wMonth,(uint)local_14.wDay,
            (uint)local_14.wYear % 100,(uint)local_14.wHour,(uint)local_14.wMinute);
  return;
}

