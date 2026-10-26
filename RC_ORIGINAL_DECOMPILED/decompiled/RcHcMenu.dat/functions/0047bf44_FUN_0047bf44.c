/*
 * FUN_0047bf44 at 0047bf44
 * LPSTR __register FUN_0047bf44(void)
 * Address ranges: 0047bf44-0047bf5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPSTR FUN_0047bf44(void)

{
  DWORD in_stack_00000004;
  LPSTR in_stack_00000008;
  
  GetCurrentDirectoryA(in_stack_00000004,in_stack_00000008);
  return in_stack_00000008;
}

