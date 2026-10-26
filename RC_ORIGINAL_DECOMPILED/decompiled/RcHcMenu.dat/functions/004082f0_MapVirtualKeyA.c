/*
 * USER32.DLL::MapVirtualKeyA at 004082f0
 * UINT __stdcall MapVirtualKeyA(UINT uCode, UINT uMapType)
 * Address ranges: 004082f0-004082f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::MapVirtualKeyA
 */

UINT __stdcall MapVirtualKeyA(UINT uCode,UINT uMapType)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004082f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = MapVirtualKeyA(uCode,uMapType);
  return UVar1;
}

