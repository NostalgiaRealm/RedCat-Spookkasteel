/*
 * FUN_004064d0 at 004064d0
 * PVOID __register FUN_004064d0(LPCVOID param_1)
 * Address ranges: 004064d0-004064f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

PVOID FUN_004064d0(LPCVOID param_1)

{
  _MEMORY_BASIC_INFORMATION local_1c;
  
  VirtualQuery(param_1,&local_1c,0x1c);
  if (local_1c.State != 0x1000) {
    local_1c.AllocationBase = (PVOID)0x0;
  }
  return local_1c.AllocationBase;
}

