/*
 * FUN_0047c00b at 0047c00b
 * undefined4 __register FUN_0047c00b(void)
 * Address ranges: 0047c00b-0047c06f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0047c00b(void)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  ushort in_stack_00000004;
  LPBYTE in_stack_00000008;
  uint local_c;
  HKEY local_8;
  
  uVar2 = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Borland_Database_Engine_005713ea,0,0x20019,
                        &local_8);
  if (LVar1 == 0) {
    local_c = (uint)in_stack_00000004;
    LVar1 = RegQueryValueExA(local_8,s_DLLPATH_0057140b,(LPDWORD)0x0,(LPDWORD)0x0,in_stack_00000008,
                             &local_c);
    if (LVar1 != 0) {
      uVar2 = 0x2a04;
    }
    RegCloseKey(local_8);
  }
  else {
    uVar2 = 0x2a04;
  }
  return uVar2;
}

