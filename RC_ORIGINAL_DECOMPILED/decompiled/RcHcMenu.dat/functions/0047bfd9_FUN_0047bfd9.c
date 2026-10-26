/*
 * FUN_0047bfd9 at 0047bfd9
 * bool __register FUN_0047bfd9(void)
 * Address ranges: 0047bfd9-0047c00a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0047bfd9(void)

{
  HANDLE hFindFile;
  LPCSTR in_stack_00000004;
  _WIN32_FIND_DATAA local_144;
  
  hFindFile = FindFirstFileA(in_stack_00000004,&local_144);
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  return hFindFile != (HANDLE)0xffffffff;
}

